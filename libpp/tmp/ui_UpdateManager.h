/********************************************************************************
** Form generated from reading UI file 'UpdateManager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEMANAGER_H
#define UI_UPDATEMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateManager
{
public:
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *pixmapLabel1;
    QLabel *textLabel14;
    QTableWidget *updateTable;
    QHBoxLayout *hboxLayout1;
    QProgressBar *progressBar;
    QSpacerItem *spacerItem;
    QPushButton *updateButton;
    QPushButton *refeshButton;
    QPushButton *doneButton;

    void setupUi(QDialog *UpdateManager)
    {
        if (UpdateManager->objectName().isEmpty())
            UpdateManager->setObjectName(QString::fromUtf8("UpdateManager"));
        UpdateManager->resize(560, 295);
        vboxLayout = new QVBoxLayout(UpdateManager);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        pixmapLabel1 = new QLabel(UpdateManager);
        pixmapLabel1->setObjectName(QString::fromUtf8("pixmapLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pixmapLabel1->sizePolicy().hasHeightForWidth());
        pixmapLabel1->setSizePolicy(sizePolicy);
        pixmapLabel1->setMaximumSize(QSize(32, 32));
        pixmapLabel1->setPixmap(QPixmap(QString::fromUtf8(":/icons/download_manager.png")));
        pixmapLabel1->setScaledContents(true);

        hboxLayout->addWidget(pixmapLabel1);

        textLabel14 = new QLabel(UpdateManager);
        textLabel14->setObjectName(QString::fromUtf8("textLabel14"));
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        textLabel14->setFont(font);
        textLabel14->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        hboxLayout->addWidget(textLabel14);


        vboxLayout1->addLayout(hboxLayout);

        updateTable = new QTableWidget(UpdateManager);
        updateTable->setObjectName(QString::fromUtf8("updateTable"));

        vboxLayout1->addWidget(updateTable);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(UpdateManager);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        hboxLayout1->addWidget(progressBar);

        spacerItem = new QSpacerItem(50, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        updateButton = new QPushButton(UpdateManager);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        hboxLayout1->addWidget(updateButton);

        refeshButton = new QPushButton(UpdateManager);
        refeshButton->setObjectName(QString::fromUtf8("refeshButton"));

        hboxLayout1->addWidget(refeshButton);

        doneButton = new QPushButton(UpdateManager);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));

        hboxLayout1->addWidget(doneButton);


        vboxLayout1->addLayout(hboxLayout1);


        vboxLayout->addLayout(vboxLayout1);


        retranslateUi(UpdateManager);
        QObject::connect(doneButton, SIGNAL(clicked()), UpdateManager, SLOT(close()));

        QMetaObject::connectSlotsByName(UpdateManager);
    } // setupUi

    void retranslateUi(QDialog *UpdateManager)
    {
        UpdateManager->setWindowTitle(QApplication::translate("UpdateManager", "Update Manager", nullptr));
#ifndef QT_NO_WHATSTHIS
        UpdateManager->setWhatsThis(QApplication::translate("UpdateManager", "The update manager checks the current program and configuration versions against what is available on the Columbia Basin Research web site (www.cbr.washington.edu/paramest/pitpro). If a newer version is available, a check mark icon is displayed on the PitPro main page. If the sites configuration is out of date, the update manager allows for automatic update of the sites configuration file. Currently, the program can not be updated in this way, but the at least this provides notification that a newer version exists for download. Please visit the above site to download the latest version of the program.", nullptr));
#endif // QT_NO_WHATSTHIS
        textLabel14->setText(QApplication::translate("UpdateManager", "PitPro Configuration Update Manager", nullptr));
        updateButton->setText(QApplication::translate("UpdateManager", "Update", nullptr));
        refeshButton->setText(QApplication::translate("UpdateManager", "Refesh", nullptr));
        doneButton->setText(QApplication::translate("UpdateManager", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateManager: public Ui_UpdateManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEMANAGER_H
