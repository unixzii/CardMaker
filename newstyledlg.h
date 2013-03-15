#ifndef NEWSTYLEDLG_H
#define NEWSTYLEDLG_H

#include <QDialog>
#include <QColor>
#include <QPixmap>

namespace Ui {
class newStyleDlg;
}

class newStyleDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit newStyleDlg(QWidget *parent = 0);
    ~newStyleDlg();

    QPixmap getPixmap();
    QString getStyleName();

signals:

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_openButton_clicked();

    void on_selectColorButton_clicked();


    void on_okButton_clicked();

    void on_cancelButton_clicked();

    void on_widthSpinBox_editingFinished();

    void on_heightSpinBox_editingFinished();

private:
    Ui::newStyleDlg *ui;
    QColor m_color;

    void updatePreview();
};

#endif // NEWSTYLEDLG_H
