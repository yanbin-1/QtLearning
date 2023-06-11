/********************************************************************************
** Form generated from reading UI file 'dialogsetsize.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSETSIZE_H
#define UI_DIALOGSETSIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogSetSize
{
public:
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *spinBoxColumn;
    QLabel *label;
    QSpinBox *spinBoxRow;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *DialogSetSize)
    {
        if (DialogSetSize->objectName().isEmpty())
            DialogSetSize->setObjectName(QStringLiteral("DialogSetSize"));
        DialogSetSize->resize(300, 133);
        btnOK = new QPushButton(DialogSetSize);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        btnOK->setGeometry(QRect(200, 30, 75, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/704.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon);
        btnCancel = new QPushButton(DialogSetSize);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(200, 90, 75, 24));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        groupBox = new QGroupBox(DialogSetSize);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 171, 101));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        spinBoxColumn = new QSpinBox(groupBox);
        spinBoxColumn->setObjectName(QStringLiteral("spinBoxColumn"));
        spinBoxColumn->setMinimum(1);
        spinBoxColumn->setMaximum(500);
        spinBoxColumn->setValue(6);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBoxColumn);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QStringLiteral("spinBoxRow"));
        spinBoxRow->setMinimum(1);
        spinBoxRow->setMaximum(500);
        spinBoxRow->setValue(10);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBoxRow);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer);


        retranslateUi(DialogSetSize);

        QMetaObject::connectSlotsByName(DialogSetSize);
    } // setupUi

    void retranslateUi(QDialog *DialogSetSize)
    {
        DialogSetSize->setWindowTitle(QApplication::translate("DialogSetSize", "Dialog", Q_NULLPTR));
        btnOK->setText(QApplication::translate("DialogSetSize", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("DialogSetSize", "\345\217\226\346\266\210", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DialogSetSize", "\350\256\276\347\275\256\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogSetSize", "\345\210\227  \346\225\260", Q_NULLPTR));
        label->setText(QApplication::translate("DialogSetSize", "\350\241\214  \346\225\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogSetSize: public Ui_DialogSetSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSETSIZE_H
