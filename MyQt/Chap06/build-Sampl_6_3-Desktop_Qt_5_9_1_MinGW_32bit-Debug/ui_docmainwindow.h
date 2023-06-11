/********************************************************************************
** Form generated from reading UI file 'docmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCMAINWINDOW_H
#define UI_DOCMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDoc
{
public:
    QAction *actOpen;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFont;
    QAction *actClose;
    QAction *actUndo;
    QAction *actRedo;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindowDoc)
    {
        if (MainWindowDoc->objectName().isEmpty())
            MainWindowDoc->setObjectName(QStringLiteral("MainWindowDoc"));
        MainWindowDoc->resize(800, 600);
        actOpen = new QAction(MainWindowDoc);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon);
        actCut = new QAction(MainWindowDoc);
        actCut->setObjectName(QStringLiteral("actCut"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/200.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon1);
        actCopy = new QAction(MainWindowDoc);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/202.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon2);
        actPaste = new QAction(MainWindowDoc);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/204.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon3);
        actFont = new QAction(MainWindowDoc);
        actFont->setObjectName(QStringLiteral("actFont"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/506.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon4);
        actClose = new QAction(MainWindowDoc);
        actClose->setObjectName(QStringLiteral("actClose"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon5);
        actUndo = new QAction(MainWindowDoc);
        actUndo->setObjectName(QStringLiteral("actUndo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/206.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actUndo->setIcon(icon6);
        actRedo = new QAction(MainWindowDoc);
        actRedo->setObjectName(QStringLiteral("actRedo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/208.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actRedo->setIcon(icon7);
        centralwidget = new QWidget(MainWindowDoc);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        MainWindowDoc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDoc);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindowDoc->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDoc);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowDoc->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindowDoc);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindowDoc->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actOpen);
        toolBar->addAction(actFont);
        toolBar->addSeparator();
        toolBar->addAction(actCut);
        toolBar->addAction(actCopy);
        toolBar->addAction(actPaste);
        toolBar->addAction(actUndo);
        toolBar->addAction(actRedo);
        toolBar->addSeparator();
        toolBar->addAction(actClose);

        retranslateUi(MainWindowDoc);

        QMetaObject::connectSlotsByName(MainWindowDoc);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDoc)
    {
        MainWindowDoc->setWindowTitle(QApplication::translate("MainWindowDoc", "MainWindow", Q_NULLPTR));
        actOpen->setText(QApplication::translate("MainWindowDoc", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("MainWindowDoc", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCut->setText(QApplication::translate("MainWindowDoc", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("MainWindowDoc", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCut->setShortcut(QApplication::translate("MainWindowDoc", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actCopy->setText(QApplication::translate("MainWindowDoc", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("MainWindowDoc", "\345\244\215\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCopy->setShortcut(QApplication::translate("MainWindowDoc", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actPaste->setText(QApplication::translate("MainWindowDoc", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("MainWindowDoc", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actPaste->setShortcut(QApplication::translate("MainWindowDoc", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actFont->setText(QApplication::translate("MainWindowDoc", "\345\255\227\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFont->setToolTip(QApplication::translate("MainWindowDoc", "\350\256\276\347\275\256\345\255\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClose->setText(QApplication::translate("MainWindowDoc", "\345\205\263\351\227\255", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClose->setToolTip(QApplication::translate("MainWindowDoc", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actUndo->setText(QApplication::translate("MainWindowDoc", "\346\222\244\351\224\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actUndo->setToolTip(QApplication::translate("MainWindowDoc", "\346\222\244\351\224\200\347\274\226\350\276\221\346\223\215\344\275\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actUndo->setShortcut(QApplication::translate("MainWindowDoc", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actRedo->setText(QApplication::translate("MainWindowDoc", "\351\207\215\345\244\215", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRedo->setToolTip(QApplication::translate("MainWindowDoc", "\351\207\215\345\244\215\347\274\226\350\276\221\346\223\215\344\275\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("MainWindowDoc", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDoc: public Ui_MainWindowDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCMAINWINDOW_H
