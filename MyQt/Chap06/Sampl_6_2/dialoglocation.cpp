#include "dialoglocation.h"
#include "ui_dialoglocation.h"

DialogLocation::DialogLocation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLocation)
{
    ui->setupUi(this);
}

DialogLocation::~DialogLocation()
{
    delete ui;
    QMessageBox::information(this, "", "定位表头完成");
    emit delDialog();   // 窗口销毁时调用析构函数，并发出信号，供mainWindow调用
}

void DialogLocation::setRange(int rowMax, int colMax)
{
    ui->spinBoxRow_2->setRange(1, rowMax);
    ui->spinBoxColumn_2->setRange(1, colMax);
}

void DialogLocation::setValue(int row, int col)
{
    ui->spinBoxRow_2->setValue(row);
    ui->spinBoxColumn_2->setValue(col);
}


void DialogLocation::on_btnClose_2_clicked()
{
    this->close();
}

void DialogLocation::on_btnSetText_2_clicked()
{
    int row = ui->spinBoxRow_2->value();
    int col = ui->spinBoxColumn_2->value();
    QString text = ui->edtCaption_2->text();

    // 拿到父界面指针
    MyMainWindow* parW = (MyMainWindow*) parentWidget();

    // 调用父界面指针函数
    parW->setCellText(row, col, text);
}
