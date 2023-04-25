#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //准备数据
    QStringList strList = {"item1", "item2", "item3", "item4", "item5", "item6"};

    //创建模型（与数据相关）
    strModel = new QStringListModel(this);
    strModel->setStringList(strList);

    //模型赋予View，二者绑定，后续只需要改变model就可以了（与用户展示相关）
    ui->listView->setModel(strModel);

    //设置单击选中及双击编辑
    ui->listView->setEditTriggers(QAbstractItemView::SelectedClicked |
                                  QAbstractItemView::DoubleClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnClearTxt_clicked()
{
    ui->plainTextEdit->clear();
}


void MainWindow::on_btnShowTxt_clicked()
{
    ui->plainTextEdit->clear();
    QStringList strList = strModel->stringList();
    for (QString str: strList){
        ui->plainTextEdit->appendPlainText(str);
    }
}


void MainWindow::on_btnInitLst_clicked()
{
    QStringList strList = {"item1", "item2", "item3", "item4", "item5", "item6"};
    strModel->setStringList(strList);
}


void MainWindow::on_btnClearLst_clicked()
{
    int n = strModel->rowCount();
    strModel->removeRows(0, n);
}

void MainWindow::on_btnDelLst_clicked()
{
    QModelIndex mIndex = ui->listView->currentIndex();  //(row, col, QObject)
//    qDebug() << ui->listView->currentIndex();
    strModel->removeRow(mIndex.row());
}

void MainWindow::on_btnAppendLst_clicked()
{
    int row = strModel->rowCount();

    //创建空行
    strModel->insertRow(row);

    QModelIndex mIndex = strModel->index(row, 0);

    QModelIndex mIndex1 = QAbstractItemModel::createIndex(row, 0);

    strModel->setData(mIndex1, "NewItem");

}
