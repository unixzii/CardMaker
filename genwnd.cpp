#include "genwnd.h"
#include "ui_genwnd.h"
#include <QFileDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QWindowsXPStyle>
#include <QDebug>

GenWnd::GenWnd(CDocument *doc, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GenWnd)
{
    ui->setupUi(this);

    //ui->tableWidget->setStyle(new QWindowsXPStyle());
    ui->tableWidget->setAlternatingRowColors(true);
    QPalette t_palette = palette();
    t_palette.setColor(QPalette::AlternateBase,QColor(225,255,255));
    ui->tableWidget->setPalette(t_palette);

    m_doc = doc;
    ui->tableWidget->setColumnCount(m_doc->getObjects()->count());

    foreach(CDocObject *obj,*m_doc->getObjects())
    {
        QString text = obj->getText();
        header << text;
    }
    ui->tableWidget->setHorizontalHeaderLabels(header);
}

GenWnd::~GenWnd()
{
    delete ui;
}

void GenWnd::on_plusButton_clicked()
{
    ui->tableWidget->insertRow(0);
}

void GenWnd::on_minusButton_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}

void GenWnd::on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    if(currentRow < 0)
    {
        ui->minusButton->setEnabled(false);
    }else{
        ui->minusButton->setEnabled(true);
    }
}

void GenWnd::closeEvent(QCloseEvent *)
{
    emit closed();
}

void GenWnd::on_pushButton_clicked()
{
    QString dirName = QFileDialog::getExistingDirectory(this,"Export to");
    if(!dirName.isEmpty())
    {
        QStringList fields(header);
        fields.prepend(_L("(自动编号)"));
        QString field = QInputDialog::getItem(this,_L("选择字段"),_L("请选择一个字段来用作文件名(该字段下的所有项目应没有重复内容!)"),fields,0,false);
        if(field.isEmpty())
            return;

        QPixmap bg = m_doc->getStyleBackground();

        m_prDlg = new CProgressDlg(this);
        connect(m_prDlg,SIGNAL(requestCancel()),this,SLOT(cancel()));
        m_prDlg->show();
        qApp->processEvents();

        m_prDlg->setProgressRange(0,ui->tableWidget->rowCount());
        setState(_L("正在准备生成..."),0);
        isCancel = false;
        for(int i = 0;i<ui->tableWidget->rowCount();i++)
        {
            if(isCancel)
                break;
            setState(_L("正在生成第%0张（共%1张），请稍等！").arg(i+1).arg(ui->tableWidget->rowCount()),i+1);
            QPixmap pixmap(m_doc->getPaperSize());
            QPainter p(&pixmap);
            p.setRenderHint(QPainter::Antialiasing);
            p.drawPixmap(0,0,bg);
            for(int j = 0;j<m_doc->getObjects()->count();j++)
            {
                QString text;
                text = ui->tableWidget->item(i,j)->text();
                m_doc->getObjects()->at(j)->drawObj(text,p);
            }

            QString saveFileName;
            if(fields.indexOf(field) == 0)
            {
                saveFileName = QString::number(i + 1);
            }else{
                saveFileName = ui->tableWidget->item(i,fields.indexOf(field) - 1)->text();
            }
            pixmap.save(QString("%0\\%1.png").arg(dirName).arg(saveFileName));
        }
        m_prDlg->close();
        disconnect(m_prDlg);
        delete m_prDlg;
        if(isCancel)
        {
            QMessageBox::information(this,_L("提示"),_L("卡片生成操作已取消。"));
        }else{
            QMessageBox::information(this,_L("提示"),_L("卡片文件生成完毕!"));
        }
    }
}


void GenWnd::on_action_CSV_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Open CSV File","","CSV (*.csv)");
    if(!fileName.isEmpty())
    {
        QFile file(fileName);
        file.open(QFile::ReadOnly);
        QTextStream stm(&file);
        QString line;
        int count = 0;
        do {
            line = stm.readLine();
            qDebug() << line;
            ui->tableWidget->insertRow(count);
            for(int i = 0;i<ui->tableWidget->columnCount();i++)
            {
                ui->tableWidget->setItem(count,i,new QTableWidgetItem(line.section(",",i,i)));
            }
            ++count;

        } while (!line.isNull());
        ui->tableWidget->removeRow(count - 1);
        file.close();
    }
}

void GenWnd::cancel()
{
    isCancel = true;
}

void GenWnd::setState(QString state, int value)
{
    m_prDlg->setState(state,value);
    qApp->processEvents();
}
