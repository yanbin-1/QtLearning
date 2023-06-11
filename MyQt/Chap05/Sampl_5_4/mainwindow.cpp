#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //TableView相关设置
    theModel = new QStandardItemModel(10, FixedColoumCount);
    theSelection = new QItemSelectionModel(theModel);   //选择模型
    ui->tableView->setModel(theModel);
    ui->tableView->setSelectionModel(theSelection);

    //状态栏设置
    labCurfile = new QLabel("当前文件：", this);
    labCellPos = new QLabel("当前单元格：", this);
    labCellText = new QLabel("单元格内容：", this);
    labCurfile->setMinimumWidth(200);  //设置qlabel的宽度
    labCellPos->setMinimumWidth(150);
    ui->statusBar->addWidget(labCurfile);
    ui->statusBar->addWidget(labCellPos);
    ui->statusBar->addWidget(labCellText);

    connect(theSelection, &QItemSelectionModel::currentChanged,
            this, &MainWindow::on_theSelection_Changed);

    //自定义代理
    ui->tableView->setItemDelegateForColumn(0, &intSpinDelegate);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_theSelection_Changed(const QModelIndex& cur, const QModelIndex& pre)
{
    //当前没选
    if (! cur.isValid()){
        return;
    }
    int row = cur.row();
    int col = cur.column();
    labCellPos->setText(QString::asprintf("当前单元格：%d行，%d列", row + 1, col + 1));

    /*
    //第一种写法获取model中的数据
    QStandardItem* item = theModel->item(row, col); //用item(row, col)取出item时，如果item为空，item->text()会报错
    if (item){
        labCellText->setText("单元格内容：" + item->text());
    }
    */

    //第二种写法获取model中的数据
    QStandardItem* item = theModel->itemFromIndex(cur);
    QString itemTxt = item->text();
    labCellText->setText("单元格内容：" + itemTxt);

    QFont font = item->font();  //item中拿出字体
    ui->actFontBold->setChecked(font.bold());   //利用actFontBold加粗
}

void MainWindow::on_actOpen_triggered()
{
    QString root = QCoreApplication::applicationDirPath();  //当前文件的路径
    QString fileName = QFileDialog::getOpenFileName(this, "打开一个文件",
                                                    root, "井数据文件(*.txt);;所有文件(*.*)");   //;;分割
    if (fileName.isEmpty()){
        return;
    }

    QFile file(fileName);
    bool stat = file.open(QIODevice::ReadOnly | QIODevice::Text);   //以只读模式打开文本
    if (! stat){
        return;
    }

    ui->plainTextEdit->clear();

    QTextStream stream(&file);  //数据流打开文件
    QStringList fileConent;     //接受文本文件信息

    while (! stream.atEnd()) {  //没到文件最后
        QString str = stream.readLine();    //按行读取
        ui->plainTextEdit->appendPlainText(str);
        fileConent.append(str);
    }
    file.close();
    labCurfile->setText("当前文件：" + fileName);
    iniModelFromFileConent(fileConent);

    ui->actSave->setEnabled(true);
    ui->actAppend->setEnabled(true);
    ui->actDelete->setEnabled(true);
    ui->actInsert->setEnabled(true);
}


void MainWindow::iniModelFromFileConent(QStringList &fileConent)
{
    //设置表头
    QStringList labels = fileConent[0].split(QRegExp("\\s+"));
    theModel->setHorizontalHeaderLabels(labels);

    //设置数据
    int row = fileConent.count();
    theModel->setRowCount(row - 1);
    QStandardItem* item;
    for (int i = 1; i < row; i++){
        QStringList lineTxt = fileConent[i].split(QRegExp("\\s+"));
        for (int j = 0; j < FixedColoumCount; j++){
            item = new QStandardItem(lineTxt[j]);

            //勾选
            if (j == FixedColoumCount - 1){
                item = new QStandardItem("测井取样");
                item->setCheckState(lineTxt[j] == "1"? Qt::Checked: Qt::Unchecked);
            }
            theModel->setItem(i - 1, j, item);
        }
    }

    //调整单元格尺寸
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();

    //设置plaintext不换行，加入水平滑条
    ui->plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
}

