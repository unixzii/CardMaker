#include "creatorwnd.h"
#include "cserializer.h"
#include "ui_creatorwnd.h"
#include <QInputDialog>
#include <QFontDialog>
#include <QDebug>
CreatorWnd::CreatorWnd(CDocument *doc, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreatorWnd)
{
    ui->setupUi(this);

    ui->scrollArea->setBackgroundRole(QPalette::Dark);

    m_doc = doc;

    m_view = new CView(m_doc);
    m_view->setMinimumSize(m_doc->getPaperSize());
    m_view->setMaximumSize(m_doc->getPaperSize());

    ui->scrollArea->setWidget(m_view);

    prepareToolbar();
    updateList();

    m_view->setShowOptLine(true);

    connect(m_view,SIGNAL(sendPosMessage(QPoint,bool)),this,SLOT(getPosMessage(QPoint,bool)));
}

CreatorWnd::~CreatorWnd()
{
    delete ui;
    delete m_doc;
    delete m_view;
}

void CreatorWnd::closeEvent(QCloseEvent *e)
{
    if(QMessageBox::question(this,_L("提示"),_L("你还未对修改进行保存，确定要退出吗？"),QMessageBox::Yes|QMessageBox::No) == QMessageBox::Yes)
    {
        e->accept();
        emit closed();
    }else{
        e->ignore();
    }

}

void CreatorWnd::on_action_toggled(bool arg1)
{
    m_view->setShowOptLine(arg1);
}



void CreatorWnd::updateList()
{
    ui->listWidget->clear();
    foreach(CDocObject *obj,*m_doc->getObjects())
    {
        ui->listWidget->addItem(QString("%0: %1").arg(obj->getId()).arg(obj->getText()));
    }
}

void CreatorWnd::prepareToolbar()
{
    bool enabled;
    if(ui->listWidget->currentItem() < 0)
    {
        enabled = false;
    }else{
        enabled = true;
    }

    ui->boldAction->setEnabled(enabled);
    ui->italicAction->setEnabled(enabled);
    ui->underlineAction->setEnabled(enabled);
    ui->fontAction->setEnabled(enabled);
    ui->colorAction->setEnabled(enabled);
    ui->delButton->setEnabled(enabled);
}

void CreatorWnd::on_pointerAction_triggered()
{
    m_view->setMove(ui->pointerAction->isChecked());
}


void CreatorWnd::on_textAction_triggered()
{
    bool ok;
    QString text = QInputDialog::getText(this,_L("字段名称"),_L("请为该字段设置一个名称"));
    if(!text.isEmpty())
    {
        CTextObj *textObj = new CTextObj;

        textObj->setPos(QPoint(15,15));
        textObj->setReplaceText(text);
        textObj->setTextFont(QFont(_L("楷体"),24));
        textObj->setTextColor(QColor(Qt::white));

        m_doc->addObject(textObj);
        updateList();
    }
}



void CreatorWnd::on_listWidget_currentRowChanged(int currentRow)
{
    if(currentRow < 0)
    {
        m_view->setCurrentObj(-1);
    }else{
        QString item = ui->listWidget->item(currentRow)->text();
        QString sId = item.left(item.indexOf(":"));
        int id = sId.toInt();
        m_view->setCurrentObj(id);
    }
    prepareToolbar();
}

void CreatorWnd::on_boldAction_triggered()
{
    foreach(CDocObject *obj,*m_doc->getObjects())
    {
        if(obj->getId() == m_view->getCurrentObj())
        {
            CTextObj *textObj = (CTextObj*)obj;
            QFont font = textObj->getTextFont();
            font.setBold(!font.bold());
            textObj->setTextFont(font);
            ui->boldAction->setChecked(font.bold());
            m_view->repaint();
        }
    }
}

void CreatorWnd::on_italicAction_triggered()
{
    foreach(CDocObject *obj,*m_doc->getObjects())
    {
        if(obj->getId() == m_view->getCurrentObj())
        {
            CTextObj *textObj = (CTextObj*)obj;
            QFont font = textObj->getTextFont();
            font.setItalic(!font.italic());
            textObj->setTextFont(font);
            ui->italicAction->setChecked(font.italic());
            m_view->repaint();
        }
    }
}

void CreatorWnd::on_underlineAction_triggered()
{
    foreach(CDocObject *obj,*m_doc->getObjects())
    {
        if(obj->getId() == m_view->getCurrentObj())
        {
            CTextObj *textObj = (CTextObj*)obj;
            QFont font = textObj->getTextFont();
            font.setUnderline(!font.underline());
            textObj->setTextFont(font);
            ui->underlineAction->setChecked(font.underline());
            m_view->repaint();
        }
    }
}

void CreatorWnd::on_fontAction_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok);
    if(!ok)
        return;
    foreach(CDocObject *obj,*m_doc->getObjects())
    {
        if(obj->getId() == m_view->getCurrentObj())
        {
            CTextObj *textObj = (CTextObj*)obj;
            textObj->setTextFont(font);

            m_view->repaint();
        }
    }
}

void CreatorWnd::on_colorAction_triggered()
{
    QColor color = QColorDialog::getColor();
    if(color.isValid())
    {
        foreach(CDocObject *obj,*m_doc->getObjects())
        {
            if(obj->getId() == m_view->getCurrentObj())
            {
                CTextObj *textObj = (CTextObj*)obj;
                textObj->setTextColor(color);

                m_view->repaint();
            }
        }
    }
}


void CreatorWnd::on_delButton_clicked()
{
    m_doc->delObject(m_view->getCurrentObj());
    ui->listWidget->takeItem(ui->listWidget->currentRow());
    m_view->repaint();
}

void CreatorWnd::on_listWidget_itemChanged(QListWidgetItem *item)
{
    prepareToolbar();
}

void CreatorWnd::on_saveAction_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this,"Save","",_L("Card Maker样式文档 (*.cms)"));
    if(!fileName.isEmpty())
    {
        CSerializer::Serialize(m_doc,fileName);
    }
}

void CreatorWnd::getPosMessage(QPoint pos,bool show)
{
    if(show)
    {
        this->statusBar()->showMessage(QString("(%0,%1)").arg(pos.x()).arg(pos.y()));
    }else{
        this->statusBar()->showMessage("");
    }
}
