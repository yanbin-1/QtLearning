#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //创建model
    fileModel = new QFileSystemModel(this);
    fileModel->setRootPath(QDir::currentPath());    //添加数据

    //将model添加进不同的view
    //不同的数据需要不同的model存储，但是多个model可以存进不同的view中
    ui->treeView->setModel(fileModel);
    ui->listView->setModel(fileModel);
    ui->tableView->setModel(fileModel);
    ui->tableView->verticalHeader()->setVisible(false); //行名取消显示

    //信号与槽关联，treeView单击时，其目录设置为listView和tableView的根节点
    connect(ui->treeView, &QTreeView::clicked,
            ui->listView, &QListView::setRootIndex);
    connect(ui->treeView, &QTreeView::clicked,
            ui->tableView, &QTableView::setRootIndex);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    ui->LabFileName->setText(fileModel->fileName(index));   //文件名字
    ui->LabPath->setText(fileModel->filePath(index));   //文件绝对路径
    ui->LabType->setText(fileModel->type(index));   //文件类型

    //文件大小
    float sz = fileModel->size(index) / 1024;   //默认是B，转化为KB
    if (sz < 1024){
        ui->LabFileSize->setText(QString::number(sz) + "KB");
    }
    else{
        ui->LabFileSize->setText(QString::asprintf("%.2f MB", sz / 1024));
    }

    bool checked = fileModel->isDir(index);
    ui->chkIsDir->setChecked(checked);
}

