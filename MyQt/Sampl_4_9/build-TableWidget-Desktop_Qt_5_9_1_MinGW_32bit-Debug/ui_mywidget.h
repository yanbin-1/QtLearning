/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnSetHeader;
    QPushButton *btnSetRows;
    QPushButton *btnIniData;
    QSpinBox *spinRowCount;
    QPushButton *btnInsertRow;
    QPushButton *btnAppendRow;
    QRadioButton *rBtnSelectRow;
    QPushButton *btnAutoHeght;
    QPushButton *btnAutoWidth;
    QPushButton *btnReadToEdit;
    QCheckBox *chkBoxRowColor;
    QCheckBox *chkBoxHeaderH;
    QCheckBox *chkBoxHeaderV;
    QCheckBox *chkBoxTabEditable;
    QRadioButton *rBtnSelectItem;
    QPushButton *btnDelAllRow;
    QPushButton *btnDelCurRow;
    QTableWidget *tableInfo;
    QPlainTextEdit *textEdit;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(834, 577);
        gridLayout_2 = new QGridLayout(MyWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(MyWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnSetHeader = new QPushButton(groupBox);
        btnSetHeader->setObjectName(QStringLiteral("btnSetHeader"));

        gridLayout->addWidget(btnSetHeader, 0, 0, 1, 2);

        btnSetRows = new QPushButton(groupBox);
        btnSetRows->setObjectName(QStringLiteral("btnSetRows"));

        gridLayout->addWidget(btnSetRows, 1, 0, 1, 1);

        btnIniData = new QPushButton(groupBox);
        btnIniData->setObjectName(QStringLiteral("btnIniData"));

        gridLayout->addWidget(btnIniData, 2, 0, 1, 2);

        spinRowCount = new QSpinBox(groupBox);
        spinRowCount->setObjectName(QStringLiteral("spinRowCount"));
        spinRowCount->setValue(10);

        gridLayout->addWidget(spinRowCount, 1, 1, 1, 1);

        btnInsertRow = new QPushButton(groupBox);
        btnInsertRow->setObjectName(QStringLiteral("btnInsertRow"));

        gridLayout->addWidget(btnInsertRow, 3, 0, 1, 1);

        btnAppendRow = new QPushButton(groupBox);
        btnAppendRow->setObjectName(QStringLiteral("btnAppendRow"));

        gridLayout->addWidget(btnAppendRow, 3, 1, 1, 1);

        rBtnSelectRow = new QRadioButton(groupBox);
        rBtnSelectRow->setObjectName(QStringLiteral("rBtnSelectRow"));

        gridLayout->addWidget(rBtnSelectRow, 9, 0, 1, 1);

        btnAutoHeght = new QPushButton(groupBox);
        btnAutoHeght->setObjectName(QStringLiteral("btnAutoHeght"));

        gridLayout->addWidget(btnAutoHeght, 5, 0, 1, 1);

        btnAutoWidth = new QPushButton(groupBox);
        btnAutoWidth->setObjectName(QStringLiteral("btnAutoWidth"));

        gridLayout->addWidget(btnAutoWidth, 5, 1, 1, 1);

        btnReadToEdit = new QPushButton(groupBox);
        btnReadToEdit->setObjectName(QStringLiteral("btnReadToEdit"));

        gridLayout->addWidget(btnReadToEdit, 6, 0, 1, 2);

        chkBoxRowColor = new QCheckBox(groupBox);
        chkBoxRowColor->setObjectName(QStringLiteral("chkBoxRowColor"));
        chkBoxRowColor->setChecked(true);

        gridLayout->addWidget(chkBoxRowColor, 7, 1, 1, 1);

        chkBoxHeaderH = new QCheckBox(groupBox);
        chkBoxHeaderH->setObjectName(QStringLiteral("chkBoxHeaderH"));
        chkBoxHeaderH->setChecked(true);

        gridLayout->addWidget(chkBoxHeaderH, 8, 0, 1, 1);

        chkBoxHeaderV = new QCheckBox(groupBox);
        chkBoxHeaderV->setObjectName(QStringLiteral("chkBoxHeaderV"));
        chkBoxHeaderV->setChecked(true);

        gridLayout->addWidget(chkBoxHeaderV, 8, 1, 1, 1);

        chkBoxTabEditable = new QCheckBox(groupBox);
        chkBoxTabEditable->setObjectName(QStringLiteral("chkBoxTabEditable"));
        chkBoxTabEditable->setChecked(true);

        gridLayout->addWidget(chkBoxTabEditable, 7, 0, 1, 1);

        rBtnSelectItem = new QRadioButton(groupBox);
        rBtnSelectItem->setObjectName(QStringLiteral("rBtnSelectItem"));
        rBtnSelectItem->setChecked(true);

        gridLayout->addWidget(rBtnSelectItem, 9, 1, 1, 1);

        btnDelAllRow = new QPushButton(groupBox);
        btnDelAllRow->setObjectName(QStringLiteral("btnDelAllRow"));

        gridLayout->addWidget(btnDelAllRow, 4, 1, 1, 1);

        btnDelCurRow = new QPushButton(groupBox);
        btnDelCurRow->setObjectName(QStringLiteral("btnDelCurRow"));

        gridLayout->addWidget(btnDelCurRow, 4, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 2, 1);

        tableInfo = new QTableWidget(MyWidget);
        if (tableInfo->columnCount() < 4)
            tableInfo->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableInfo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableInfo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableInfo->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableInfo->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableInfo->rowCount() < 6)
            tableInfo->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(5, __qtablewidgetitem9);
        tableInfo->setObjectName(QStringLiteral("tableInfo"));
        tableInfo->setAlternatingRowColors(true);
        tableInfo->verticalHeader()->setVisible(false);
        tableInfo->verticalHeader()->setCascadingSectionResizes(false);

        gridLayout_2->addWidget(tableInfo, 0, 1, 1, 1);

        textEdit = new QPlainTextEdit(MyWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_2->addWidget(textEdit, 1, 1, 1, 1);


        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", Q_NULLPTR));
        groupBox->setTitle(QString());
        btnSetHeader->setText(QApplication::translate("MyWidget", "\350\256\276\347\275\256\350\241\250\345\244\264", Q_NULLPTR));
        btnSetRows->setText(QApplication::translate("MyWidget", "\350\256\276\347\275\256\350\241\214\346\225\260", Q_NULLPTR));
        btnIniData->setText(QApplication::translate("MyWidget", "\345\210\235\345\247\213\345\214\226\350\241\250\346\240\274\346\225\260\346\215\256", Q_NULLPTR));
        btnInsertRow->setText(QApplication::translate("MyWidget", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
        btnAppendRow->setText(QApplication::translate("MyWidget", "\346\267\273\345\212\240\350\241\214", Q_NULLPTR));
        rBtnSelectRow->setText(QApplication::translate("MyWidget", "\350\241\214\351\200\211\346\213\251", Q_NULLPTR));
        btnAutoHeght->setText(QApplication::translate("MyWidget", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230", Q_NULLPTR));
        btnAutoWidth->setText(QApplication::translate("MyWidget", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275", Q_NULLPTR));
        btnReadToEdit->setText(QApplication::translate("MyWidget", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", Q_NULLPTR));
        chkBoxRowColor->setText(QApplication::translate("MyWidget", "\351\227\264\351\232\224\350\241\214\345\272\225\350\211\262", Q_NULLPTR));
        chkBoxHeaderH->setText(QApplication::translate("MyWidget", "\346\230\276\347\244\272\350\241\214\350\241\250\345\244\264", Q_NULLPTR));
        chkBoxHeaderV->setText(QApplication::translate("MyWidget", "\346\230\276\347\244\272\345\210\227\350\241\250\345\244\264", Q_NULLPTR));
        chkBoxTabEditable->setText(QApplication::translate("MyWidget", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        rBtnSelectItem->setText(QApplication::translate("MyWidget", "\345\215\225\345\205\203\346\240\274\351\200\211\346\213\251", Q_NULLPTR));
        btnDelAllRow->setText(QApplication::translate("MyWidget", "\345\210\240\351\231\244\346\211\200\346\234\211\350\241\214", Q_NULLPTR));
        btnDelCurRow->setText(QApplication::translate("MyWidget", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableInfo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MyWidget", "\345\210\2271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableInfo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MyWidget", "\345\210\2272", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableInfo->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MyWidget", "\345\210\2273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableInfo->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MyWidget", "\345\210\2274", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableInfo->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MyWidget", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableInfo->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MyWidget", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableInfo->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MyWidget", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableInfo->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MyWidget", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableInfo->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("MyWidget", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableInfo->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("MyWidget", "6", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
