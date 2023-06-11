#ifndef DIALOGLOCATION_H
#define DIALOGLOCATION_H

#include <QDialog>
#include <QMessageBox>

// 在dialog种调用mainWindow
#include "mymainwindow.h"

namespace Ui {
class DialogLocation;
}

class DialogLocation : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLocation(QWidget *parent = 0);
    ~DialogLocation();

    void setRange(int rowMax, int colMax);

    void setValue(int row, int col);

private:
    Ui::DialogLocation *ui;

signals:
    void delDialog();
private slots:
    void on_btnClose_2_clicked();
    void on_btnSetText_2_clicked();
};

#endif // DIALOGLOCATION_H
