/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnInitLst;
    QPushButton *btnAppendLst;
    QPushButton *btnInsertLst;
    QPushButton *btnDelLst;
    QPushButton *btnClearLst;
    QListView *listView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnClearTxt;
    QPushButton *btnShowTxt;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(703, 485);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnInitLst = new QPushButton(groupBox);
        btnInitLst->setObjectName(QStringLiteral("btnInitLst"));

        gridLayout->addWidget(btnInitLst, 0, 0, 1, 1);

        btnAppendLst = new QPushButton(groupBox);
        btnAppendLst->setObjectName(QStringLiteral("btnAppendLst"));

        gridLayout->addWidget(btnAppendLst, 1, 0, 1, 1);

        btnInsertLst = new QPushButton(groupBox);
        btnInsertLst->setObjectName(QStringLiteral("btnInsertLst"));

        gridLayout->addWidget(btnInsertLst, 1, 1, 1, 1);

        btnDelLst = new QPushButton(groupBox);
        btnDelLst->setObjectName(QStringLiteral("btnDelLst"));

        gridLayout->addWidget(btnDelLst, 2, 0, 1, 1);

        btnClearLst = new QPushButton(groupBox);
        btnClearLst->setObjectName(QStringLiteral("btnClearLst"));

        gridLayout->addWidget(btnClearLst, 2, 1, 1, 1);

        listView = new QListView(groupBox);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout->addWidget(listView, 3, 0, 1, 2);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        btnClearTxt = new QPushButton(groupBox_2);
        btnClearTxt->setObjectName(QStringLiteral("btnClearTxt"));

        gridLayout_2->addWidget(btnClearTxt, 0, 0, 1, 1);

        btnShowTxt = new QPushButton(groupBox_2);
        btnShowTxt->setObjectName(QStringLiteral("btnShowTxt"));

        gridLayout_2->addWidget(btnShowTxt, 1, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout_2->addWidget(plainTextEdit, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "QListView", Q_NULLPTR));
        btnInitLst->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215\345\210\227\350\241\250", Q_NULLPTR));
        btnAppendLst->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
        btnInsertLst->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
        btnDelLst->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
        btnClearLst->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "QPlainTextEdit", Q_NULLPTR));
        btnClearTxt->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", Q_NULLPTR));
        btnShowTxt->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\346\225\260\346\215\256\346\250\241\345\236\213\347\232\204StringList", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\350\241\214\357\274\232 \345\210\227\357\274\232 ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
