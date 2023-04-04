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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QSplitter *splitter_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QSplitter *splitter;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QListView *listView;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QTableView *tableView;
    QLabel *LabFileName;
    QLabel *LabFileSize;
    QLabel *LabType;
    QCheckBox *chkIsDir;
    QLabel *LabPath;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(653, 576);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treeView = new QTreeView(groupBox);
        treeView->setObjectName(QStringLiteral("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        splitter_2->addWidget(groupBox);
        treeView->raise();
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout_2->addWidget(listView, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_3->addWidget(tableView, 0, 0, 1, 1);

        splitter->addWidget(groupBox_3);
        splitter_2->addWidget(splitter);

        gridLayout_4->addWidget(splitter_2, 0, 0, 1, 4);

        LabFileName = new QLabel(centralWidget);
        LabFileName->setObjectName(QStringLiteral("LabFileName"));

        gridLayout_4->addWidget(LabFileName, 1, 0, 1, 1);

        LabFileSize = new QLabel(centralWidget);
        LabFileSize->setObjectName(QStringLiteral("LabFileSize"));

        gridLayout_4->addWidget(LabFileSize, 1, 1, 1, 1);

        LabType = new QLabel(centralWidget);
        LabType->setObjectName(QStringLiteral("LabType"));

        gridLayout_4->addWidget(LabType, 1, 2, 1, 1);

        chkIsDir = new QCheckBox(centralWidget);
        chkIsDir->setObjectName(QStringLiteral("chkIsDir"));

        gridLayout_4->addWidget(chkIsDir, 1, 3, 1, 1);

        LabPath = new QLabel(centralWidget);
        LabPath->setObjectName(QStringLiteral("LabPath"));

        gridLayout_4->addWidget(LabPath, 2, 0, 1, 1);

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
        groupBox->setTitle(QApplication::translate("MainWindow", "TreeView", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "ListView", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "TableView", Q_NULLPTR));
        LabFileName->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215\357\274\232", Q_NULLPTR));
        LabFileSize->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\247\345\260\217\357\274\232", Q_NULLPTR));
        LabType->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        chkIsDir->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271\346\230\257\347\233\256\345\275\225", Q_NULLPTR));
        LabPath->setText(QApplication::translate("MainWindow", "\350\267\257\345\276\204\345\220\215\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
