#include "mymainwindow.h"
#include "ui_mymainwindow.h"

#include <QDebug>

MyMainWindow::MyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);

    // 如果在布局里设置网格布局，旁边会有空白，用setCentralWidget将其作为中间控件则不会
    this->setCentralWidget(ui->tabWidget);

    // 删除tabWidget原有tab
    int n = ui->tabWidget->count();
    for (int i = 0; i < n; i++){
        ui->tabWidget->removeTab(0);
    }

    // 一开始要显示背景图片，这里将tabWidget隐藏
    ui->tabWidget->setVisible(false);

    // 最大化显示
    this->setWindowState(Qt::WindowMaximized);

    // Tab关闭按钮
    ui->tabWidget->setTabsClosable(true);
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}

void MyMainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    painter.drawPixmap(0, ui->mainToolBar->height(), width(),
                       height() - ui->mainToolBar->height() - ui->statusBar->height(),
                       QPixmap("://images/back2.jpg"));
}

void MyMainWindow::on_actWidgetInsite_triggered()
{
    MainWindowDoc* winDoc = new MainWindowDoc(this);

    // 关闭时销毁，winDoc会变成野指针，后续不能再使用
    winDoc->setAttribute(Qt::WA_DeleteOnClose);

    int curIndex = ui->tabWidget->addTab(winDoc,
                                         QString::asprintf("Doc %d", ui->tabWidget->count()));
    ui->tabWidget->setCurrentIndex(curIndex);
    ui->tabWidget->setVisible(true);
}

void MyMainWindow::on_tabWidget_tabCloseRequested(int index)
{
    if (index < 0){
        return;
    }

    QWidget* tab = ui->tabWidget->widget(index);
    tab->close();
}

void MyMainWindow::on_tabWidget_currentChanged(int index)
{
    if (index == -1){
        ui->tabWidget->setVisible(false);
    }
}

void MyMainWindow::on_actWidget_triggered()
{
    // this是MainWindowDoc的父类，如果父类窗口被关闭了，winDoc也关闭
//    MainWindowDoc* winDoc = new MainWindowDoc(this);

    // 如果父类窗口被关闭了，winDoc不关闭
    MainWindowDoc* winDoc = new MainWindowDoc;

    winDoc->setAttribute(Qt::WA_DeleteOnClose);

    // 设置窗口标题
    winDoc->setWindowTitle("Widget独立显示");

    // 设置窗口透明度
    winDoc->setWindowOpacity(0.7);

    winDoc->show();
}

void MyMainWindow::on_actWindowInsite_triggered()
{
    FormTable* formTable = new FormTable(this);
    formTable->setAttribute(Qt::WA_DeleteOnClose);
    int index = ui->tabWidget->addTab(formTable,
                                      QString::asprintf("Table %d", ui->tabWidget->count()));
    ui->tabWidget->setCurrentIndex(index);
    ui->tabWidget->setVisible(true);
}

void MyMainWindow::on_actQuit_triggered()
{
    this->close();
}

void MyMainWindow::on_actWindow_triggered()
{
    FormTable* formTable = new FormTable(this);
    formTable->setAttribute(Qt::WA_DeleteOnClose);

    formTable->setWindowTitle("FormTable独立显示");
    formTable->setWindowOpacity(0.7);
    formTable->show();
}