void MainWindow::on_actSave_triggered()
{
    QString root = QCoreApplication::applicationDirPath();
    QString fileName = QFileDialog::getSaveFileName(this, "保存文件",
                                                    root, "井数据文件(*.txt);;所有文件(*.*)");
    if (fileName.isEmpty()){
        return;
    }

    QFile file(fileName);
    bool stat = file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate);
    if (! stat){
        return;
    }

    QTextStream stream(&file);
    QString str;

    //获取表头
    for (int i = 0; i < FixedColoumCount; i++){
        QStandardItem* header = theModel->horizontalHeaderItem(i);
        str += (header->text() + "\t\t");
    }
    str += "\n";

    //获取内容
    for (int i = 0; i < theModel->rowCount(); i++){
        for (int j = 0; j < FixedColoumCount; j++){
            QStandardItem* item = theModel->item(i, j);
            if (j == FixedColoumCount - 1){
                str += (item->checkState()? "1": "0");
            }
            else{
                str += item->text();
            }
            str += "\t\t";
        }
        if (i < theModel->rowCount() - 1){
            str += "\n";
        }
    }
    stream << str;

    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText(str);
}

void MainWindow::on_actModelData_triggered()
{
    ui->plainTextEdit->clear();
    QString str;

    //表头
    for (int i = 0; i < FixedColoumCount; i++){
        QStandardItem* header = theModel->horizontalHeaderItem(i);
        str += (header->text() + "\t\t");
    }
    str += "\n";

    //数据
    for (int i = 0; i < theModel->rowCount(); i++){
        for (int j = 0; j < FixedColoumCount; j++){
            QStandardItem* item = theModel->item(i, j);
            if (j == FixedColoumCount - 1){
                str += (item->checkState()? "1": "0");
            }
            else{
                str += item->text();
            }
            str += "\t\t";
        }
        if (i < theModel->rowCount() - 1){
            str += "\n";
        }
    }

    ui->plainTextEdit->appendPlainText(str);
}

void MainWindow::on_actInsert_triggered()
{
    int curRow = theSelection->currentIndex().row();

    QList<QStandardItem*> itemList;
    QStandardItem* item;

    for (int i = 0; i < FixedColoumCount; i++){
        item = new QStandardItem("0");
        itemList << item;
    }
    itemList[FixedColoumCount - 1]->setCheckState(Qt::Unchecked);
    theModel->insertRow(curRow, itemList);

    //通过QItemSelectionModel设置当前选中项
    QModelIndex index = theModel->index(curRow, 0);
    theSelection->clearSelection();
    theSelection->setCurrentIndex(index, QItemSelectionModel::Select);
}

void MainWindow::on_actAppend_triggered()
{
    QList<QStandardItem*> itemList;
    QStandardItem* item;

    for (int i = 0; i < FixedColoumCount; i++){
        item = new QStandardItem("0");
        itemList << item;
    }
    itemList[FixedColoumCount - 1]->setCheckState(Qt::Unchecked);
    theModel->appendRow(itemList);

    //通过QItemSelectionModel设置当前选中项
    QModelIndex index = theModel->index(theModel->rowCount() - 1, 0);
    theSelection->clearSelection();
    theSelection->setCurrentIndex(index, QItemSelectionModel::Select);
}

void MainWindow::on_actDelete_triggered()
{
    int curRow = theSelection->currentIndex().row();
    theModel->removeRow(curRow);

    //设置当前选中项
    if (curRow < theModel->rowCount() - 1){
        QModelIndex index = theModel->index(curRow, 0);
        theSelection->setCurrentIndex(index, QItemSelectionModel::Select);
    }
}

void MainWindow::on_actAlign_triggered(Qt::Alignment atextAlignment)
{
    if (! theSelection->hasSelection()){    //未选中的时候
        return;
    }

    QModelIndexList selectIndexes = theSelection->selectedIndexes();
    for (int i = 0; i < selectIndexes.count(); i++){
        QStandardItem* item = theModel->itemFromIndex(selectIndexes[i]);
        item->setTextAlignment(atextAlignment);
    }
}

void MainWindow::on_actAlignLeft_triggered()
{
    on_actAlign_triggered(Qt::AlignLeft);
}

void MainWindow::on_actAlignCenter_triggered()
{
    on_actAlign_triggered(Qt::AlignCenter);
}

void MainWindow::on_actAlignRight_triggered()
{
    on_actAlign_triggered(Qt::AlignRight);
}

void MainWindow::on_actFontBold_triggered()
{
    if (! theSelection->hasSelection()){    //未选中的时候
        return;
    }

    QFont font;
    QModelIndexList selectIndexes = theSelection->selectedIndexes();
    for (int i = 0; i < selectIndexes.count(); i++){
        QStandardItem* item = theModel->itemFromIndex(selectIndexes[i]);
        font = item->font();
        font.setBold(true);
        item->setFont(font);
    }
}

void MainWindow::on_actExit_triggered()
{
    this->close();
}
