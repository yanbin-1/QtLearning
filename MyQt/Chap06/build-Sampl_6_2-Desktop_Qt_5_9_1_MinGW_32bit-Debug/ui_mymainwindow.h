/********************************************************************************
** Form generated from reading UI file 'mymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMainWindow
{
public:
    QAction *actTab_SetSize;
    QAction *actTab_SetHeader;
    QAction *actFile_Quit;
    QAction *actTab_Locate;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyMainWindow)
    {
        if (MyMainWindow->objectName().isEmpty())
            MyMainWindow->setObjectName(QStringLiteral("MyMainWindow"));
        MyMainWindow->resize(634, 426);
        actTab_SetSize = new QAction(MyMainWindow);
        actTab_SetSize->setObjectName(QStringLiteral("actTab_SetSize"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Res/images/230.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_SetSize->setIcon(icon);
        actTab_SetHeader = new QAction(MyMainWindow);
        actTab_SetHeader->setObjectName(QStringLiteral("actTab_SetHeader"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Res/images/516.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_SetHeader->setIcon(icon1);
        actFile_Quit = new QAction(MyMainWindow);
        actFile_Quit->setObjectName(QStringLiteral("actFile_Quit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Res/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Quit->setIcon(icon2);
        actTab_Locate = new QAction(MyMainWindow);
        actTab_Locate->setObjectName(QStringLiteral("actTab_Locate"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Res/images/304.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_Locate->setIcon(icon3);
        centralWidget = new QWidget(MyMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        MyMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 634, 23));
        MyMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MyMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyMainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actTab_SetSize);
        mainToolBar->addAction(actTab_SetHeader);
        mainToolBar->addAction(actTab_Locate);
        mainToolBar->addAction(actFile_Quit);

        retranslateUi(MyMainWindow);

        QMetaObject::connectSlotsByName(MyMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyMainWindow)
    {
        MyMainWindow->setWindowTitle(QApplication::translate("MyMainWindow", "MyMainWindow", Q_NULLPTR));
        actTab_SetSize->setText(QApplication::translate("MyMainWindow", "\350\256\276\347\275\256\350\241\214\346\225\260\345\210\227\346\225\260", Q_NULLPTR));
        actTab_SetHeader->setText(QApplication::translate("MyMainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", Q_NULLPTR));
        actFile_Quit->setText(QApplication::translate("MyMainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        actTab_Locate->setText(QApplication::translate("MyMainWindow", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyMainWindow: public Ui_MyMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
