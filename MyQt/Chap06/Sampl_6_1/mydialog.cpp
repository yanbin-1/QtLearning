#include "mydialog.h"
#include "ui_mydialog.h"

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
    ui->plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::on_pushButton_18_clicked()
{
    ui->plainTextEdit->clear();
}

void MyDialog::on_pushButton_clicked()
{
    QString root = QDir::currentPath();
    QString fileName = QFileDialog::getOpenFileName(this, "打开一个文件",
                                                    root, "文本文件(*.txt);;图片文件(*.jpg *.gif);;所有文件(*.*)");
    if (fileName.isEmpty()){
        return;
    }
    ui->plainTextEdit->appendPlainText(fileName);
}

void MyDialog::on_pushButton_2_clicked()
{
    QString root = QDir::currentPath();
    QStringList fileNames = QFileDialog::getOpenFileNames(this, "打开多个文件",
                                                          root, "文本文件(*.txt);;图片文件(*.jpg *.gif);;所有文件(*.*)");

    int n = fileNames.size();
    if (n == 0){
        return;
    }
    for (int i = 0; i < n; i++){
        ui->plainTextEdit->appendPlainText(fileNames[i]);
    }
}

void MyDialog::on_pushButton_4_clicked()
{
    QString root = QDir::currentPath();
    QString selectDir = QFileDialog::getExistingDirectory(this, "选择文件夹", root);
    if (selectDir.isEmpty()){
        return;
    }

    ui->plainTextEdit->appendPlainText(selectDir);
}

void MyDialog::on_pushButton_3_clicked()
{
    QString root = QDir::currentPath();
    QString fileName = QFileDialog::getSaveFileName(this, "保存文件",
                                                    root, "文本文件(*.txt);;图片文件(*.jpg *.gif);;所有文件(*.*)");
    if (fileName.isEmpty()){
        return;
    }

    QFile file(fileName);
    bool stat = file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate);
    if (! stat){
        return;
    }

    QTextStream stream(&file);
    QString str = ui->plainTextEdit->toPlainText();
    stream << str;
}

void MyDialog::on_pushButton_6_clicked()
{
    QPalette::ColorRole txtColor = QPalette::Text;
    QPalette pal = ui->plainTextEdit->palette();
    QColor iniColor = pal.color(txtColor);    //获取原来文本的颜色
    QColor color = QColorDialog::getColor(iniColor, this, "选择颜色");
    if (! color.isValid()){
        return;
    }

    pal.setColor(txtColor, color);
    ui->plainTextEdit->setPalette(pal);
}

void MyDialog::on_pushButton_5_clicked()
{
    bool ok;
    QFont iniFont = ui->plainTextEdit->font();
    QFont font = QFontDialog::getFont(&ok, iniFont, this);
    if (ok){
        ui->plainTextEdit->setFont(font);
    }
}

void MyDialog::on_pushButton_14_clicked()
{
    QString dlgTitle = "输入文字对话框";
    QString txtLabel = "输入文件名";
    QLineEdit::EchoMode echoMode = QLineEdit::Normal;
    QString defaultInput = "xxxx.txt";
    bool ok;

    QString text = QInputDialog::getText(this, dlgTitle, txtLabel,
                                         echoMode, defaultInput, &ok);

    if (ok && !text.isEmpty()){
        ui->plainTextEdit->appendPlainText(text);
    }
}

void MyDialog::on_pushButton_15_clicked()
{
    QFont font = ui->plainTextEdit->font();

    QString dlgTitle = "输入整型对话框";
    QString txtLabel = "输入整型";
    int defaultValue = font.pointSize(), minValue = 0, maxValue = 1000;
    int step = 1;
    bool ok;

    int value = QInputDialog::getInt(this, dlgTitle, txtLabel, defaultValue,
                                     minValue, maxValue, step, &ok);

    if (ok){
        ui->plainTextEdit->appendPlainText(QString::asprintf("输入整数：%d", value));
    }

    font.setPointSize(value);
    ui->plainTextEdit->setFont(font);
}

