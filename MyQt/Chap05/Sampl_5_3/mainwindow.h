#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//以下两种是和TableView相关的模型
#include <QStandardItemModel>   //数据模型
#include <QItemSelectionModel>  //Item选择模型
#define FixedColoumCount 6

#include <QLabel>
#include <QString>

#include <QFileDialog>
#include <QTextStream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    //TableView相关
    QStandardItemModel* theModel;
    QItemSelectionModel* theSelection;

    //状态栏相关
    QLabel* labCurfile;
    QLabel* labCellPos;
    QLabel* labCellText;

    //根据QStringList初始化Model
    void iniModelFromFileConent(QStringList& fileConent);

private slots:
    void on_theSelection_Changed(const QModelIndex& cur, const QModelIndex& pre);
    void on_actOpen_triggered();
    void on_actSave_triggered();
    void on_actModelData_triggered();
    void on_actInsert_triggered();
    void on_actAppend_triggered();
    void on_actDelete_triggered();
    void on_actAlign_triggered(Qt::Alignment atextAlignment);
    void on_actAlignLeft_triggered();
    void on_actAlignCenter_triggered();
    void on_actAlignRight_triggered();
    void on_actFontBold_triggered();
    void on_actExit_triggered();
};

#endif // MAINWINDOW_H
