#include "dialogsetheaders.h"
#include "ui_dialogsetheaders.h"

DialogSetHeaders::DialogSetHeaders(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSetHeaders)
{
    ui->setupUi(this);

    // 绑定model与listView
    strModel = new QStringListModel(this);
    ui->listView->setModel(strModel);
}

DialogSetHeaders::~DialogSetHeaders()
{
    delete ui;
    QMessageBox::information(this, "", "设置表头完成");
}

void DialogSetHeaders::setStringList(QStringList strList)
{
    strModel->setStringList(strList);
}

QStringList DialogSetHeaders::getStringList()
{
    return strModel->stringList();
}

void DialogSetHeaders::on_btnOK_clicked()
{
    accept();
}

void DialogSetHeaders::on_btnCancel_clicked()
{
    reject();
}
