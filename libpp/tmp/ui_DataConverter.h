/********************************************************************************
** Form generated from reading UI file 'DataConverter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATACONVERTER_H
#define UI_DATACONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataConverter
{
public:
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QTabWidget *tabWidget;
    QWidget *obsTab;
    QVBoxLayout *vboxLayout2;
    QVBoxLayout *vboxLayout3;
    QCheckBox *obsCheckBox;
    QGroupBox *obsSourceGroupBox;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel1_2_3;
    QComboBox *obsCombo;
    QSpacerItem *spacerItem;
    QGroupBox *obsTargetGroupBox;
    QVBoxLayout *vboxLayout5;
    QHBoxLayout *hboxLayout1;
    QLabel *TextLabel1_2_2_2;
    QLineEdit *obsInput;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QWidget *tagTab;
    QVBoxLayout *vboxLayout6;
    QVBoxLayout *vboxLayout7;
    QCheckBox *tagCheckBox;
    QGroupBox *tagSourceGroupBox;
    QVBoxLayout *vboxLayout8;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout9;
    QLabel *textLabel15_4;
    QLabel *textLabel1;
    QVBoxLayout *vboxLayout10;
    QComboBox *tagCombo;
    QComboBox *relCombo;
    QSpacerItem *spacerItem3;
    QGroupBox *tagTargetGroupBox;
    QVBoxLayout *vboxLayout11;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel15_2;
    QLineEdit *tagInput;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QHBoxLayout *hboxLayout4;
    QProgressBar *progressBar;
    QPushButton *buttonConvert;
    QPushButton *buttonDone;
    QLabel *statusText;

    void setupUi(QDialog *DataConverter)
    {
        if (DataConverter->objectName().isEmpty())
            DataConverter->setObjectName(QString::fromUtf8("DataConverter"));
        DataConverter->resize(404, 324);
        DataConverter->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(DataConverter);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(DataConverter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        obsTab = new QWidget();
        obsTab->setObjectName(QString::fromUtf8("obsTab"));
        vboxLayout2 = new QVBoxLayout(obsTab);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        obsCheckBox = new QCheckBox(obsTab);
        obsCheckBox->setObjectName(QString::fromUtf8("obsCheckBox"));
        obsCheckBox->setChecked(true);

        vboxLayout3->addWidget(obsCheckBox);

        obsSourceGroupBox = new QGroupBox(obsTab);
        obsSourceGroupBox->setObjectName(QString::fromUtf8("obsSourceGroupBox"));
        vboxLayout4 = new QVBoxLayout(obsSourceGroupBox);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setContentsMargins(11, 11, 11, 11);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        vboxLayout4->setContentsMargins(9, 9, 9, 9);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        TextLabel1_2_3 = new QLabel(obsSourceGroupBox);
        TextLabel1_2_3->setObjectName(QString::fromUtf8("TextLabel1_2_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextLabel1_2_3->sizePolicy().hasHeightForWidth());
        TextLabel1_2_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        TextLabel1_2_3->setFont(font);

        hboxLayout->addWidget(TextLabel1_2_3);

        obsCombo = new QComboBox(obsSourceGroupBox);
        obsCombo->setObjectName(QString::fromUtf8("obsCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(obsCombo->sizePolicy().hasHeightForWidth());
        obsCombo->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(obsCombo);

        spacerItem = new QSpacerItem(71, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout4->addLayout(hboxLayout);


        vboxLayout3->addWidget(obsSourceGroupBox);

        obsTargetGroupBox = new QGroupBox(obsTab);
        obsTargetGroupBox->setObjectName(QString::fromUtf8("obsTargetGroupBox"));
        vboxLayout5 = new QVBoxLayout(obsTargetGroupBox);
        vboxLayout5->setSpacing(6);
        vboxLayout5->setContentsMargins(11, 11, 11, 11);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        vboxLayout5->setContentsMargins(9, 9, 9, 9);
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        TextLabel1_2_2_2 = new QLabel(obsTargetGroupBox);
        TextLabel1_2_2_2->setObjectName(QString::fromUtf8("TextLabel1_2_2_2"));
        sizePolicy.setHeightForWidth(TextLabel1_2_2_2->sizePolicy().hasHeightForWidth());
        TextLabel1_2_2_2->setSizePolicy(sizePolicy);
        TextLabel1_2_2_2->setFont(font);

        hboxLayout1->addWidget(TextLabel1_2_2_2);

        obsInput = new QLineEdit(obsTargetGroupBox);
        obsInput->setObjectName(QString::fromUtf8("obsInput"));

        hboxLayout1->addWidget(obsInput);

        spacerItem1 = new QSpacerItem(71, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        vboxLayout5->addLayout(hboxLayout1);


        vboxLayout3->addWidget(obsTargetGroupBox);

        spacerItem2 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem2);


        vboxLayout2->addLayout(vboxLayout3);

        tabWidget->addTab(obsTab, QString());
        tagTab = new QWidget();
        tagTab->setObjectName(QString::fromUtf8("tagTab"));
        vboxLayout6 = new QVBoxLayout(tagTab);
        vboxLayout6->setSpacing(6);
        vboxLayout6->setContentsMargins(11, 11, 11, 11);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        vboxLayout6->setContentsMargins(9, 9, 9, 9);
        vboxLayout7 = new QVBoxLayout();
        vboxLayout7->setSpacing(6);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        vboxLayout7->setContentsMargins(0, 0, 0, 0);
        tagCheckBox = new QCheckBox(tagTab);
        tagCheckBox->setObjectName(QString::fromUtf8("tagCheckBox"));
        tagCheckBox->setChecked(true);

        vboxLayout7->addWidget(tagCheckBox);

        tagSourceGroupBox = new QGroupBox(tagTab);
        tagSourceGroupBox->setObjectName(QString::fromUtf8("tagSourceGroupBox"));
        vboxLayout8 = new QVBoxLayout(tagSourceGroupBox);
        vboxLayout8->setSpacing(6);
        vboxLayout8->setContentsMargins(11, 11, 11, 11);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        vboxLayout8->setContentsMargins(9, 9, 9, 9);
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout9 = new QVBoxLayout();
        vboxLayout9->setSpacing(6);
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        vboxLayout9->setContentsMargins(0, 0, 0, 0);
        textLabel15_4 = new QLabel(tagSourceGroupBox);
        textLabel15_4->setObjectName(QString::fromUtf8("textLabel15_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textLabel15_4->sizePolicy().hasHeightForWidth());
        textLabel15_4->setSizePolicy(sizePolicy2);
        textLabel15_4->setFont(font);
        textLabel15_4->setAlignment(Qt::AlignVCenter);

        vboxLayout9->addWidget(textLabel15_4);

        textLabel1 = new QLabel(tagSourceGroupBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        vboxLayout9->addWidget(textLabel1);


        hboxLayout2->addLayout(vboxLayout9);

        vboxLayout10 = new QVBoxLayout();
        vboxLayout10->setSpacing(6);
        vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
        vboxLayout10->setContentsMargins(0, 0, 0, 0);
        tagCombo = new QComboBox(tagSourceGroupBox);
        tagCombo->setObjectName(QString::fromUtf8("tagCombo"));
        sizePolicy1.setHeightForWidth(tagCombo->sizePolicy().hasHeightForWidth());
        tagCombo->setSizePolicy(sizePolicy1);

        vboxLayout10->addWidget(tagCombo);

        relCombo = new QComboBox(tagSourceGroupBox);
        relCombo->setObjectName(QString::fromUtf8("relCombo"));
        sizePolicy1.setHeightForWidth(relCombo->sizePolicy().hasHeightForWidth());
        relCombo->setSizePolicy(sizePolicy1);

        vboxLayout10->addWidget(relCombo);


        hboxLayout2->addLayout(vboxLayout10);

        spacerItem3 = new QSpacerItem(71, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);


        vboxLayout8->addLayout(hboxLayout2);


        vboxLayout7->addWidget(tagSourceGroupBox);

        tagTargetGroupBox = new QGroupBox(tagTab);
        tagTargetGroupBox->setObjectName(QString::fromUtf8("tagTargetGroupBox"));
        vboxLayout11 = new QVBoxLayout(tagTargetGroupBox);
        vboxLayout11->setSpacing(6);
        vboxLayout11->setContentsMargins(11, 11, 11, 11);
        vboxLayout11->setObjectName(QString::fromUtf8("vboxLayout11"));
        vboxLayout11->setContentsMargins(9, 9, 9, 9);
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        textLabel15_2 = new QLabel(tagTargetGroupBox);
        textLabel15_2->setObjectName(QString::fromUtf8("textLabel15_2"));
        textLabel15_2->setFont(font);
        textLabel15_2->setAlignment(Qt::AlignVCenter);

        hboxLayout3->addWidget(textLabel15_2);

        tagInput = new QLineEdit(tagTargetGroupBox);
        tagInput->setObjectName(QString::fromUtf8("tagInput"));

        hboxLayout3->addWidget(tagInput);

        spacerItem4 = new QSpacerItem(71, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem4);


        vboxLayout11->addLayout(hboxLayout3);


        vboxLayout7->addWidget(tagTargetGroupBox);

        spacerItem5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout7->addItem(spacerItem5);


        vboxLayout6->addLayout(vboxLayout7);

        tabWidget->addTab(tagTab, QString());

        vboxLayout1->addWidget(tabWidget);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(DataConverter);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(10);

        hboxLayout4->addWidget(progressBar);

        buttonConvert = new QPushButton(DataConverter);
        buttonConvert->setObjectName(QString::fromUtf8("buttonConvert"));
        buttonConvert->setAutoDefault(true);

        hboxLayout4->addWidget(buttonConvert);

        buttonDone = new QPushButton(DataConverter);
        buttonDone->setObjectName(QString::fromUtf8("buttonDone"));
        buttonDone->setAutoDefault(true);

        hboxLayout4->addWidget(buttonDone);


        vboxLayout1->addLayout(hboxLayout4);

        statusText = new QLabel(DataConverter);
        statusText->setObjectName(QString::fromUtf8("statusText"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(statusText->sizePolicy().hasHeightForWidth());
        statusText->setSizePolicy(sizePolicy3);
        statusText->setMinimumSize(QSize(0, 24));
        statusText->setMaximumSize(QSize(32767, 24));
        statusText->setFrameShape(QFrame::Panel);
        statusText->setFrameShadow(QFrame::Sunken);
        statusText->setIndent(6);

        vboxLayout1->addWidget(statusText);


        vboxLayout->addLayout(vboxLayout1);


        retranslateUi(DataConverter);
        QObject::connect(buttonDone, SIGNAL(clicked()), DataConverter, SLOT(reject()));

        tabWidget->setCurrentIndex(0);
        buttonConvert->setDefault(true);


        QMetaObject::connectSlotsByName(DataConverter);
    } // setupUi

    void retranslateUi(QDialog *DataConverter)
    {
        DataConverter->setWindowTitle(QApplication::translate("DataConverter", "Data Converter", nullptr));
#ifndef QT_NO_WHATSTHIS
        DataConverter->setWhatsThis(QApplication::translate("DataConverter", "The Data Converter converts data files from the old PitPro format (pre-version 4) into the current format. This is only useful when running PitPro with old data. The tagging and observation data can be converted seperately, or consecutively. The new observation data file requires fewer fields than the old one, and so the conversion simply involves removing unnecessary columns. The tagging data file now includes release date, and release site. By including the pre-version 4 release data file in the tagging data conversion, the program will add the release data to the new tagging data file. The release site will be unavailable when converting old tagging data to new. Currently the release site is only used when comparing recapture sites to release sites in the case where this type of recapture is ignored, which is an optional setting.", nullptr));
#endif // QT_NO_WHATSTHIS
        obsCheckBox->setText(QApplication::translate("DataConverter", "Convert observation data", nullptr));
        obsSourceGroupBox->setTitle(QApplication::translate("DataConverter", "Source (Pre Version 4 Data)", nullptr));
        TextLabel1_2_3->setText(QApplication::translate("DataConverter", "Obs file:", nullptr));
        obsTargetGroupBox->setTitle(QApplication::translate("DataConverter", "Target", nullptr));
        TextLabel1_2_2_2->setText(QApplication::translate("DataConverter", "New obs file:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(obsTab), QApplication::translate("DataConverter", "Observation data", nullptr));
        tagCheckBox->setText(QApplication::translate("DataConverter", "Convert tagging data", nullptr));
        tagSourceGroupBox->setTitle(QApplication::translate("DataConverter", "Source (Pre Version 4 Data)", nullptr));
        textLabel15_4->setText(QApplication::translate("DataConverter", "Tag file:", nullptr));
        textLabel1->setText(QApplication::translate("DataConverter", "Release file:", nullptr));
        tagTargetGroupBox->setTitle(QApplication::translate("DataConverter", "Target", nullptr));
        textLabel15_2->setText(QApplication::translate("DataConverter", "New tag file:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tagTab), QApplication::translate("DataConverter", "Tagging data", nullptr));
        buttonConvert->setText(QApplication::translate("DataConverter", "Convert", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonConvert->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        buttonDone->setText(QApplication::translate("DataConverter", "Done", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonDone->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        statusText->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DataConverter: public Ui_DataConverter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATACONVERTER_H
