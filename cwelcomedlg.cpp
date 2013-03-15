#include "cwelcomedlg.h"
#include "cserializer.h"
#include "ui_cwelcomedlg.h"

#include <QPainter>
#include "cdocument.h"


#include <QDebug>

#ifdef Q_WS_WIN32
#include <Windows.h>
#endif

CWelcomeDlg::CWelcomeDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CWelcomeDlg)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Window |Qt::WindowSystemMenuHint);


    creatorWnd = 0;
    genWnd = 0;

    m_animation = new QTimeLine(500,this);
    m_animation->setUpdateInterval(5);
    m_animation->setFrameRange(0,100);
    QEasingCurve easing(QEasingCurve::OutBack);
    easing.setOvershoot(1.0);
    m_animation->setEasingCurve(easing);
    connect(m_animation,SIGNAL(frameChanged(int)),this,SLOT(frameChanged(int)));
    connect(m_animation,SIGNAL(finished()),this,SLOT(animationFinished()));
    m_animation->start();

    wnd_cache = QPixmap(this->size());
    wnd_cache.fill(QColor(0,0,0,0));
    this->render(&wnd_cache,QPoint(),QRegion(),QWidget::DrawChildren);
    ui->frame->setVisible(false);

    isDraging = false;


    scanDir();
}

CWelcomeDlg::~CWelcomeDlg()
{
    delete ui;
}

void CWelcomeDlg::on_newStyleButton_clicked()
{
    /*newStyleDlg *nsDlg = new newStyleDlg(this);
    if(nsDlg->exec() == QDialog::Accepted)
    {
        CDocument *doc = new CDocument;
        doc->setStyleBackground(nsDlg->getPixmap());
        doc->setPaperSize(nsDlg->getPixmap().size());
        doc->setStyleName(nsDlg->getStyleName());


        creatorWnd = new CreatorWnd(doc);
        connect(creatorWnd,SIGNAL(closed()),this,SLOT(creatorClosed()));
        creatorWnd->setWindowTitle(_L("模板设计器"));
        creatorWnd->show();
        this->hide();
    }
    delete nsDlg;*/
    CM_NewDocumentDlg *nsDlg = new CM_NewDocumentDlg(this);
    if(nsDlg->exec() == QDialog::Accepted)
    {
        CDocument *doc = new CDocument;
        doc->setStyleBackground(nsDlg->getBackground());
        doc->setPaperSize(nsDlg->getPaperSize());
        doc->setStyleName(nsDlg->getStyleName());


        creatorWnd = new CreatorWnd(doc);
        connect(creatorWnd,SIGNAL(closed()),this,SLOT(creatorClosed()));
        creatorWnd->setWindowTitle(_L("模板设计器"));
        creatorWnd->show();
        this->hide();
    }
    delete nsDlg;

}

void CWelcomeDlg::creatorClosed()
{

   delete creatorWnd;   //防止内存泄露


    this->show();
}

void CWelcomeDlg::generClosed()
{
    delete genWnd;
    this->show();
}

void CWelcomeDlg::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);
    p.setRenderHint(QPainter::SmoothPixmapTransform);

    p.translate(this->width() / 2.0,this->height() / 2.0);

    qreal animFactor = m_animation->currentFrame() / 100.0;

    p.setOpacity(animFactor);
    p.scale(animFactor,animFactor);



    p.drawPixmap(-this->width() / 2.0,-this->height() / 2.0,QPixmap(":/Resources/bg_new.png"));
    if(m_animation->state() == QTimeLine::Running)
        p.drawPixmap(-this->width() / 2.0,-this->height() / 2.0,wnd_cache);



}

void CWelcomeDlg::closeEvent(QCloseEvent *)
{
    qApp->exit();
}

void CWelcomeDlg::mousePressEvent(QMouseEvent *e)
{
    /*SendMessage(this->winId(),WM_LBUTTONDOWN,HTCAPTION,0);
    ::ReleaseCapture();

    if(e->buttons() & Qt::LeftButton)
    {
        dragPos = e->globalPos() - this->frameGeometry().topLeft();
        isDraging = true;
        e->accept();
    }*/
}

void CWelcomeDlg::mouseMoveEvent(QMouseEvent *e)
{
    //Old method to move,discarded.
    /*if((e->buttons() & Qt::LeftButton) && isDraging)
    {
        move(e->globalPos() - dragPos);
        e->accept();
    }*/
}

void CWelcomeDlg::mouseReleaseEvent(QMouseEvent *)
{
    //isDraging = false;
}

