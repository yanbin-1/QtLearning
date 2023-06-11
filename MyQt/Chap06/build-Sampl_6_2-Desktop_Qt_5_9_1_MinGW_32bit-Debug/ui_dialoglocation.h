/********************************************************************************
** Form generated from reading UI file 'dialoglocation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOCATION_H
#define UI_DIALOGLOCATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogLocation
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QSpinBox *spinBoxColumn_2;
    QCheckBox *chkBoxColumn_2;
    QLabel *label_5;
    QCheckBox *chkBoxRow_2;
    QSpinBox *spinBoxRow_2;
    QLabel *label_6;
    QLineEdit *edtCaption_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnSetText_2;
    QPushButton *btnClose_2;

    void setupUi(QDialog *DialogLocation)
    {
        if (DialogLocation->objectName().isEmpty())
            DialogLocation->setObjectName(QStringLiteral("DialogLocation"));
        DialogLocation->resize(357, 170);
        gridLayout_3 = new QGridLayout(DialogLocation);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(DialogLocation);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        spinBoxColumn_2 = new QSpinBox(groupBox);
        spinBoxColumn_2->setObjectName(QStringLiteral("spinBoxColumn_2"));
        spinBoxColumn_2->setMinimum(0);

        gridLayout_2->addWidget(spinBoxColumn_2, 0, 1, 1, 1);

        chkBoxColumn_2 = new QCheckBox(groupBox);
        chkBoxColumn_2->setObjectName(QStringLiteral("chkBoxColumn_2"));

        gridLayout_2->addWidget(chkBoxColumn_2, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        chkBoxRow_2 = new QCheckBox(groupBox);
        chkBoxRow_2->setObjectName(QStringLiteral("chkBoxRow_2"));

        gridLayout_2->addWidget(chkBoxRow_2, 1, 2, 1, 1);

        spinBoxRow_2 = new QSpinBox(groupBox);
        spinBoxRow_2->setObjectName(QStringLiteral("spinBoxRow_2"));

        gridLayout_2->addWidget(spinBoxRow_2, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        edtCaption_2 = new QLineEdit(groupBox);
        edtCaption_2->setObjectName(QStringLiteral("edtCaption_2"));

        gridLayout_2->addWidget(edtCaption_2, 2, 1, 1, 2);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        btnSetText_2 = new QPushButton(DialogLocation);
        btnSetText_2->setObjectName(QStringLiteral("btnSetText_2"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/506.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnSetText_2->setIcon(icon);

        verticalLayout_2->addWidget(btnSetText_2);

        btnClose_2 = new QPushButton(DialogLocation);
        btnClose_2->setObjectName(QStringLiteral("btnClose_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose_2->setIcon(icon1);

        verticalLayout_2->addWidget(btnClose_2);


        gridLayout_3->addLayout(verticalLayout_2, 0, 1, 1, 1);


        retranslateUi(DialogLocation);

        QMetaObject::connectSlotsByName(DialogLocation);
    } // setupUi

    void retranslateUi(QDialog *DialogLocation)
    {
        DialogLocation->setWindowTitle(QApplication::translate("DialogLocation", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_4->setText(QApplication::translate("DialogLocation", "\345\210\227  \345\217\267", Q_NULLPTR));
        chkBoxColumn_2->setText(QApplication::translate("DialogLocation", "\345\210\227\345\242\236", Q_NULLPTR));
        label_5->setText(QApplication::translate("DialogLocation", "\350\241\214  \345\217\267", Q_NULLPTR));
        chkBoxRow_2->setText(QApplication::translate("DialogLocation", "\350\241\214\345\242\236", Q_NULLPTR));
        label_6->setText(QApplication::translate("DialogLocation", "\350\256\276\345\256\232\346\226\207\345\255\227", Q_NULLPTR));
        btnSetText_2->setText(QApplication::translate("DialogLocation", "\350\256\276\345\256\232\346\226\207\345\255\227", Q_NULLPTR));
        btnClose_2->setText(QApplication::translate("DialogLocation", "\345\205\263  \351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogLocation: public Ui_DialogLocation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOCATION_H
