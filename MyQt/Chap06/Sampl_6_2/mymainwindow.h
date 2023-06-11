#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <dialogsetsize.h>
#include <dialogsetheaders.h>
#include <dialoglocation.h>

#include <QStandardItemModel>
#include <QItemSelectionModel>


namespace Ui {
class MyMainWindow;
}

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

    QStandardItemModel* theModel;
    QItemSelectionModel* theSelection;

public:
    explicit MyMainWindow(QWidget *parent = 0);
    ~MyMainWindow();

    void setCellText(int row, int col, QString text);

private slots:
    void on_actFile_Quit_triggered();

    void on_actTab_SetSize_triggered();

    void on_actTab_SetHeader_triggered();

    void on_actTab_Locate_triggered();

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::MyMainWindow *ui;

signals:
    //当前单元格发生变化
    void cellIndexChanged(int row, int col);
};

#endif // MYMAINWINDOW_H
