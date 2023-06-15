#ifndef FORMTABLE_H
#define FORMTABLE_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>

namespace Ui {
class FormTable;
}

class FormTable : public QMainWindow
{
    Q_OBJECT

public:
    explicit FormTable(QWidget *parent = 0);
    ~FormTable();

private slots:
    void on_actSetHeader_triggered();

private:
    Ui::FormTable *ui;

    QStandardItemModel* theModel;
    QItemSelectionModel* theSelection;

    int initRow;
    int initCol;
};

#endif // FORMTABLE_H
