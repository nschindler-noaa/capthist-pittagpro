/********************************************************************************
** Form generated from reading UI file 'SitesConfigDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SITESCONFIGDIALOG_H
#define UI_SITESCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SitesConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_15;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *_2;
    QHBoxLayout *_3;
    QCheckBox *altSitesConfigCheckBox;
    QSpacerItem *spacerItem;
    QHBoxLayout *_4;
    QLabel *sitesConfigLabel;
    QLineEdit *sitesConfigEdit;
    QPushButton *findSitesConfigButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyButton;
    QPushButton *doneButton;

    void setupUi(QDialog *SitesConfigDialog)
    {
        if (SitesConfigDialog->objectName().isEmpty())
            SitesConfigDialog->setObjectName(QString::fromUtf8("SitesConfigDialog"));
        SitesConfigDialog->resize(379, 148);
        verticalLayout = new QVBoxLayout(SitesConfigDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_15 = new QGroupBox(SitesConfigDialog);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        vboxLayout = new QVBoxLayout(groupBox_15);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        _2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        _2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _2->setContentsMargins(0, 0, 0, 0);
#endif
        _2->setObjectName(QString::fromUtf8("_2"));
        _3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        _3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _3->setContentsMargins(0, 0, 0, 0);
#endif
        _3->setObjectName(QString::fromUtf8("_3"));
        altSitesConfigCheckBox = new QCheckBox(groupBox_15);
        altSitesConfigCheckBox->setObjectName(QString::fromUtf8("altSitesConfigCheckBox"));
        altSitesConfigCheckBox->setChecked(false);

        _3->addWidget(altSitesConfigCheckBox);

        spacerItem = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem);


        _2->addLayout(_3);

        _4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        _4->setSpacing(6);
#endif
        _4->setContentsMargins(0, 0, 0, 0);
        _4->setObjectName(QString::fromUtf8("_4"));
        sitesConfigLabel = new QLabel(groupBox_15);
        sitesConfigLabel->setObjectName(QString::fromUtf8("sitesConfigLabel"));
        sitesConfigLabel->setEnabled(false);

        _4->addWidget(sitesConfigLabel);

        sitesConfigEdit = new QLineEdit(groupBox_15);
        sitesConfigEdit->setObjectName(QString::fromUtf8("sitesConfigEdit"));
        sitesConfigEdit->setEnabled(false);

        _4->addWidget(sitesConfigEdit);

        findSitesConfigButton = new QPushButton(groupBox_15);
        findSitesConfigButton->setObjectName(QString::fromUtf8("findSitesConfigButton"));
        findSitesConfigButton->setEnabled(false);
        findSitesConfigButton->setMaximumSize(QSize(40, 16777215));
        findSitesConfigButton->setChecked(false);

        _4->addWidget(findSitesConfigButton);


        _2->addLayout(_4);


        vboxLayout->addLayout(_2);


        verticalLayout->addWidget(groupBox_15);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        applyButton = new QPushButton(SitesConfigDialog);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout->addWidget(applyButton);

        doneButton = new QPushButton(SitesConfigDialog);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));

        horizontalLayout->addWidget(doneButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SitesConfigDialog);
        QObject::connect(doneButton, SIGNAL(clicked()), SitesConfigDialog, SLOT(accept()));
        QObject::connect(altSitesConfigCheckBox, SIGNAL(toggled(bool)), sitesConfigEdit, SLOT(setEnabled(bool)));
        QObject::connect(altSitesConfigCheckBox, SIGNAL(toggled(bool)), findSitesConfigButton, SLOT(setEnabled(bool)));
        QObject::connect(altSitesConfigCheckBox, SIGNAL(toggled(bool)), sitesConfigLabel, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(SitesConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *SitesConfigDialog)
    {
        SitesConfigDialog->setWindowTitle(QApplication::translate("SitesConfigDialog", "Dialog", nullptr));
        groupBox_15->setTitle(QApplication::translate("SitesConfigDialog", "Sites configuration", nullptr));
        altSitesConfigCheckBox->setText(QApplication::translate("SitesConfigDialog", "Use alternate sites configuration", nullptr));
        sitesConfigLabel->setText(QApplication::translate("SitesConfigDialog", "Sites configuration file:", nullptr));
        findSitesConfigButton->setText(QApplication::translate("SitesConfigDialog", "...", nullptr));
        applyButton->setText(QApplication::translate("SitesConfigDialog", "Apply", nullptr));
        doneButton->setText(QApplication::translate("SitesConfigDialog", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SitesConfigDialog: public Ui_SitesConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SITESCONFIGDIALOG_H
