#ifndef DIALOGSETSIZE_H
#define DIALOGSETSIZE_H

#include <QDialog>
#include <QMessageBox>
#include <QStandardItemModel>

namespace Ui {
class DialogSetSize;
}

class DialogSetSize : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSetSize(QWidget *parent = 0);
    ~DialogSetSize();

    // 函数写在public中，因为后续需要在MainWindow调用
    int rowCount();
    int colCount();

    void setRowCol(QStandardItemModel* theModel);

private slots:
    void on_btnOK_clicked();

    void on_btnCancel_clicked();

private:
    Ui::DialogSetSize *ui;
};

#endif // DIALOGSETSIZE_H
