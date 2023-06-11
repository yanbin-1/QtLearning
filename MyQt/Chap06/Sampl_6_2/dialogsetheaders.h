#ifndef DIALOGSETHEADERS_H
#define DIALOGSETHEADERS_H

#include <QDialog>
#include <QMessageBox>
#include <QStringList>
#include <QStringListModel>

namespace Ui {
class DialogSetHeaders;
}

class DialogSetHeaders : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSetHeaders(QWidget *parent = 0);
    ~DialogSetHeaders();

    void setStringList(QStringList strList);

    QStringList getStringList();

private slots:
    void on_btnOK_clicked();

    void on_btnCancel_clicked();

private:
    Ui::DialogSetHeaders *ui;

    QStringListModel* strModel;
};

#endif // DIALOGSETHEADERS_H
