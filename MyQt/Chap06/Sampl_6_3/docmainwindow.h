#ifndef MAINWINDOWDOC_H
#define MAINWINDOWDOC_H

#include <QMainWindow>

namespace Ui {
class MainWindowDoc;
}

class MainWindowDoc : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowDoc(QWidget *parent = 0);
    ~MainWindowDoc();

private:
    Ui::MainWindowDoc *ui;
};

#endif // MAINWINDOWDOC_H
