#include "dialogsetsize.h"
#include "ui_dialogsetsize.h"

DialogSetSize::DialogSetSize(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSetSize)
{
    ui->setupUi(this);
}

DialogSetSize::~DialogSetSize()
{
    delete ui;
    QMessageBox::information(this, "", "设置大小对话框已退出");
}

int DialogSetSize::rowCount()
{
    return ui->spinBoxRow->value();
}

int DialogSetSize::colCount()
{
    return ui->spinBoxColumn->value();
}

void DialogSetSize::setRowCol(QStandardItemModel *theModel)
{
    ui->spinBoxRow->setValue(theModel->rowCount());
    ui->spinBoxColumn->setValue(theModel->columnCount());
}

void DialogSetSize::on_btnOK_clicked()
{
    // accept信号
    accept();
}

void DialogSetSize::on_btnCancel_clicked()
{
    reject();
}
