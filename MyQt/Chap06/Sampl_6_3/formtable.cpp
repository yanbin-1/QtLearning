#include "formtable.h"
#include "ui_formtable.h"

FormTable::FormTable(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FormTable)
{
    ui->setupUi(this);

    initRow = 12;
    initCol = 6;

    theModel = new QStandardItemModel(initRow, initCol, this);
    theSelection = new QItemSelectionModel(theModel);
    ui->tableView->setModel(theModel);
    ui->tableView->setSelectionModel(theSelection);
}

FormTable::~FormTable()
{
    delete ui;
}

void FormTable::on_actSetHeader_triggered()
{

}