void MyDialog::on_pushButton_16_clicked()
{
    QString dlgTitle = "输入浮点数对话框";
    QString txtLabel = "输入浮点数";
    double defaultValue = 100, minValue = 0, maxValue = 1000;
    int decimals = 2;
    bool ok;

    double value = QInputDialog::getDouble(this, dlgTitle, txtLabel, defaultValue,
                                     minValue, maxValue, decimals, &ok);

    if (ok){
        ui->plainTextEdit->appendPlainText(QString::asprintf("输入浮点数：%.2f", value));
    }
}

void MyDialog::on_pushButton_17_clicked()
{
    QString dlgTitle = "输入条目对话框";
    QString txtLabel = "输入条目";
    QStringList items = {"优秀", "良好", "及格", "不及格"};
    int current = 0;
    bool editable = true, ok = false;

    QString item = QInputDialog::getItem(this, dlgTitle, txtLabel, items, current, editable);

    if (ok && !item.isEmpty()){
        ui->plainTextEdit->appendPlainText(item);
    }

}

void MyDialog::on_pushButton_7_clicked()
{
    QString dlgTitle = "Question对话框";
    QString txtLabel = "文件已被修改，是否保存";
    QMessageBox::StandardButtons btns = QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel;
    QMessageBox::StandardButton defaultBtns = QMessageBox::No;

    int result = QMessageBox::question(this, dlgTitle, txtLabel, btns, defaultBtns);

    if (result == QMessageBox::Yes){
        ui->plainTextEdit->appendPlainText("Question对话框选中Yes");
    }
    else if (result == QMessageBox::No){
        ui->plainTextEdit->appendPlainText("Question对话框选中No");
    }
    else{
        ui->plainTextEdit->appendPlainText("Question对话框选中Cancel");
    }

}

void MyDialog::on_pushButton_9_clicked()
{
    QString dlgTitle = "Information对话框";
    QString txtLabel = "信息已被修改，是否保存";
    QMessageBox::StandardButtons btns = QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel;
    QMessageBox::StandardButton defaultBtns = QMessageBox::No;

    int result = QMessageBox::information(this, dlgTitle, txtLabel, btns, defaultBtns);

    if (result == QMessageBox::Yes){
        ui->plainTextEdit->appendPlainText("Information对话框选中Yes");
    }
    else if (result == QMessageBox::No){
        ui->plainTextEdit->appendPlainText("Information对话框选中No");
    }
    else{
        ui->plainTextEdit->appendPlainText("Information对话框选中Cancel");
    }
}

void MyDialog::on_pushButton_10_clicked()
{
    QString dlgTitle = "Warning对话框";
    QString txtLabel = "警告已被修改，是否保存";
    QMessageBox::StandardButtons btns = QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel;
    QMessageBox::StandardButton defaultBtns = QMessageBox::No;

    int result = QMessageBox::warning(this, dlgTitle, txtLabel, btns, defaultBtns);

    if (result == QMessageBox::Yes){
        ui->plainTextEdit->appendPlainText("Information对话框选中Yes");
    }
    else if (result == QMessageBox::No){
        ui->plainTextEdit->appendPlainText("Information对话框选中No");
    }
    else{
        ui->plainTextEdit->appendPlainText("Information对话框选中Cancel");
    }
}

void MyDialog::on_pushButton_12_clicked()
{
    QString dlgTitle = "Critical对话框";
    QString txtLabel = "关键已被修改，是否保存";
    QMessageBox::StandardButtons btns = QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel;
    QMessageBox::StandardButton defaultBtns = QMessageBox::No;

    int result = QMessageBox::critical(this, dlgTitle, txtLabel, btns, defaultBtns);

    if (result == QMessageBox::Yes){
        ui->plainTextEdit->appendPlainText("Information对话框选中Yes");
    }
    else if (result == QMessageBox::No){
        ui->plainTextEdit->appendPlainText("Information对话框选中No");
    }
    else{
        ui->plainTextEdit->appendPlainText("Information对话框选中Cancel");
    }
}

void MyDialog::on_pushButton_13_clicked()
{
    QString dlgTitle = "About对话框";
    QString txtLabel = "About已被修改，是否保存";

    QMessageBox::about(this, dlgTitle, txtLabel);
}

void MyDialog::on_pushButton_11_clicked()
{
    QString dlgTitle = "AboutQt对话框";

    QMessageBox::aboutQt(this, dlgTitle);
}
