#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QDate>
#include <QDebug>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

private:
    Ui::MyWidget *ui;

    //表格列号
    enum FieldColNum{
        colName = 0, colSex, colBirth, colNation, colScore, colPartyM
    };

    //单元格类型
    enum CellType{
        ctName=1000,ctSex,ctBirth,ctNation,ctPartyM,ctScore
    };

    void createItemsARow(int rowNo, QString name, QString sex, QDate birth,
                         QString nation, int score, bool isPM); //为某一行创建items


public slots:
    void on_btnSetHeader_clicked();

    void on_btnSetRows_clicked();

    void on_chkBoxRowColor_clicked(bool checked);

    void on_btnIniData_clicked();

    void on_btnInsertRow_clicked();

    void on_btnAppendRow_clicked();

    void on_btnDelCurRow_clicked();

    void on_btnDelAllRow_clicked();

    void on_btnAutoHeght_clicked();

    void on_btnAutoWidth_clicked();

    void on_btnReadToEdit_clicked();
};

#endif // MYWIDGET_H
