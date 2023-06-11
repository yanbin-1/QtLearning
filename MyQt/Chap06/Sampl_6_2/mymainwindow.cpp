#include "mymainwindow.h"
#include "ui_mymainwindow.h"

MyMainWindow::MyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);

    // TableView相关设置
    theModel = new QStandardItemModel(this);
    theSelection = new QItemSelectionModel(theModel);
    ui->tableView->setModel(theModel);
    ui->tableView->setSelectionModel(theSelection);
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}

void MyMainWindow::setCellText(int row, int col, QString text)
{
    QModelIndex index = theModel->index(row - 1, col - 1);
    theModel->setData(index, text, Qt::DisplayRole);

    theSelection->clear();
    theSelection->setCurrentIndex(index, QItemSelectionModel::Select);
}

void MyMainWindow::on_actFile_Quit_triggered()
{
    this->close();
}

void MyMainWindow::on_actTab_SetSize_triggered()
{
    // 拿到模态窗口的指针
    DialogSetSize* dlg = new DialogSetSize(this);

    // 根据theModel设置spinBox中的数值
    dlg->setRowCol(theModel);

    // 运行模态窗口（会挡住后面的内容），获取后续操作的结果res
    int res = dlg->exec();

    // 如果点了确定
    if (res ==  QDialog::Accepted){

        // 拿到窗口中的行列，写成函数好一点
        int row = dlg->rowCount();
        int col = dlg->colCount();

        // 设置TableView行列
        theModel->setRowCount(row);
        theModel->setColumnCount(col);
    }

    // 销毁指针，运行析构函数（运行析构函数中加入的标准对话框）
    delete dlg;
}

void MyMainWindow::on_actTab_SetHeader_triggered()
{
    DialogSetHeaders* dlgHeaders = new DialogSetHeaders(this);

    // 依据TableView初始化ListView
    int n = theModel->columnCount();

    QStringList strList;
    for (int i = 0; i < n; i++){
        strList << theModel->headerData(i, Qt::Horizontal).toString();
    }

    dlgHeaders->setStringList(strList);

    // 依据ListView改变TableView
    int res = dlgHeaders->exec();
    if (res == QDialog::Accepted){
        QStringList strList = dlgHeaders->getStringList();
        theModel->setHorizontalHeaderLabels(strList);
    }

    delete dlgHeaders;
}

void MyMainWindow::on_actTab_Locate_triggered()
{
    //通过控制actTab_Locate的enable属性避免重复点击
    ui->actTab_Locate->setEnabled(false);

    DialogLocation* dlgLocate = new DialogLocation(this);

    //对话框关闭时自动删除对话框对象,用于不需要读取返回值的对话框
    dlgLocate->setAttribute(Qt::WA_DeleteOnClose);

    //获取已有flags，目前理解为窗口的各种属性
    Qt::WindowFlags flags=dlgLocate->windowFlags();

    //设置对话框包含原有属性 | 固定大小 | 窗口置顶
    dlgLocate->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint | Qt::WindowStaysOnTopHint);

    dlgLocate->setRange(theModel->rowCount(), theModel->columnCount());
    QModelIndex curIndex = theSelection->currentIndex();
    if (curIndex.isValid()){
        dlgLocate->setValue(curIndex.row() + 1, curIndex.column() + 1);
    }

    //非模态显示对话框
    dlgLocate->show();

    // 检测dlgLocation消失
    connect(dlgLocate, &DialogLocation::delDialog, ui->actTab_Locate, [this](){
        ui->actTab_Locate->setEnabled(true);
    });

    // 检测单元格索引变化
    connect(this, &MyMainWindow::cellIndexChanged, dlgLocate, &DialogLocation::setValue);
}

void MyMainWindow::on_tableView_clicked(const QModelIndex &index)
{
    emit cellIndexChanged(index.row() + 1, index.column() + 1);
}
