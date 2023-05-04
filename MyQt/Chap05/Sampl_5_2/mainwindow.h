#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnClearTxt_clicked();

    void on_btnShowTxt_clicked();

    void on_btnInitLst_clicked();

    void on_btnClearLst_clicked();

    void on_btnDelLst_clicked();

    void on_btnAppendLst_clicked();

    void on_btnInsertLst_clicked();

    void on_listView_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;

    QStringListModel* strModel;
};

#endif // MAINWINDOW_H
