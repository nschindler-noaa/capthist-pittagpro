/********************************************************************************
** Form generated from reading UI file 'CsvConverterDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSVCONVERTERDIALOG_H
#define UI_CSVCONVERTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConvertCsvDialog
{
public:
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QGroupBox *buttonGroup1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *hboxLayout;
    QRadioButton *obsRadioButton;
    QRadioButton *tagRadioButton;
    QRadioButton *relRadioButton;
    QRadioButton *mortRadioButton;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout2;
    QLabel *textLabel1;
    QLabel *textLabel1_2;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *data_verticalLayout;
    QCheckBox *headerCheckBox;
    QTableView *dataTable;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *ConvertCsvDialog)
    {
        if (ConvertCsvDialog->objectName().isEmpty())
            ConvertCsvDialog->setObjectName(QString::fromUtf8("ConvertCsvDialog"));
        ConvertCsvDialog->resize(627, 375);
        ConvertCsvDialog->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(ConvertCsvDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        buttonGroup1 = new QGroupBox(ConvertCsvDialog);
        buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
        verticalLayout_2 = new QVBoxLayout(buttonGroup1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        obsRadioButton = new QRadioButton(buttonGroup1);
        obsRadioButton->setObjectName(QString::fromUtf8("obsRadioButton"));
        obsRadioButton->setChecked(true);

        hboxLayout->addWidget(obsRadioButton);

        tagRadioButton = new QRadioButton(buttonGroup1);
        tagRadioButton->setObjectName(QString::fromUtf8("tagRadioButton"));

        hboxLayout->addWidget(tagRadioButton);

        relRadioButton = new QRadioButton(buttonGroup1);
        relRadioButton->setObjectName(QString::fromUtf8("relRadioButton"));

        hboxLayout->addWidget(relRadioButton);

        mortRadioButton = new QRadioButton(buttonGroup1);
        mortRadioButton->setObjectName(QString::fromUtf8("mortRadioButton"));

        hboxLayout->addWidget(mortRadioButton);


        verticalLayout_2->addLayout(hboxLayout);


        vboxLayout1->addWidget(buttonGroup1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        textLabel1 = new QLabel(ConvertCsvDialog);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        vboxLayout2->addWidget(textLabel1);

        textLabel1_2 = new QLabel(ConvertCsvDialog);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        vboxLayout2->addWidget(textLabel1_2);


        hboxLayout1->addLayout(vboxLayout2);

        spacerItem = new QSpacerItem(111, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout1);

        groupBox2 = new QGroupBox(ConvertCsvDialog);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        verticalLayout = new QVBoxLayout(groupBox2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        data_verticalLayout = new QVBoxLayout();
        data_verticalLayout->setSpacing(6);
        data_verticalLayout->setObjectName(QString::fromUtf8("data_verticalLayout"));
        data_verticalLayout->setContentsMargins(0, 0, 0, 0);
        headerCheckBox = new QCheckBox(groupBox2);
        headerCheckBox->setObjectName(QString::fromUtf8("headerCheckBox"));
        headerCheckBox->setChecked(true);

        data_verticalLayout->addWidget(headerCheckBox);

        dataTable = new QTableView(groupBox2);
        dataTable->setObjectName(QString::fromUtf8("dataTable"));

        data_verticalLayout->addWidget(dataTable);


        verticalLayout->addLayout(data_verticalLayout);


        vboxLayout1->addWidget(groupBox2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        buttonOk = new QPushButton(ConvertCsvDialog);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);

        hboxLayout2->addWidget(buttonOk);

        buttonCancel = new QPushButton(ConvertCsvDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout2->addWidget(buttonCancel);


        vboxLayout1->addLayout(hboxLayout2);


        vboxLayout->addLayout(vboxLayout1);


        retranslateUi(ConvertCsvDialog);
        QObject::connect(buttonOk, SIGNAL(clicked()), ConvertCsvDialog, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), ConvertCsvDialog, SLOT(reject()));

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(ConvertCsvDialog);
    } // setupUi

    void retranslateUi(QDialog *ConvertCsvDialog)
    {
        ConvertCsvDialog->setWindowTitle(QApplication::translate("ConvertCsvDialog", "CSV Converter", nullptr));
        buttonGroup1->setTitle(QApplication::translate("ConvertCsvDialog", "Output type", nullptr));
        obsRadioButton->setText(QApplication::translate("ConvertCsvDialog", "Observation file format", nullptr));
        tagRadioButton->setText(QApplication::translate("ConvertCsvDialog", "Tag file format", nullptr));
        relRadioButton->setText(QApplication::translate("ConvertCsvDialog", "Release file format", nullptr));
        mortRadioButton->setText(QApplication::translate("ConvertCsvDialog", "Mortality file format", nullptr));
        textLabel1->setText(QApplication::translate("ConvertCsvDialog", "CSV file:", nullptr));
        textLabel1_2->setText(QApplication::translate("ConvertCsvDialog", "Output file:", nullptr));
        groupBox2->setTitle(QApplication::translate("ConvertCsvDialog", "Data", nullptr));
        headerCheckBox->setText(QApplication::translate("ConvertCsvDialog", "First row contains column headings", nullptr));
        buttonOk->setText(QApplication::translate("ConvertCsvDialog", "&OK", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonOk->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        buttonCancel->setText(QApplication::translate("ConvertCsvDialog", "&Cancel", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonCancel->setShortcut(QString());
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class ConvertCsvDialog: public Ui_ConvertCsvDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSVCONVERTERDIALOG_H
