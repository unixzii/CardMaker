#include "newstyledlg.h"
#include "ui_newstyledlg.h"

#include "appglobal.h"

#include <QFileDialog>
#include <QColorDialog>
#include <QMessageBox>

newStyleDlg::newStyleDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newStyleDlg)
{
    ui->setupUi(this);

    m_color = QColor(Qt::white);
}

newStyleDlg::~newStyleDlg()
{
    delete ui;
}

QPixmap newStyleDlg::getPixmap()
{
    QPixmap pixmap;
    switch(ui->comboBox->currentIndex())
    {
    case 0:
        pixmap = QPixmap(ui->fileNameEdit->text());
        break;
    case 1:
        pixmap = QPixmap(ui->widthSpinBox->value(),ui->heightSpinBox->value());
        pixmap.fill(m_color);
        break;
    }
    return pixmap;
}

QString newStyleDlg::getStyleName()
{
    return ui->styleNameEdit->text();
}

void newStyleDlg::on_comboBox_currentIndexChanged(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
    updatePreview();
}

void newStyleDlg::on_openButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,_L("打开..."),"","Images (*.png *.jpg)");
    if(!fileName.isEmpty())
    {
        QPixmap pixmap(fileName);
        if(!pixmap.isNull())
        {
            ui->fileNameEdit->setText(fileName);
            updatePreview();
        }else{
            QMessageBox::critical(this,_L("错误"),_L("图片打开时出现错误！"));
        }
    }
}

void newStyleDlg::on_selectColorButton_clicked()
{
    QColor color = QColorDialog::getColor();
    if(color.isValid())
    {
        m_color = color;
        updatePreview();
    }
}

void newStyleDlg::updatePreview()
{

    ui->previewLabel->setPixmap(getPixmap().scaled(ui->previewLabel->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}



void newStyleDlg::on_okButton_clicked()
{
    if(ui->styleNameEdit->text().isEmpty())
    {
        QMessageBox::warning(this,_L("警告"),_L("请设置样式名称。"));
        return;
    }
    if(ui->comboBox->currentIndex() == 0)
    {
        if(ui->fileNameEdit->text().isEmpty())
        {
            QMessageBox::warning(this,_L("警告"),_L("请选择一个图片以继续。"));
            return;
        }
    }

    this->accept();
}

void newStyleDlg::on_cancelButton_clicked()
{
    this->reject();
}

void newStyleDlg::on_widthSpinBox_editingFinished()
{
    updatePreview();
}

void newStyleDlg::on_heightSpinBox_editingFinished()
{
    updatePreview();
}
