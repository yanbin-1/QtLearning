#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QPainter>

#include "docmainwindow.h"

namespace Ui {
class MyMainWindow;
}

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyMainWindow(QWidget *parent = 0);
    ~MyMainWindow();

private slots:
    void on_actWidgetInsite_triggered();

    void on_tabWidget_tabCloseRequested(int index);

    void on_tabWidget_currentChanged(int index);

    void on_actWidget_triggered();

private:
    Ui::MyMainWindow *ui;

    // 重写绘图事件，Qt自动调用
    void paintEvent(QPaintEvent *event);
};

#endif // MYMAINWINDOW_H
