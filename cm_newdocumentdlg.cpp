#include "cm_newdocumentdlg.h"
#include "ui_cm_newdocumentdlg.h"

class CM_NewDocumentDlgPrivate
{
public:
    CM_NewDocumentDlgPrivate()
    {
        color = QColor(Qt::white);
        bgType = 0;
        picMode = 0;
    }

    QColor color;
    QPixmap bgPixmap;
    int bgType;
    int picMode;
};

CM_NewDocumentDlg::CM_NewDocumentDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CM_NewDocumentDlg)
{
    ui->setupUi(this);

    this->setWindowTitle(QString::fromLocal8Bit("新建模板"));

    d = new CM_NewDocumentDlgPrivate;
}

QPixmap CM_NewDocumentDlg::getBackground()
{
    QPixmap bg;
    QSize size(ui->spinWidth->value(),ui->spinHeight->value());
    switch(d->bgType)
    {
    case 0:
        bg = RenderingHelper::generateBackground(size,d->color);
        break;
    case 1:
        bg = RenderingHelper::generateBackground(size,d->bgPixmap,ui->comboPicMode->currentIndex());
        break;
    case 2:
        bg = RenderingHelper::generateBackground(size,QColor(0,0,0,0));
        break;
    }

    return bg;
}

CM_NewDocumentDlg::~CM_NewDocumentDlg()
{
    delete ui;
}

void CM_NewDocumentDlg::on_btnColor_clicked()
{
    QColor color = QColorDialog::getColor();
    if(color.isValid())
    {
        QPixmap tile(50,50);
        tile.fill(color);
        QIcon icon(tile);
        ui->btnColor->setIcon(icon);
        d->color = color;
        updatePreview();
    }
}

void CM_NewDocumentDlg::on_comboBackgroundType_currentIndexChanged(int index)
{
    d->bgType = index;
    updatePreview();
    if(index == 2)
    {
        ui->stackedWidget->setVisible(false);
        return;
    }else{
        ui->stackedWidget->setVisible(true);
    }
    ui->stackedWidget->setCurrentIndex(index);
}

void CM_NewDocumentDlg::on_checkLocks_clicked(bool checked)
{
    ui->comboRatio->setEnabled(checked);
}


void CM_NewDocumentDlg::on_spinWidth_editingFinished()
{
    if(ui->checkLocks->isChecked())
        ui->spinHeight->setValue(calcRatioValue(ui->comboRatio->currentText(),ui->spinWidth->value(),false));
    updatePreview();
}

void CM_NewDocumentDlg::on_spinHeight_editingFinished()
{
    if(ui->checkLocks->isChecked())
        ui->spinWidth->setValue(calcRatioValue(ui->comboRatio->currentText(),ui->spinHeight->value(),true));
    updatePreview();
}
int CM_NewDocumentDlg::calcRatioValue(QString str, int num, bool direction)
{
    if(str == QString::fromLocal8Bit("方形像素"))
        return num;

    QString ratioStr = str.right(str.count() - str.indexOf("(")).replace("(","").replace(")","");
    int factor1 = ratioStr.section(":",0,0).toInt();
    int factor2 = ratioStr.section(":",1,1).toInt();
    float factor = (float)factor1 / (float)factor2;

    int result;
    if(direction)
    {
        result = (int)((float)num * factor);
    }else{
        result = (int)((float)num / factor);
    }

    return result;
}

void CM_NewDocumentDlg::updatePreview()
{
    QPixmap preview;
    QSize size(ui->spinWidth->value(),ui->spinHeight->value());
    switch(d->bgType)
    {
    case 0:
        preview = RenderingHelper::generateBackground(size,d->color);
        break;
    case 1:
        preview = RenderingHelper::generateBackground(size,d->bgPixmap,ui->comboPicMode->currentIndex());
        break;
    case 2:
        preview = RenderingHelper::generateBackground(size);
        break;
    }

    ui->preview->setPixmap(preview.scaled(ui->preview->geometry().size(),Qt::KeepAspectRatio));
}



void CM_NewDocumentDlg::on_toolButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,QString::fromLocal8Bit("打开图像"),"",QString::fromLocal8Bit("图像文件 (*.png *.jpg *.bmp);;所有文件 (*.*)"));
    if(!fileName.isEmpty())
    {
        if(QPixmap(fileName).isNull())
        {
            QMessageBox msgbox;
            msgbox.setText(QString("An error occured while loading file:\n%0").arg(fileName));
            msgbox.setIcon(QMessageBox::Critical);
            msgbox.exec();
            return;
        }else{
            d->bgPixmap = QPixmap(fileName);
            updatePreview();
        }
    }
}

void CM_NewDocumentDlg::on_comboPicMode_currentIndexChanged(int index)
{
    d->picMode = index;
    updatePreview();
}

void CM_NewDocumentDlg::on_btnCancel_clicked()
{
    this->reject();
}

void CM_NewDocumentDlg::on_btnOk_clicked()
{
    if(ui->editTitle->text() == "")
    {
        QMessageBox::warning(this,"Warning","Please input title!");
        return;
    }
    this->accept();
}


QString CM_NewDocumentDlg::getStyleName()
{
    return ui->editTitle->text();
}


QSize CM_NewDocumentDlg::getPaperSize()
{
    return QSize(ui->spinWidth->value(),ui->spinHeight->value());
}
