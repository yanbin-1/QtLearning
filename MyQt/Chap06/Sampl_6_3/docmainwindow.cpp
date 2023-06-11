#include "docmainwindow.h"
#include "ui_docmainwindow.h"

MainWindowDoc::MainWindowDoc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowDoc)
{
    ui->setupUi(this);
}

MainWindowDoc::~MainWindowDoc()
{
    delete ui;
}
