#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_btnSetHeader_clicked()
{
    QTableWidgetItem* item;
    QStringList headerText = {"姓名", "性别", "出生日期", "民族", "分数", "是否是党员"};
    int col = headerText.size();
    ui->tableInfo->setColumnCount(col);
    for (int i = 0; i < col; i++){
        //设置表头字体
        item = new QTableWidgetItem(headerText[i]);
        //设置字体样式
        QFont font = ui->tableInfo->font();
        font.setBold(true);
        font.setPointSize(12);
        item->setFont(font);
        item->setTextColor(Qt::red);
        //设置表头
        ui->tableInfo->setHorizontalHeaderItem(i, item);
    }
}

void MyWidget::on_btnSetRows_clicked()
{
    //spinBox获取字符型数据
    //int row =  ui->spinRowCount->text().toInt();

    //spinBox获取数值型数据
    int row = ui->spinRowCount->value();

    //间隔行底色
    bool checked = ui->chkBoxRowColor->isChecked();
    ui->tableInfo->setAlternatingRowColors(checked);

    ui->tableInfo->setRowCount(row);
}

void MyWidget::on_chkBoxRowColor_clicked(bool checked)
{
    ui->tableInfo->setAlternatingRowColors(checked);
}


void MyWidget::createItemsARow(int rowNo, QString name, QString sex, QDate birth, QString nation, int score, bool isPM)
{
    QTableWidgetItem* item;

    //姓名
    item = new QTableWidgetItem(name, ctName);
    ui->tableInfo->setItem(rowNo, colName, item);

    //性别
    QIcon icon;
    QString path = (sex == "男")? "://icons/boy.ico": "://icons/girl.ico";
    icon.addFile(path);
    item = new QTableWidgetItem(icon, sex, ctSex);

    ui->tableInfo->setItem(rowNo, colSex, item);

    //生日
    QString birthStr = birth.toString("yyyy-MM-dd");
    item = new QTableWidgetItem(birthStr, ctBirth);
    ui->tableInfo->setItem(rowNo, colBirth, item);

    //民族
    item = new QTableWidgetItem(nation, ctNation);
    ui->tableInfo->setItem(rowNo, colNation, item);

    //分数
    QString scoreStr = QString::number(score);
    item = new QTableWidgetItem(scoreStr, ctScore);
    ui->tableInfo->setItem(rowNo, colScore, item);

    //党派
    item = new QTableWidgetItem("党员", ctPartyM);
    //选框属性
    if (isPM){
        item->setCheckState(Qt::Checked);
    }
    else{
        item->setCheckState(Qt::Unchecked);
    }
    //背景颜色
    item->setBackgroundColor(Qt::yellow);

    ui->tableInfo->setItem(rowNo, colPartyM, item);

    //遍历item调整对齐方式
    int col = ui->tableInfo->columnCount();
    for (int i = 0; i < col; i++){
        ui->tableInfo->item(rowNo, i)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
}


void MyWidget::on_btnIniData_clicked()
{
    //清除工作区
    ui->tableInfo->clearContents();

    //初始化表格
    QString name, sex, nation = "汉族";
    QDate birth(1980, 4, 7);
    int score = 70;
    bool isPM = false;

    int row = ui->tableInfo->rowCount();
    for (int i = 0; i < row; i++){
        name = "学生" + QString::number(i);
        sex = (i % 2 == 0)? "男": "女";
        createItemsARow(i, name, sex, birth, nation, score, isPM);

        //日期加20天
        birth = birth.addDays(20);

        //布尔值反向
        isPM = !isPM;
    }
}


void MyWidget::on_btnInsertRow_clicked()
{
    //如果tableWidget显示行号，在使用insertRow时候原有行号不会刷新，目前没找到解决方案？
    int rowCur = ui->tableInfo->currentRow();
    ui->tableInfo->insertRow(rowCur);
    createItemsARow(rowCur, "新学生", "男",
                    QDate::fromString("1990-1-1","yyyy-M-d"),"苗族",true,60); //为某一行创建items
}

void MyWidget::on_btnAppendRow_clicked()
{
    int rowCount = ui->tableInfo->rowCount();
    ui->tableInfo->insertRow(rowCount);
    createItemsARow(rowCount, "新生", "女",
                    QDate::fromString("2000-1-1","yyyy-M-d"),"满族",false,50); //为某一行创建items
}

void MyWidget::on_btnDelCurRow_clicked()
{
    int row = ui->tableInfo->currentRow();
    ui->tableInfo->removeRow(row);
}

void MyWidget::on_btnDelAllRow_clicked()
{
    //因为tableWidget会自动维护一个索引，只能通过不断删除最顶部的行来删除
    int rowCount = ui->tableInfo->rowCount();
    for (int i = 0; i < rowCount; i++){
        ui->tableInfo->removeRow(0);
    }
}

void MyWidget::on_btnAutoHeght_clicked()
{
    ui->tableInfo->resizeRowsToContents();
}

void MyWidget::on_btnAutoWidth_clicked()
{
    ui->tableInfo->resizeColumnsToContents();
}

void MyWidget::on_btnReadToEdit_clicked()
{
    int row = ui->tableInfo->rowCount(), col = ui->tableInfo->columnCount();
    QTableWidgetItem* curItem;
    QString curText;

    for (int i = 0; i < row; i++){
        QString str = QString("第%1个学生：\t").arg(i + 1);
        for (int j = 0; j < col; j++){
            curItem = ui->tableInfo->item(i, j);
            curText = curItem->text();
            if (curText == "党员" and !curItem->checkState()){
                str += "群众";
            }
            else{
                str += curText;
            }

            str += '\t';
        }
        ui->textEdit->appendPlainText(str);
    }
}