bool CWelcomeDlg::winEvent(MSG *message, long *result)
{
    if(message->message == WM_NCHITTEST)
    {
        int xPos,yPos;
        xPos = LOWORD(message->lParam) - this->x();
        yPos = HIWORD(message->lParam) - this->y();
        QRect panelRect(ui->frameDrag->x(),ui->frameDrag->y(),ui->frameDrag->width(),ui->frameDrag->height());
        QRect exRect(ui->exitButton->x(),ui->exitButton->y(),60,20);

        //qDebug() << message->lParam << xPos << yPos << ui->dragRect->rect();
        //ScreenToClient(this->winId(),point);

        if(panelRect.contains(xPos,yPos,true) && !exRect.contains(xPos,yPos,true))
        {
            *result = HTCAPTION;
            return true;
        }

    }
    return false;
}

void CWelcomeDlg::scanDir()
{
    ui->systemStyleList->clear();
    ui->systemStyleList->addItem(_L("浏览..."));
    QDir dir("./templates/");
    foreach(QString fileName,dir.entryList(QDir::Files|QDir::NoDotAndDotDot,QDir::Name))
    {
        ui->systemStyleList->addItem(QFileInfo(fileName).baseName());
    }
}

void CWelcomeDlg::on_importStyleButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Import","",_L("Card Maker样式文档 (*.cms)"));
    if(!fileName.isEmpty())
    {
        CDocument *doc = new CDocument;
        if(!CSerializer::Unserialize(fileName,doc))
        {
            QMessageBox::critical(this,"Error",_L("无法打开该文件。\n\n1.请确认该文件为Card Maker样式文档;\n2.文件可能已损坏;\n3.文件可能正在被其他应用程序占用."));
            return;
        }

        creatorWnd = new CreatorWnd(doc);
        connect(creatorWnd,SIGNAL(closed()),this,SLOT(creatorClosed()));
        creatorWnd->setWindowTitle(_L("模板设计器 - %0").arg(QFileInfo(fileName).baseName()));
        creatorWnd->show();
        this->hide();
    }
}

void CWelcomeDlg::on_systemStyleList_itemDoubleClicked(QListWidgetItem *item)
{
    QString fileName;
    if(ui->systemStyleList->currentIndex().row() == 0)
    {
        fileName = QFileDialog::getOpenFileName(this,"Open","",_L("Card Maker样式文档 (*.cms)"));
        if(fileName.isNull())
            return;
    }else{
        fileName = QString("./templates/%0.cms").arg(item->text());
        if(!QFile::exists(fileName))
            return;
    }

    CDocument *doc = new CDocument;
    if(!CSerializer::Unserialize(fileName,doc))
    {
        QMessageBox::critical(this,"Error",_L("无法打开该文件。\n\n1.请确认该文件为Card Maker样式文档;\n2.文件可能已损坏;\n3.文件可能正在被其他应用程序占用."));
        return;
    }

    genWnd = new GenWnd(doc);
    connect(genWnd,SIGNAL(closed()),this,SLOT(generClosed()));
    genWnd->setWindowTitle(_L("卡片生成器 - %0").arg(doc->getStyleName()));
    genWnd->show();
    this->hide();
}

void CWelcomeDlg::on_systemStyleList_currentRowChanged(int currentRow)
{
    if(ui->systemStyleList->currentIndex().row() == 0)
        return;

    QString fileName;
    fileName = QString("./templates/%0.cms").arg(ui->systemStyleList->item(currentRow)->text());
    CDocument *doc = new CDocument;
    if(!CSerializer::Unserialize(fileName,doc))
    {
        QMessageBox::critical(this,"Error",_L("无法打开该文件。\n\n1.请确认该文件为Card Maker样式文档;\n2.文件可能已损坏;\n3.文件可能正在被其他应用程序占用."));
        return;
    }

    ui->previewLabel->setPixmap(doc->getPreview().scaled(ui->previewLabel->size(),Qt::KeepAspectRatio));
}

void CWelcomeDlg::on_aboutLabel_linkActivated(const QString &link)
{
    QMessageBox::information(this,_L("关于"),_L(
                                              "Card Maker(卡片批量制作器)\n\n"
                                              "作者: 杨弘宇\n"
                                              "电子邮箱: unixzii@gmail.com\n"
                                 "学校: 烟台三中"));
}

void CWelcomeDlg::frameChanged(int frame)
{
    Q_UNUSED(frame)

    update();
}

void CWelcomeDlg::animationFinished()
{
    ui->frame->setVisible(true);
}
