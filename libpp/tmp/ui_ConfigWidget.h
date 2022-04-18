/********************************************************************************
** Form generated from reading UI file 'ConfigWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGWIDGET_H
#define UI_CONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigWidget
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *runSetup;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *filesInputGroupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *InputFolderLayout;
    QLabel *dataFolderLabel;
    QLineEdit *dataDirEdit;
    QPushButton *dataDirButton;
    QHBoxLayout *OutputFolderLayout;
    QLabel *outputFolderLabel;
    QLineEdit *outDirEdit;
    QPushButton *outDirButton;
    QGroupBox *runConfigGroupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *runConfigLayout;
    QHBoxLayout *runConfigPopLayout;
    QVBoxLayout *runConfigPopLabels;
    QLabel *popNameTextLabel;
    QLabel *tagFileTextLabel;
    QLabel *obsFileTextLabel;
    QVBoxLayout *runConfigPopSelectLayout;
    QHBoxLayout *runConfigPopNameLayout;
    QLineEdit *runNameEdit;
    QSpacerItem *runConfigPopNameSpacer;
    QComboBox *tagCombo;
    QComboBox *obsCombo;
    QSpacerItem *runConfigSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *runConfig;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QLabel *mortFileTextLabel;
    QLabel *recaptureFileTextLabel;
    QVBoxLayout *verticalLayout_7;
    QComboBox *mortCombo;
    QComboBox *recapCombo;
    QCheckBox *fileFilterSwitch;
    QHBoxLayout *runButtonsLayout;
    QSpacerItem *runButtonsSpacer;
    QPushButton *addRunButton;
    QPushButton *deleteRunButton;
    QGroupBox *definedRunsGroupBox;
    QVBoxLayout *vboxLayout1;
    QVBoxLayout *definedRunsLayout;
    QTableWidget *runsTable;
    QHBoxLayout *definedRunsCombineLayout;
    QCheckBox *groupRunsCheckBox;
    QSpacerItem *definedRunsCombineSpacer;
    QLabel *runPrefixTextLabel;
    QLineEdit *outPrefixEdit;
    QWidget *files;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *selectFilesGroup;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *surphFileCheckBox;
    QCheckBox *errorsFileCheckBox;
    QCheckBox *detectionDateFileCheckBox;
    QCheckBox *travelTimeFileCheckBox;
    QCheckBox *sequenceFileCheckBox;
    QGroupBox *captureHistGroup;
    QVBoxLayout *vboxLayout3;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *formatTextlabel;
    QComboBox *surphVersionCombo;
    QSpacerItem *spacer_3;
    QGroupBox *covariatesGroup;
    QVBoxLayout *vboxLayout4;
    QCheckBox *lengthCovCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *spacer_2;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *zeroCovariateCheckBox;
    QCheckBox *nullCovariateCheckBox;
    QSpacerItem *spacer;
    QWidget *sites;
    QVBoxLayout *vboxLayout5;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_4;
    QVBoxLayout *vboxLayout6;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *histFieldCombo;
    QPushButton *addHistFieldButton;
    QPushButton *sortJuvenileSitesButton;
    QSpacerItem *spacer_4;
    QListWidget *histFieldList;
    QGroupBox *groupBox_5;
    QVBoxLayout *vboxLayout7;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *adultSiteCombo;
    QPushButton *addAdultSiteButton;
    QPushButton *sortAdultSitesButton;
    QSpacerItem *spacer_5;
    QListWidget *adultSiteList;
    QGroupBox *groupBox_6;
    QVBoxLayout *vboxLayout8;
    QCheckBox *siteRelCheckBox;
    QGroupBox *lastFieldGroupBox;
    QVBoxLayout *vboxLayout9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lastFieldTextLabel;
    QComboBox *lastFieldCombo;
    QSpacerItem *spacer_6;
    QWidget *tagScreening;
    QVBoxLayout *vboxLayout10;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_7;
    QVBoxLayout *vboxLayout11;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_14;
    QLabel *speciesTextLabel;
    QLabel *runTextLabel;
    QLabel *rtTextLabel;
    QVBoxLayout *verticalLayout_15;
    QComboBox *speciesCombo;
    QComboBox *runCombo;
    QComboBox *rearTypeCombo;
    QSpacerItem *spacer_8;
    QSpacerItem *spacer_7;
    QWidget *adultCriteria;
    QVBoxLayout *vboxLayout12;
    QCheckBox *assumeJuvenileCheckBox;
    QGroupBox *groupBox_18;
    QVBoxLayout *vboxLayout13;
    QCheckBox *steelheadYearCB;
    QGroupBox *groupBox_11;
    QVBoxLayout *vboxLayout14;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_17;
    QRadioButton *migrationYearRadio;
    QRadioButton *juvCutoffRadio;
    QVBoxLayout *verticalLayout_18;
    QLineEdit *migrYearEdit;
    QLineEdit *juvCutoffEdit;
    QSpacerItem *spacer_10;
    QGroupBox *groupBox_10;
    QVBoxLayout *vboxLayout15;
    QVBoxLayout *verticalLayout_16;
    QLabel *miniJackTextLabel;
    QRadioButton *combineJacksCheckBox;
    QRadioButton *removeJacksCheckBox;
    QGroupBox *groupBox_8;
    QVBoxLayout *vboxLayout16;
    QHBoxLayout *horizontalLayout_11;
    QLabel *textLabel2;
    QRadioButton *lastRouteRadio;
    QRadioButton *anyRouteRadio;
    QSpacerItem *spacer_11;
    QGroupBox *groupBox_9;
    QVBoxLayout *vboxLayout17;
    QVBoxLayout *verticalLayout_19;
    QCheckBox *removeResSwitch;
    QCheckBox *resCutoffCheckBox;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *spacer_12;
    QLabel *label;
    QLineEdit *resCutoffEdit;
    QSpacerItem *spacerItem;
    QSpacerItem *spacer_9;
    QWidget *trans;
    QVBoxLayout *vboxLayout18;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_3;
    QGroupBox *groupBox_16;
    QVBoxLayout *vboxLayout19;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_14;
    QComboBox *transComboBox;
    QPushButton *addTransSiteButton;
    QPushButton *sortTransSitesButton;
    QSpacerItem *spacer_14;
    QListWidget *transSiteList;
    QSpacerItem *spacer_15;
    QGroupBox *groupBox_17;
    QVBoxLayout *vboxLayout20;
    QCheckBox *sampTransCheckBox;
    QSpacerItem *spacer_13;
    QWidget *advanced;
    QVBoxLayout *vboxLayout21;
    QGroupBox *groupBox_14;
    QVBoxLayout *vboxLayout22;
    QHBoxLayout *horizontalLayout_15;
    QLabel *methodTextLabel;
    QRadioButton *removalTrumpsRadio;
    QRadioButton *lastDetectionRadio;
    QSpacerItem *spacer_17;
    QGroupBox *groupBox_13;
    QVBoxLayout *vboxLayout23;
    QCheckBox *ignoreReRecapsCheckBox;
    QGroupBox *groupBox_12;
    QVBoxLayout *vboxLayout24;
    QCheckBox *singleCoilCheckBox;
    QCheckBox *tagCheckBox;
    QCheckBox *warningsCheckBox;
    QSpacerItem *spacer_16;

    void setupUi(QWidget *ConfigWidget)
    {
        if (ConfigWidget->objectName().isEmpty())
            ConfigWidget->setObjectName(QString::fromUtf8("ConfigWidget"));
        ConfigWidget->resize(666, 573);
        vboxLayout = new QVBoxLayout(ConfigWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(ConfigWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setFocusPolicy(Qt::NoFocus);
        runSetup = new QWidget();
        runSetup->setObjectName(QString::fromUtf8("runSetup"));
        verticalLayout_5 = new QVBoxLayout(runSetup);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        filesInputGroupBox_2 = new QGroupBox(runSetup);
        filesInputGroupBox_2->setObjectName(QString::fromUtf8("filesInputGroupBox_2"));
        verticalLayout = new QVBoxLayout(filesInputGroupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        InputFolderLayout = new QHBoxLayout();
        InputFolderLayout->setSpacing(6);
        InputFolderLayout->setObjectName(QString::fromUtf8("InputFolderLayout"));
        InputFolderLayout->setContentsMargins(0, 0, 0, 0);
        dataFolderLabel = new QLabel(filesInputGroupBox_2);
        dataFolderLabel->setObjectName(QString::fromUtf8("dataFolderLabel"));

        InputFolderLayout->addWidget(dataFolderLabel);

        dataDirEdit = new QLineEdit(filesInputGroupBox_2);
        dataDirEdit->setObjectName(QString::fromUtf8("dataDirEdit"));

        InputFolderLayout->addWidget(dataDirEdit);

        dataDirButton = new QPushButton(filesInputGroupBox_2);
        dataDirButton->setObjectName(QString::fromUtf8("dataDirButton"));
        dataDirButton->setMaximumSize(QSize(40, 32767));

        InputFolderLayout->addWidget(dataDirButton);


        verticalLayout->addLayout(InputFolderLayout);

        OutputFolderLayout = new QHBoxLayout();
        OutputFolderLayout->setSpacing(6);
        OutputFolderLayout->setObjectName(QString::fromUtf8("OutputFolderLayout"));
        OutputFolderLayout->setContentsMargins(0, 0, 0, 0);
        outputFolderLabel = new QLabel(filesInputGroupBox_2);
        outputFolderLabel->setObjectName(QString::fromUtf8("outputFolderLabel"));
        outputFolderLabel->setAlignment(Qt::AlignVCenter);

        OutputFolderLayout->addWidget(outputFolderLabel);

        outDirEdit = new QLineEdit(filesInputGroupBox_2);
        outDirEdit->setObjectName(QString::fromUtf8("outDirEdit"));

        OutputFolderLayout->addWidget(outDirEdit);

        outDirButton = new QPushButton(filesInputGroupBox_2);
        outDirButton->setObjectName(QString::fromUtf8("outDirButton"));
        outDirButton->setMaximumSize(QSize(40, 32767));

        OutputFolderLayout->addWidget(outDirButton);


        verticalLayout->addLayout(OutputFolderLayout);


        verticalLayout_5->addWidget(filesInputGroupBox_2);

        runConfigGroupBox = new QGroupBox(runSetup);
        runConfigGroupBox->setObjectName(QString::fromUtf8("runConfigGroupBox"));
        verticalLayout_4 = new QVBoxLayout(runConfigGroupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        runConfigLayout = new QHBoxLayout();
        runConfigLayout->setSpacing(6);
        runConfigLayout->setObjectName(QString::fromUtf8("runConfigLayout"));
        runConfigPopLayout = new QHBoxLayout();
        runConfigPopLayout->setSpacing(6);
        runConfigPopLayout->setObjectName(QString::fromUtf8("runConfigPopLayout"));
        runConfigPopLayout->setContentsMargins(0, 0, 0, 0);
        runConfigPopLabels = new QVBoxLayout();
        runConfigPopLabels->setSpacing(6);
        runConfigPopLabels->setObjectName(QString::fromUtf8("runConfigPopLabels"));
        runConfigPopLabels->setContentsMargins(0, 0, 0, 0);
        popNameTextLabel = new QLabel(runConfigGroupBox);
        popNameTextLabel->setObjectName(QString::fromUtf8("popNameTextLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        popNameTextLabel->setFont(font);

        runConfigPopLabels->addWidget(popNameTextLabel);

        tagFileTextLabel = new QLabel(runConfigGroupBox);
        tagFileTextLabel->setObjectName(QString::fromUtf8("tagFileTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tagFileTextLabel->sizePolicy().hasHeightForWidth());
        tagFileTextLabel->setSizePolicy(sizePolicy);
        tagFileTextLabel->setFont(font);

        runConfigPopLabels->addWidget(tagFileTextLabel);

        obsFileTextLabel = new QLabel(runConfigGroupBox);
        obsFileTextLabel->setObjectName(QString::fromUtf8("obsFileTextLabel"));
        obsFileTextLabel->setFont(font);
        obsFileTextLabel->setAlignment(Qt::AlignVCenter);

        runConfigPopLabels->addWidget(obsFileTextLabel);


        runConfigPopLayout->addLayout(runConfigPopLabels);

        runConfigPopSelectLayout = new QVBoxLayout();
        runConfigPopSelectLayout->setSpacing(6);
        runConfigPopSelectLayout->setObjectName(QString::fromUtf8("runConfigPopSelectLayout"));
        runConfigPopSelectLayout->setContentsMargins(0, 0, 0, 0);
        runConfigPopNameLayout = new QHBoxLayout();
        runConfigPopNameLayout->setSpacing(6);
        runConfigPopNameLayout->setObjectName(QString::fromUtf8("runConfigPopNameLayout"));
        runConfigPopNameLayout->setContentsMargins(0, 0, 0, 0);
        runNameEdit = new QLineEdit(runConfigGroupBox);
        runNameEdit->setObjectName(QString::fromUtf8("runNameEdit"));

        runConfigPopNameLayout->addWidget(runNameEdit);

        runConfigPopNameSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        runConfigPopNameLayout->addItem(runConfigPopNameSpacer);


        runConfigPopSelectLayout->addLayout(runConfigPopNameLayout);

        tagCombo = new QComboBox(runConfigGroupBox);
        tagCombo->setObjectName(QString::fromUtf8("tagCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tagCombo->sizePolicy().hasHeightForWidth());
        tagCombo->setSizePolicy(sizePolicy1);

        runConfigPopSelectLayout->addWidget(tagCombo);

        obsCombo = new QComboBox(runConfigGroupBox);
        obsCombo->setObjectName(QString::fromUtf8("obsCombo"));
        sizePolicy1.setHeightForWidth(obsCombo->sizePolicy().hasHeightForWidth());
        obsCombo->setSizePolicy(sizePolicy1);

        runConfigPopSelectLayout->addWidget(obsCombo);


        runConfigPopLayout->addLayout(runConfigPopSelectLayout);


        runConfigLayout->addLayout(runConfigPopLayout);

        runConfigSpacer = new QSpacerItem(71, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        runConfigLayout->addItem(runConfigSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        runConfig = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(runConfig);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mortFileTextLabel = new QLabel(runConfigGroupBox);
        mortFileTextLabel->setObjectName(QString::fromUtf8("mortFileTextLabel"));
        sizePolicy.setHeightForWidth(mortFileTextLabel->sizePolicy().hasHeightForWidth());
        mortFileTextLabel->setSizePolicy(sizePolicy);
        mortFileTextLabel->setFont(font);

        verticalLayout_6->addWidget(mortFileTextLabel);

        recaptureFileTextLabel = new QLabel(runConfigGroupBox);
        recaptureFileTextLabel->setObjectName(QString::fromUtf8("recaptureFileTextLabel"));
        sizePolicy.setHeightForWidth(recaptureFileTextLabel->sizePolicy().hasHeightForWidth());
        recaptureFileTextLabel->setSizePolicy(sizePolicy);
        recaptureFileTextLabel->setFont(font);

        verticalLayout_6->addWidget(recaptureFileTextLabel);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        mortCombo = new QComboBox(runConfigGroupBox);
        mortCombo->setObjectName(QString::fromUtf8("mortCombo"));
        sizePolicy1.setHeightForWidth(mortCombo->sizePolicy().hasHeightForWidth());
        mortCombo->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(mortCombo);

        recapCombo = new QComboBox(runConfigGroupBox);
        recapCombo->setObjectName(QString::fromUtf8("recapCombo"));
        sizePolicy1.setHeightForWidth(recapCombo->sizePolicy().hasHeightForWidth());
        recapCombo->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(recapCombo);


        horizontalLayout->addLayout(verticalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout);


        runConfigLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(runConfigLayout);

        fileFilterSwitch = new QCheckBox(runConfigGroupBox);
        fileFilterSwitch->setObjectName(QString::fromUtf8("fileFilterSwitch"));

        verticalLayout_4->addWidget(fileFilterSwitch);


        verticalLayout_5->addWidget(runConfigGroupBox);

        runButtonsLayout = new QHBoxLayout();
        runButtonsLayout->setSpacing(6);
        runButtonsLayout->setObjectName(QString::fromUtf8("runButtonsLayout"));
        runButtonsLayout->setContentsMargins(0, 0, 0, 0);
        runButtonsSpacer = new QSpacerItem(289, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        runButtonsLayout->addItem(runButtonsSpacer);

        addRunButton = new QPushButton(runSetup);
        addRunButton->setObjectName(QString::fromUtf8("addRunButton"));
        addRunButton->setFont(font);
        addRunButton->setFocusPolicy(Qt::TabFocus);
        addRunButton->setAutoDefault(false);

        runButtonsLayout->addWidget(addRunButton);

        deleteRunButton = new QPushButton(runSetup);
        deleteRunButton->setObjectName(QString::fromUtf8("deleteRunButton"));
        deleteRunButton->setFocusPolicy(Qt::NoFocus);

        runButtonsLayout->addWidget(deleteRunButton);


        verticalLayout_5->addLayout(runButtonsLayout);

        definedRunsGroupBox = new QGroupBox(runSetup);
        definedRunsGroupBox->setObjectName(QString::fromUtf8("definedRunsGroupBox"));
        vboxLayout1 = new QVBoxLayout(definedRunsGroupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        definedRunsLayout = new QVBoxLayout();
        definedRunsLayout->setSpacing(6);
        definedRunsLayout->setObjectName(QString::fromUtf8("definedRunsLayout"));
        definedRunsLayout->setContentsMargins(0, 0, 0, 0);
        runsTable = new QTableWidget(definedRunsGroupBox);
        runsTable->setObjectName(QString::fromUtf8("runsTable"));

        definedRunsLayout->addWidget(runsTable);

        definedRunsCombineLayout = new QHBoxLayout();
        definedRunsCombineLayout->setSpacing(6);
        definedRunsCombineLayout->setObjectName(QString::fromUtf8("definedRunsCombineLayout"));
        definedRunsCombineLayout->setContentsMargins(0, 0, 0, 0);
        groupRunsCheckBox = new QCheckBox(definedRunsGroupBox);
        groupRunsCheckBox->setObjectName(QString::fromUtf8("groupRunsCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupRunsCheckBox->sizePolicy().hasHeightForWidth());
        groupRunsCheckBox->setSizePolicy(sizePolicy2);
        groupRunsCheckBox->setFont(font);
        groupRunsCheckBox->setFocusPolicy(Qt::NoFocus);

        definedRunsCombineLayout->addWidget(groupRunsCheckBox);

        definedRunsCombineSpacer = new QSpacerItem(80, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        definedRunsCombineLayout->addItem(definedRunsCombineSpacer);

        runPrefixTextLabel = new QLabel(definedRunsGroupBox);
        runPrefixTextLabel->setObjectName(QString::fromUtf8("runPrefixTextLabel"));
        runPrefixTextLabel->setAlignment(Qt::AlignVCenter);

        definedRunsCombineLayout->addWidget(runPrefixTextLabel);

        outPrefixEdit = new QLineEdit(definedRunsGroupBox);
        outPrefixEdit->setObjectName(QString::fromUtf8("outPrefixEdit"));
        outPrefixEdit->setEnabled(false);

        definedRunsCombineLayout->addWidget(outPrefixEdit);


        definedRunsLayout->addLayout(definedRunsCombineLayout);


        vboxLayout1->addLayout(definedRunsLayout);


        verticalLayout_5->addWidget(definedRunsGroupBox);

        tabWidget->addTab(runSetup, QString());
        files = new QWidget();
        files->setObjectName(QString::fromUtf8("files"));
        verticalLayout_3 = new QVBoxLayout(files);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        selectFilesGroup = new QGroupBox(files);
        selectFilesGroup->setObjectName(QString::fromUtf8("selectFilesGroup"));
        vboxLayout2 = new QVBoxLayout(selectFilesGroup);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        surphFileCheckBox = new QCheckBox(selectFilesGroup);
        surphFileCheckBox->setObjectName(QString::fromUtf8("surphFileCheckBox"));
        surphFileCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(surphFileCheckBox);

        errorsFileCheckBox = new QCheckBox(selectFilesGroup);
        errorsFileCheckBox->setObjectName(QString::fromUtf8("errorsFileCheckBox"));
        errorsFileCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(errorsFileCheckBox);

        detectionDateFileCheckBox = new QCheckBox(selectFilesGroup);
        detectionDateFileCheckBox->setObjectName(QString::fromUtf8("detectionDateFileCheckBox"));
        detectionDateFileCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(detectionDateFileCheckBox);

        travelTimeFileCheckBox = new QCheckBox(selectFilesGroup);
        travelTimeFileCheckBox->setObjectName(QString::fromUtf8("travelTimeFileCheckBox"));

        horizontalLayout_2->addWidget(travelTimeFileCheckBox);

        sequenceFileCheckBox = new QCheckBox(selectFilesGroup);
        sequenceFileCheckBox->setObjectName(QString::fromUtf8("sequenceFileCheckBox"));

        horizontalLayout_2->addWidget(sequenceFileCheckBox);


        vboxLayout2->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(selectFilesGroup);

        captureHistGroup = new QGroupBox(files);
        captureHistGroup->setObjectName(QString::fromUtf8("captureHistGroup"));
        vboxLayout3 = new QVBoxLayout(captureHistGroup);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(11, 11, 11, 11);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        formatTextlabel = new QLabel(captureHistGroup);
        formatTextlabel->setObjectName(QString::fromUtf8("formatTextlabel"));

        horizontalLayout_4->addWidget(formatTextlabel);

        surphVersionCombo = new QComboBox(captureHistGroup);
        surphVersionCombo->addItem(QString());
        surphVersionCombo->addItem(QString());
        surphVersionCombo->addItem(QString());
        surphVersionCombo->setObjectName(QString::fromUtf8("surphVersionCombo"));

        horizontalLayout_4->addWidget(surphVersionCombo);

        spacer_3 = new QSpacerItem(589, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(spacer_3);


        verticalLayout_9->addLayout(horizontalLayout_4);


        vboxLayout3->addLayout(verticalLayout_9);


        verticalLayout_3->addWidget(captureHistGroup);

        covariatesGroup = new QGroupBox(files);
        covariatesGroup->setObjectName(QString::fromUtf8("covariatesGroup"));
        vboxLayout4 = new QVBoxLayout(covariatesGroup);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setContentsMargins(11, 11, 11, 11);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        lengthCovCheckBox = new QCheckBox(covariatesGroup);
        lengthCovCheckBox->setObjectName(QString::fromUtf8("lengthCovCheckBox"));

        vboxLayout4->addWidget(lengthCovCheckBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacer_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        zeroCovariateCheckBox = new QCheckBox(covariatesGroup);
        zeroCovariateCheckBox->setObjectName(QString::fromUtf8("zeroCovariateCheckBox"));
        zeroCovariateCheckBox->setEnabled(false);

        verticalLayout_8->addWidget(zeroCovariateCheckBox);

        nullCovariateCheckBox = new QCheckBox(covariatesGroup);
        nullCovariateCheckBox->setObjectName(QString::fromUtf8("nullCovariateCheckBox"));
        nullCovariateCheckBox->setEnabled(false);

        verticalLayout_8->addWidget(nullCovariateCheckBox);


        horizontalLayout_3->addLayout(verticalLayout_8);


        vboxLayout4->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(covariatesGroup);

        spacer = new QSpacerItem(616, 291, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(spacer);

        tabWidget->addTab(files, QString());
        covariatesGroup->raise();
        selectFilesGroup->raise();
        captureHistGroup->raise();
        sites = new QWidget();
        sites->setObjectName(QString::fromUtf8("sites"));
        vboxLayout5 = new QVBoxLayout(sites);
        vboxLayout5->setSpacing(6);
        vboxLayout5->setContentsMargins(11, 11, 11, 11);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        vboxLayout5->setContentsMargins(9, 9, 9, 9);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(sites);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        vboxLayout6 = new QVBoxLayout(groupBox_4);
        vboxLayout6->setSpacing(6);
        vboxLayout6->setContentsMargins(11, 11, 11, 11);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        vboxLayout6->setContentsMargins(9, 9, 9, 9);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        histFieldCombo = new QComboBox(groupBox_4);
        histFieldCombo->setObjectName(QString::fromUtf8("histFieldCombo"));
        sizePolicy1.setHeightForWidth(histFieldCombo->sizePolicy().hasHeightForWidth());
        histFieldCombo->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(histFieldCombo);

        addHistFieldButton = new QPushButton(groupBox_4);
        addHistFieldButton->setObjectName(QString::fromUtf8("addHistFieldButton"));
        addHistFieldButton->setMaximumSize(QSize(40, 40));

        horizontalLayout_6->addWidget(addHistFieldButton);

        sortJuvenileSitesButton = new QPushButton(groupBox_4);
        sortJuvenileSitesButton->setObjectName(QString::fromUtf8("sortJuvenileSitesButton"));
        sortJuvenileSitesButton->setMaximumSize(QSize(40, 40));

        horizontalLayout_6->addWidget(sortJuvenileSitesButton);

        spacer_4 = new QSpacerItem(30, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(spacer_4);


        verticalLayout_11->addLayout(horizontalLayout_6);

        histFieldList = new QListWidget(groupBox_4);
        histFieldList->setObjectName(QString::fromUtf8("histFieldList"));

        verticalLayout_11->addWidget(histFieldList);


        vboxLayout6->addLayout(verticalLayout_11);


        horizontalLayout_5->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(sites);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        vboxLayout7 = new QVBoxLayout(groupBox_5);
        vboxLayout7->setSpacing(6);
        vboxLayout7->setContentsMargins(11, 11, 11, 11);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        vboxLayout7->setContentsMargins(9, 9, 9, 9);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        adultSiteCombo = new QComboBox(groupBox_5);
        adultSiteCombo->setObjectName(QString::fromUtf8("adultSiteCombo"));
        adultSiteCombo->setEnabled(true);
        sizePolicy1.setHeightForWidth(adultSiteCombo->sizePolicy().hasHeightForWidth());
        adultSiteCombo->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(adultSiteCombo);

        addAdultSiteButton = new QPushButton(groupBox_5);
        addAdultSiteButton->setObjectName(QString::fromUtf8("addAdultSiteButton"));
        addAdultSiteButton->setEnabled(true);
        addAdultSiteButton->setMaximumSize(QSize(40, 40));

        horizontalLayout_7->addWidget(addAdultSiteButton);

        sortAdultSitesButton = new QPushButton(groupBox_5);
        sortAdultSitesButton->setObjectName(QString::fromUtf8("sortAdultSitesButton"));
        sortAdultSitesButton->setMaximumSize(QSize(40, 40));

        horizontalLayout_7->addWidget(sortAdultSitesButton);

        spacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(spacer_5);


        verticalLayout_12->addLayout(horizontalLayout_7);

        adultSiteList = new QListWidget(groupBox_5);
        adultSiteList->setObjectName(QString::fromUtf8("adultSiteList"));

        verticalLayout_12->addWidget(adultSiteList);


        vboxLayout7->addLayout(verticalLayout_12);


        horizontalLayout_5->addWidget(groupBox_5);


        verticalLayout_10->addLayout(horizontalLayout_5);

        groupBox_6 = new QGroupBox(sites);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        vboxLayout8 = new QVBoxLayout(groupBox_6);
        vboxLayout8->setSpacing(6);
        vboxLayout8->setContentsMargins(11, 11, 11, 11);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        vboxLayout8->setContentsMargins(9, 9, 9, 9);
        siteRelCheckBox = new QCheckBox(groupBox_6);
        siteRelCheckBox->setObjectName(QString::fromUtf8("siteRelCheckBox"));

        vboxLayout8->addWidget(siteRelCheckBox);


        verticalLayout_10->addWidget(groupBox_6);

        lastFieldGroupBox = new QGroupBox(sites);
        lastFieldGroupBox->setObjectName(QString::fromUtf8("lastFieldGroupBox"));
        vboxLayout9 = new QVBoxLayout(lastFieldGroupBox);
        vboxLayout9->setSpacing(6);
        vboxLayout9->setContentsMargins(11, 11, 11, 11);
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        vboxLayout9->setContentsMargins(9, 9, 9, 9);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        lastFieldTextLabel = new QLabel(lastFieldGroupBox);
        lastFieldTextLabel->setObjectName(QString::fromUtf8("lastFieldTextLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lastFieldTextLabel->sizePolicy().hasHeightForWidth());
        lastFieldTextLabel->setSizePolicy(sizePolicy3);
        lastFieldTextLabel->setAlignment(Qt::AlignVCenter);

        horizontalLayout_8->addWidget(lastFieldTextLabel);

        lastFieldCombo = new QComboBox(lastFieldGroupBox);
        lastFieldCombo->setObjectName(QString::fromUtf8("lastFieldCombo"));
        sizePolicy1.setHeightForWidth(lastFieldCombo->sizePolicy().hasHeightForWidth());
        lastFieldCombo->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(lastFieldCombo);

        spacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(spacer_6);


        vboxLayout9->addLayout(horizontalLayout_8);


        verticalLayout_10->addWidget(lastFieldGroupBox);


        vboxLayout5->addLayout(verticalLayout_10);

        tabWidget->addTab(sites, QString());
        tagScreening = new QWidget();
        tagScreening->setObjectName(QString::fromUtf8("tagScreening"));
        vboxLayout10 = new QVBoxLayout(tagScreening);
        vboxLayout10->setSpacing(6);
        vboxLayout10->setContentsMargins(11, 11, 11, 11);
        vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
        vboxLayout10->setContentsMargins(9, 9, 9, 9);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QGroupBox(tagScreening);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        vboxLayout11 = new QVBoxLayout(groupBox_7);
        vboxLayout11->setSpacing(6);
        vboxLayout11->setContentsMargins(11, 11, 11, 11);
        vboxLayout11->setObjectName(QString::fromUtf8("vboxLayout11"));
        vboxLayout11->setContentsMargins(9, 9, 9, 9);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        speciesTextLabel = new QLabel(groupBox_7);
        speciesTextLabel->setObjectName(QString::fromUtf8("speciesTextLabel"));
        speciesTextLabel->setEnabled(true);

        verticalLayout_14->addWidget(speciesTextLabel);

        runTextLabel = new QLabel(groupBox_7);
        runTextLabel->setObjectName(QString::fromUtf8("runTextLabel"));

        verticalLayout_14->addWidget(runTextLabel);

        rtTextLabel = new QLabel(groupBox_7);
        rtTextLabel->setObjectName(QString::fromUtf8("rtTextLabel"));
        rtTextLabel->setEnabled(true);
        rtTextLabel->setAlignment(Qt::AlignVCenter);

        verticalLayout_14->addWidget(rtTextLabel);


        horizontalLayout_9->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        speciesCombo = new QComboBox(groupBox_7);
        speciesCombo->addItem(QString());
        speciesCombo->addItem(QString());
        speciesCombo->addItem(QString());
        speciesCombo->addItem(QString());
        speciesCombo->addItem(QString());
        speciesCombo->addItem(QString());
        speciesCombo->addItem(QString());
        speciesCombo->setObjectName(QString::fromUtf8("speciesCombo"));
        speciesCombo->setEnabled(true);

        verticalLayout_15->addWidget(speciesCombo);

        runCombo = new QComboBox(groupBox_7);
        runCombo->addItem(QString());
        runCombo->addItem(QString());
        runCombo->addItem(QString());
        runCombo->addItem(QString());
        runCombo->setObjectName(QString::fromUtf8("runCombo"));

        verticalLayout_15->addWidget(runCombo);

        rearTypeCombo = new QComboBox(groupBox_7);
        rearTypeCombo->addItem(QString());
        rearTypeCombo->addItem(QString());
        rearTypeCombo->addItem(QString());
        rearTypeCombo->addItem(QString());
        rearTypeCombo->setObjectName(QString::fromUtf8("rearTypeCombo"));
        rearTypeCombo->setEnabled(true);

        verticalLayout_15->addWidget(rearTypeCombo);


        horizontalLayout_9->addLayout(verticalLayout_15);

        spacer_8 = new QSpacerItem(352, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(spacer_8);


        vboxLayout11->addLayout(horizontalLayout_9);


        verticalLayout_13->addWidget(groupBox_7);

        spacer_7 = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(spacer_7);


        vboxLayout10->addLayout(verticalLayout_13);

        tabWidget->addTab(tagScreening, QString());
        adultCriteria = new QWidget();
        adultCriteria->setObjectName(QString::fromUtf8("adultCriteria"));
        vboxLayout12 = new QVBoxLayout(adultCriteria);
        vboxLayout12->setSpacing(6);
        vboxLayout12->setContentsMargins(11, 11, 11, 11);
        vboxLayout12->setObjectName(QString::fromUtf8("vboxLayout12"));
        assumeJuvenileCheckBox = new QCheckBox(adultCriteria);
        assumeJuvenileCheckBox->setObjectName(QString::fromUtf8("assumeJuvenileCheckBox"));
        assumeJuvenileCheckBox->setChecked(false);

        vboxLayout12->addWidget(assumeJuvenileCheckBox);

        groupBox_18 = new QGroupBox(adultCriteria);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        vboxLayout13 = new QVBoxLayout(groupBox_18);
        vboxLayout13->setSpacing(6);
        vboxLayout13->setContentsMargins(11, 11, 11, 11);
        vboxLayout13->setObjectName(QString::fromUtf8("vboxLayout13"));
        steelheadYearCB = new QCheckBox(groupBox_18);
        steelheadYearCB->setObjectName(QString::fromUtf8("steelheadYearCB"));

        vboxLayout13->addWidget(steelheadYearCB);

        groupBox_11 = new QGroupBox(groupBox_18);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        vboxLayout14 = new QVBoxLayout(groupBox_11);
        vboxLayout14->setSpacing(6);
        vboxLayout14->setContentsMargins(11, 11, 11, 11);
        vboxLayout14->setObjectName(QString::fromUtf8("vboxLayout14"));
        vboxLayout14->setContentsMargins(9, 9, 9, 9);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        migrationYearRadio = new QRadioButton(groupBox_11);
        migrationYearRadio->setObjectName(QString::fromUtf8("migrationYearRadio"));
        migrationYearRadio->setChecked(true);

        verticalLayout_17->addWidget(migrationYearRadio);

        juvCutoffRadio = new QRadioButton(groupBox_11);
        juvCutoffRadio->setObjectName(QString::fromUtf8("juvCutoffRadio"));

        verticalLayout_17->addWidget(juvCutoffRadio);


        horizontalLayout_10->addLayout(verticalLayout_17);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        migrYearEdit = new QLineEdit(groupBox_11);
        migrYearEdit->setObjectName(QString::fromUtf8("migrYearEdit"));
        migrYearEdit->setMinimumSize(QSize(100, 0));
        migrYearEdit->setMaximumSize(QSize(100, 32767));

        verticalLayout_18->addWidget(migrYearEdit);

        juvCutoffEdit = new QLineEdit(groupBox_11);
        juvCutoffEdit->setObjectName(QString::fromUtf8("juvCutoffEdit"));
        juvCutoffEdit->setEnabled(false);
        juvCutoffEdit->setMinimumSize(QSize(100, 0));
        juvCutoffEdit->setMaximumSize(QSize(100, 32767));

        verticalLayout_18->addWidget(juvCutoffEdit);


        horizontalLayout_10->addLayout(verticalLayout_18);

        spacer_10 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(spacer_10);


        vboxLayout14->addLayout(horizontalLayout_10);


        vboxLayout13->addWidget(groupBox_11);

        groupBox_10 = new QGroupBox(groupBox_18);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        vboxLayout15 = new QVBoxLayout(groupBox_10);
        vboxLayout15->setSpacing(6);
        vboxLayout15->setContentsMargins(11, 11, 11, 11);
        vboxLayout15->setObjectName(QString::fromUtf8("vboxLayout15"));
        vboxLayout15->setContentsMargins(9, 9, 9, 9);
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        miniJackTextLabel = new QLabel(groupBox_10);
        miniJackTextLabel->setObjectName(QString::fromUtf8("miniJackTextLabel"));
        miniJackTextLabel->setAlignment(Qt::AlignVCenter);

        verticalLayout_16->addWidget(miniJackTextLabel);

        combineJacksCheckBox = new QRadioButton(groupBox_10);
        combineJacksCheckBox->setObjectName(QString::fromUtf8("combineJacksCheckBox"));

        verticalLayout_16->addWidget(combineJacksCheckBox);

        removeJacksCheckBox = new QRadioButton(groupBox_10);
        removeJacksCheckBox->setObjectName(QString::fromUtf8("removeJacksCheckBox"));
        removeJacksCheckBox->setChecked(true);

        verticalLayout_16->addWidget(removeJacksCheckBox);


        vboxLayout15->addLayout(verticalLayout_16);


        vboxLayout13->addWidget(groupBox_10);

        groupBox_8 = new QGroupBox(groupBox_18);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        vboxLayout16 = new QVBoxLayout(groupBox_8);
        vboxLayout16->setSpacing(6);
        vboxLayout16->setContentsMargins(11, 11, 11, 11);
        vboxLayout16->setObjectName(QString::fromUtf8("vboxLayout16"));
        vboxLayout16->setContentsMargins(9, 9, 9, 9);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        textLabel2 = new QLabel(groupBox_8);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setAlignment(Qt::AlignVCenter);

        horizontalLayout_11->addWidget(textLabel2);

        lastRouteRadio = new QRadioButton(groupBox_8);
        lastRouteRadio->setObjectName(QString::fromUtf8("lastRouteRadio"));
        lastRouteRadio->setChecked(true);

        horizontalLayout_11->addWidget(lastRouteRadio);

        anyRouteRadio = new QRadioButton(groupBox_8);
        anyRouteRadio->setObjectName(QString::fromUtf8("anyRouteRadio"));

        horizontalLayout_11->addWidget(anyRouteRadio);

        spacer_11 = new QSpacerItem(305, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(spacer_11);


        vboxLayout16->addLayout(horizontalLayout_11);


        vboxLayout13->addWidget(groupBox_8);

        groupBox_9 = new QGroupBox(groupBox_18);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        vboxLayout17 = new QVBoxLayout(groupBox_9);
        vboxLayout17->setSpacing(6);
        vboxLayout17->setContentsMargins(11, 11, 11, 11);
        vboxLayout17->setObjectName(QString::fromUtf8("vboxLayout17"));
        vboxLayout17->setContentsMargins(9, 9, 9, 9);
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        removeResSwitch = new QCheckBox(groupBox_9);
        removeResSwitch->setObjectName(QString::fromUtf8("removeResSwitch"));

        verticalLayout_19->addWidget(removeResSwitch);

        resCutoffCheckBox = new QCheckBox(groupBox_9);
        resCutoffCheckBox->setObjectName(QString::fromUtf8("resCutoffCheckBox"));

        verticalLayout_19->addWidget(resCutoffCheckBox);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        spacer_12 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(spacer_12);

        label = new QLabel(groupBox_9);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_12->addWidget(label);

        resCutoffEdit = new QLineEdit(groupBox_9);
        resCutoffEdit->setObjectName(QString::fromUtf8("resCutoffEdit"));
        resCutoffEdit->setEnabled(false);
        resCutoffEdit->setMinimumSize(QSize(100, 0));
        resCutoffEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_12->addWidget(resCutoffEdit);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(spacerItem);


        verticalLayout_19->addLayout(horizontalLayout_12);


        vboxLayout17->addLayout(verticalLayout_19);


        vboxLayout13->addWidget(groupBox_9);


        vboxLayout12->addWidget(groupBox_18);

        spacer_9 = new QSpacerItem(20, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout12->addItem(spacer_9);

        tabWidget->addTab(adultCriteria, QString());
        trans = new QWidget();
        trans->setObjectName(QString::fromUtf8("trans"));
        vboxLayout18 = new QVBoxLayout(trans);
        vboxLayout18->setSpacing(6);
        vboxLayout18->setContentsMargins(11, 11, 11, 11);
        vboxLayout18->setObjectName(QString::fromUtf8("vboxLayout18"));
        vboxLayout18->setContentsMargins(9, 9, 9, 9);
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(trans);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        verticalLayout_20->addWidget(label_3);

        groupBox_16 = new QGroupBox(trans);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        vboxLayout19 = new QVBoxLayout(groupBox_16);
        vboxLayout19->setSpacing(6);
        vboxLayout19->setContentsMargins(11, 11, 11, 11);
        vboxLayout19->setObjectName(QString::fromUtf8("vboxLayout19"));
        vboxLayout19->setContentsMargins(9, 9, 9, 9);
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(groupBox_16);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_21->addWidget(label_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        transComboBox = new QComboBox(groupBox_16);
        transComboBox->setObjectName(QString::fromUtf8("transComboBox"));
        sizePolicy1.setHeightForWidth(transComboBox->sizePolicy().hasHeightForWidth());
        transComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(transComboBox);

        addTransSiteButton = new QPushButton(groupBox_16);
        addTransSiteButton->setObjectName(QString::fromUtf8("addTransSiteButton"));
        addTransSiteButton->setMaximumSize(QSize(40, 40));

        horizontalLayout_14->addWidget(addTransSiteButton);

        sortTransSitesButton = new QPushButton(groupBox_16);
        sortTransSitesButton->setObjectName(QString::fromUtf8("sortTransSitesButton"));
        sortTransSitesButton->setMaximumSize(QSize(40, 40));

        horizontalLayout_14->addWidget(sortTransSitesButton);

        spacer_14 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(spacer_14);


        verticalLayout_22->addLayout(horizontalLayout_14);

        transSiteList = new QListWidget(groupBox_16);
        transSiteList->setObjectName(QString::fromUtf8("transSiteList"));

        verticalLayout_22->addWidget(transSiteList);


        horizontalLayout_13->addLayout(verticalLayout_22);

        spacer_15 = new QSpacerItem(301, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(spacer_15);


        verticalLayout_21->addLayout(horizontalLayout_13);


        vboxLayout19->addLayout(verticalLayout_21);


        verticalLayout_20->addWidget(groupBox_16);

        groupBox_17 = new QGroupBox(trans);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        vboxLayout20 = new QVBoxLayout(groupBox_17);
        vboxLayout20->setSpacing(6);
        vboxLayout20->setContentsMargins(11, 11, 11, 11);
        vboxLayout20->setObjectName(QString::fromUtf8("vboxLayout20"));
        vboxLayout20->setContentsMargins(9, 9, 9, 9);
        sampTransCheckBox = new QCheckBox(groupBox_17);
        sampTransCheckBox->setObjectName(QString::fromUtf8("sampTransCheckBox"));

        vboxLayout20->addWidget(sampTransCheckBox);


        verticalLayout_20->addWidget(groupBox_17);

        spacer_13 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(spacer_13);


        vboxLayout18->addLayout(verticalLayout_20);

        tabWidget->addTab(trans, QString());
        advanced = new QWidget();
        advanced->setObjectName(QString::fromUtf8("advanced"));
        vboxLayout21 = new QVBoxLayout(advanced);
        vboxLayout21->setSpacing(6);
        vboxLayout21->setContentsMargins(11, 11, 11, 11);
        vboxLayout21->setObjectName(QString::fromUtf8("vboxLayout21"));
        groupBox_14 = new QGroupBox(advanced);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        vboxLayout22 = new QVBoxLayout(groupBox_14);
        vboxLayout22->setSpacing(6);
        vboxLayout22->setContentsMargins(11, 11, 11, 11);
        vboxLayout22->setObjectName(QString::fromUtf8("vboxLayout22"));
        vboxLayout22->setContentsMargins(9, 9, 9, 9);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        methodTextLabel = new QLabel(groupBox_14);
        methodTextLabel->setObjectName(QString::fromUtf8("methodTextLabel"));

        horizontalLayout_15->addWidget(methodTextLabel);

        removalTrumpsRadio = new QRadioButton(groupBox_14);
        removalTrumpsRadio->setObjectName(QString::fromUtf8("removalTrumpsRadio"));
        removalTrumpsRadio->setChecked(true);

        horizontalLayout_15->addWidget(removalTrumpsRadio);

        lastDetectionRadio = new QRadioButton(groupBox_14);
        lastDetectionRadio->setObjectName(QString::fromUtf8("lastDetectionRadio"));
        lastDetectionRadio->setEnabled(true);

        horizontalLayout_15->addWidget(lastDetectionRadio);

        spacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(spacer_17);


        vboxLayout22->addLayout(horizontalLayout_15);


        vboxLayout21->addWidget(groupBox_14);

        groupBox_13 = new QGroupBox(advanced);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        vboxLayout23 = new QVBoxLayout(groupBox_13);
        vboxLayout23->setSpacing(6);
        vboxLayout23->setContentsMargins(11, 11, 11, 11);
        vboxLayout23->setObjectName(QString::fromUtf8("vboxLayout23"));
        vboxLayout23->setContentsMargins(9, 9, 9, 9);
        ignoreReRecapsCheckBox = new QCheckBox(groupBox_13);
        ignoreReRecapsCheckBox->setObjectName(QString::fromUtf8("ignoreReRecapsCheckBox"));

        vboxLayout23->addWidget(ignoreReRecapsCheckBox);


        vboxLayout21->addWidget(groupBox_13);

        groupBox_12 = new QGroupBox(advanced);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        vboxLayout24 = new QVBoxLayout(groupBox_12);
        vboxLayout24->setSpacing(6);
        vboxLayout24->setContentsMargins(11, 11, 11, 11);
        vboxLayout24->setObjectName(QString::fromUtf8("vboxLayout24"));
        singleCoilCheckBox = new QCheckBox(groupBox_12);
        singleCoilCheckBox->setObjectName(QString::fromUtf8("singleCoilCheckBox"));

        vboxLayout24->addWidget(singleCoilCheckBox);

        tagCheckBox = new QCheckBox(groupBox_12);
        tagCheckBox->setObjectName(QString::fromUtf8("tagCheckBox"));

        vboxLayout24->addWidget(tagCheckBox);

        warningsCheckBox = new QCheckBox(groupBox_12);
        warningsCheckBox->setObjectName(QString::fromUtf8("warningsCheckBox"));

        vboxLayout24->addWidget(warningsCheckBox);


        vboxLayout21->addWidget(groupBox_12);

        spacer_16 = new QSpacerItem(614, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout21->addItem(spacer_16);

        tabWidget->addTab(advanced, QString());

        vboxLayout->addWidget(tabWidget);

        QWidget::setTabOrder(fileFilterSwitch, runNameEdit);
        QWidget::setTabOrder(runNameEdit, tagCombo);
        QWidget::setTabOrder(tagCombo, obsCombo);
        QWidget::setTabOrder(obsCombo, mortCombo);
        QWidget::setTabOrder(mortCombo, recapCombo);
        QWidget::setTabOrder(recapCombo, outPrefixEdit);
        QWidget::setTabOrder(outPrefixEdit, addRunButton);
        QWidget::setTabOrder(addRunButton, surphFileCheckBox);
        QWidget::setTabOrder(surphFileCheckBox, errorsFileCheckBox);
        QWidget::setTabOrder(errorsFileCheckBox, detectionDateFileCheckBox);
        QWidget::setTabOrder(detectionDateFileCheckBox, travelTimeFileCheckBox);
        QWidget::setTabOrder(travelTimeFileCheckBox, sequenceFileCheckBox);
        QWidget::setTabOrder(sequenceFileCheckBox, surphVersionCombo);
        QWidget::setTabOrder(surphVersionCombo, siteRelCheckBox);
        QWidget::setTabOrder(siteRelCheckBox, histFieldCombo);
        QWidget::setTabOrder(histFieldCombo, addHistFieldButton);
        QWidget::setTabOrder(addHistFieldButton, sortJuvenileSitesButton);
        QWidget::setTabOrder(sortJuvenileSitesButton, adultSiteCombo);
        QWidget::setTabOrder(adultSiteCombo, addAdultSiteButton);
        QWidget::setTabOrder(addAdultSiteButton, sortAdultSitesButton);
        QWidget::setTabOrder(sortAdultSitesButton, lastFieldCombo);
        QWidget::setTabOrder(lastFieldCombo, speciesCombo);
        QWidget::setTabOrder(speciesCombo, runCombo);
        QWidget::setTabOrder(runCombo, rearTypeCombo);
        QWidget::setTabOrder(rearTypeCombo, assumeJuvenileCheckBox);
        QWidget::setTabOrder(assumeJuvenileCheckBox, removalTrumpsRadio);
        QWidget::setTabOrder(removalTrumpsRadio, lastDetectionRadio);
        QWidget::setTabOrder(lastDetectionRadio, ignoreReRecapsCheckBox);
        QWidget::setTabOrder(ignoreReRecapsCheckBox, singleCoilCheckBox);
        QWidget::setTabOrder(singleCoilCheckBox, tagCheckBox);

        retranslateUi(ConfigWidget);
        QObject::connect(groupRunsCheckBox, SIGNAL(toggled(bool)), outPrefixEdit, SLOT(setEnabled(bool)));
        QObject::connect(assumeJuvenileCheckBox, SIGNAL(toggled(bool)), groupBox_18, SLOT(setDisabled(bool)));
        QObject::connect(resCutoffCheckBox, SIGNAL(toggled(bool)), resCutoffEdit, SLOT(setEnabled(bool)));
        QObject::connect(steelheadYearCB, SIGNAL(toggled(bool)), groupBox_10, SLOT(setDisabled(bool)));
        QObject::connect(steelheadYearCB, SIGNAL(toggled(bool)), groupBox_9, SLOT(setDisabled(bool)));
        QObject::connect(steelheadYearCB, SIGNAL(toggled(bool)), migrationYearRadio, SLOT(setChecked(bool)));
        QObject::connect(steelheadYearCB, SIGNAL(toggled(bool)), juvCutoffRadio, SLOT(setDisabled(bool)));
        QObject::connect(lengthCovCheckBox, SIGNAL(toggled(bool)), zeroCovariateCheckBox, SLOT(setEnabled(bool)));
        QObject::connect(lengthCovCheckBox, SIGNAL(toggled(bool)), nullCovariateCheckBox, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);
        addRunButton->setDefault(true);
        surphVersionCombo->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *ConfigWidget)
    {
        ConfigWidget->setWindowTitle(QApplication::translate("ConfigWidget", "Config Widget", nullptr));
#ifndef QT_NO_WHATSTHIS
        tabWidget->setWhatsThis(QApplication::translate("ConfigWidget", "The program is configured via the tabs in the main window", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        filesInputGroupBox_2->setWhatsThis(QApplication::translate("ConfigWidget", "The folder control where data flow into and out of the program. The Input folder is where PitPro searches for the tag, obs, recapture, and mortality files. For your data fiels to appear in the Run Config menus below the Input folder needs to be set correctly. The Output folder is where output is written to.", nullptr));
#endif // QT_NO_WHATSTHIS
        filesInputGroupBox_2->setTitle(QApplication::translate("ConfigWidget", "Folders", nullptr));
#ifndef QT_NO_WHATSTHIS
        dataFolderLabel->setWhatsThis(QApplication::translate("ConfigWidget", "The Data Folder is where, not surprisingly, data files are searched for. For a file to be available for run definition on the Run Setup tab, or in the Data Converter, it must be in the folder defined here.", nullptr));
#endif // QT_NO_WHATSTHIS
        dataFolderLabel->setText(QApplication::translate("ConfigWidget", "Input:", nullptr));
#ifndef QT_NO_WHATSTHIS
        dataDirEdit->setWhatsThis(QApplication::translate("ConfigWidget", "The Data Folder is where, not surprisingly, data files are searched for. For a file to be available for run definition on the Run Setup tab, or in the Data Converter, it must be in the folder defined here.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        dataDirButton->setWhatsThis(QApplication::translate("ConfigWidget", "Click to browse file system.", nullptr));
#endif // QT_NO_WHATSTHIS
        dataDirButton->setText(QApplication::translate("ConfigWidget", "...", nullptr));
#ifndef QT_NO_WHATSTHIS
        outputFolderLabel->setWhatsThis(QApplication::translate("ConfigWidget", "The folder where output is written to. This can be the same as the Data Folder, or different.", nullptr));
#endif // QT_NO_WHATSTHIS
        outputFolderLabel->setText(QApplication::translate("ConfigWidget", "Output", nullptr));
#ifndef QT_NO_WHATSTHIS
        outDirEdit->setWhatsThis(QApplication::translate("ConfigWidget", "The folder where output is written to. This can be the same as the Data Folder, or different.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        outDirButton->setWhatsThis(QApplication::translate("ConfigWidget", "Click to browse file system.", nullptr));
#endif // QT_NO_WHATSTHIS
        outDirButton->setText(QApplication::translate("ConfigWidget", "...", nullptr));
        runConfigGroupBox->setTitle(QApplication::translate("ConfigWidget", "Run config", nullptr));
#ifndef QT_NO_WHATSTHIS
        popNameTextLabel->setWhatsThis(QApplication::translate("ConfigWidget", "The population name identifies the group and is used as the default prefix for the output. When grouping several runs into a single run, an alternate prefix should be provided below in the box labled \"prefix.\"", nullptr));
#endif // QT_NO_WHATSTHIS
        popNameTextLabel->setText(QApplication::translate("ConfigWidget", "Population Name:", nullptr));
#ifndef QT_NO_WHATSTHIS
        tagFileTextLabel->setWhatsThis(QApplication::translate("ConfigWidget", "The tag file provides the release group information for the run. Only files with a \".tag\" suffix will show up in this menu.", nullptr));
#endif // QT_NO_WHATSTHIS
        tagFileTextLabel->setText(QApplication::translate("ConfigWidget", "Tag file:", nullptr));
#ifndef QT_NO_WHATSTHIS
        obsFileTextLabel->setWhatsThis(QApplication::translate("ConfigWidget", "The interrogation file provides detection data for the run. Only files with a \".obs\" suffix will show up in this menu.", nullptr));
#endif // QT_NO_WHATSTHIS
        obsFileTextLabel->setText(QApplication::translate("ConfigWidget", "Interrogation file:", nullptr));
#ifndef QT_NO_WHATSTHIS
        runNameEdit->setWhatsThis(QApplication::translate("ConfigWidget", "The population name identifies the group and is used as the default prefix for the output. When grouping several runs into a single run, an alternate prefix should be provided below in the box labled \"prefix.\"", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        tagCombo->setWhatsThis(QApplication::translate("ConfigWidget", "The tag file provides the release group information for the run. Only files with a \".tag\" suffix will show up in this menu.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        obsCombo->setWhatsThis(QApplication::translate("ConfigWidget", "The interrogation file provides detection data for the run. Only files with a \".obs\" suffix will show up in this menu.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        mortFileTextLabel->setWhatsThis(QApplication::translate("ConfigWidget", "A mortality is flagged as removed at the last defined site traversed by the fish prior to the mortality. Only files with a \".mrt\" suffix will show up in this menu.", nullptr));
#endif // QT_NO_WHATSTHIS
        mortFileTextLabel->setText(QApplication::translate("ConfigWidget", "Mortality file:", nullptr));
#ifndef QT_NO_WHATSTHIS
        recaptureFileTextLabel->setWhatsThis(QApplication::translate("ConfigWidget", "Recapture data is used for censoring only. A recaptured fish is treated in the same way as a sampled fish, it is flagged as removed. The exception is when a fish is recaptured at the release site, in which case it can optinally be treated as re-released. Only files with a \"rcp\" suffix will show up in this menu.", nullptr));
#endif // QT_NO_WHATSTHIS
        recaptureFileTextLabel->setText(QApplication::translate("ConfigWidget", "Recapture file:", nullptr));
#ifndef QT_NO_WHATSTHIS
        mortCombo->setWhatsThis(QApplication::translate("ConfigWidget", "A mortality is flagged as removed at the last defined site traversed by the fish prior to the mortality. Only files with a \".mrt\" suffix will show up in this menu.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        recapCombo->setWhatsThis(QApplication::translate("ConfigWidget", "Recapture data is used for censoring only. A recaptured fish is treated in the same way as a sampled fish, it is flagged as removed. The exception is when a fish is recaptured at the release site, in which case it can optinally be treated as re-released. Only files with a \"rcp\" suffix will show up in this menu.", nullptr));
#endif // QT_NO_WHATSTHIS
        fileFilterSwitch->setText(QApplication::translate("ConfigWidget", "Filter by file type", nullptr));
#ifndef QT_NO_WHATSTHIS
        addRunButton->setWhatsThis(QApplication::translate("ConfigWidget", "Add the data files defined above to the runs table. The run definition only configures the data input for a given run, all of the other settings used for the run are the ones configured in the other tabs at the time of the run. In other words, the settings configured in the various tabs at the time a run is added will not necessarily be the ones that are configured at the time of run execution, and therefore, will not be the settings that are used for run execution.", nullptr));
#endif // QT_NO_WHATSTHIS
        addRunButton->setText(QApplication::translate("ConfigWidget", "Add Run", nullptr));
#ifndef QT_NO_WHATSTHIS
        deleteRunButton->setWhatsThis(QApplication::translate("ConfigWidget", "Remove the run from the runs table.", nullptr));
#endif // QT_NO_WHATSTHIS
        deleteRunButton->setText(QApplication::translate("ConfigWidget", "Delete Run", nullptr));
        definedRunsGroupBox->setTitle(QApplication::translate("ConfigWidget", "Defined runs", nullptr));
#ifndef QT_NO_WHATSTHIS
        groupRunsCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "When the capture history format is SURPH1 or SURPH2, the defined runs may be processed together so that all runs will be combined into one SURPH file, where each run is listed as a seperate population, associated with the given population name.", nullptr));
#endif // QT_NO_WHATSTHIS
        groupRunsCheckBox->setText(QApplication::translate("ConfigWidget", "Combine runs into one", nullptr));
#ifndef QT_NO_WHATSTHIS
        runPrefixTextLabel->setWhatsThis(QApplication::translate("ConfigWidget", "An alternate output prefix should be provided when combining runs.", nullptr));
#endif // QT_NO_WHATSTHIS
        runPrefixTextLabel->setText(QApplication::translate("ConfigWidget", "prefix", nullptr));
#ifndef QT_NO_WHATSTHIS
        outPrefixEdit->setWhatsThis(QApplication::translate("ConfigWidget", "An alternate output prefix should be provided when combining runs.", nullptr));
#endif // QT_NO_WHATSTHIS
        tabWidget->setTabText(tabWidget->indexOf(runSetup), QApplication::translate("ConfigWidget", "Run Setup", nullptr));
        selectFilesGroup->setTitle(QApplication::translate("ConfigWidget", "Select which files to output", nullptr));
#ifndef QT_NO_WHATSTHIS
        surphFileCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "The primary output for the program.", nullptr));
#endif // QT_NO_WHATSTHIS
        surphFileCheckBox->setText(QApplication::translate("ConfigWidget", "Capture histories", nullptr));
#ifndef QT_NO_WHATSTHIS
        errorsFileCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "The errors table in the Results Manager is generated from this file.", nullptr));
#endif // QT_NO_WHATSTHIS
        errorsFileCheckBox->setText(QApplication::translate("ConfigWidget", "Errors", nullptr));
#ifndef QT_NO_WHATSTHIS
        detectionDateFileCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "The travel time matrix in the Results Manager is generated from this file.", nullptr));
#endif // QT_NO_WHATSTHIS
        detectionDateFileCheckBox->setText(QApplication::translate("ConfigWidget", "Detection date", nullptr));
#ifndef QT_NO_WHATSTHIS
        travelTimeFileCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "This file is not used, and is only provided for post processing by the user.", nullptr));
#endif // QT_NO_WHATSTHIS
        travelTimeFileCheckBox->setText(QApplication::translate("ConfigWidget", "Travel time", nullptr));
#ifndef QT_NO_WHATSTHIS
        sequenceFileCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "This output is provided for examination of internal diagnostics.", nullptr));
#endif // QT_NO_WHATSTHIS
        sequenceFileCheckBox->setText(QApplication::translate("ConfigWidget", "Sequence", nullptr));
        captureHistGroup->setTitle(QApplication::translate("ConfigWidget", "Capture histories file", nullptr));
#ifndef QT_NO_WHATSTHIS
        formatTextlabel->setWhatsThis(QApplication::translate("ConfigWidget", "Currently the output is geared to either SURPH or ROSTER. The current version of SURPH uses the SURPH2 format files.", nullptr));
#endif // QT_NO_WHATSTHIS
        formatTextlabel->setText(QApplication::translate("ConfigWidget", "Format", nullptr));
        surphVersionCombo->setItemText(0, QApplication::translate("ConfigWidget", "SURPH1", nullptr));
        surphVersionCombo->setItemText(1, QApplication::translate("ConfigWidget", "SURPH2", nullptr));
        surphVersionCombo->setItemText(2, QApplication::translate("ConfigWidget", "ROSTER", nullptr));

#ifndef QT_NO_WHATSTHIS
        surphVersionCombo->setWhatsThis(QApplication::translate("ConfigWidget", "Currently the output is geared to either SURPH or ROSTER. The current version of SURPH uses the SURPH2 format files.", nullptr));
#endif // QT_NO_WHATSTHIS
        covariatesGroup->setTitle(QApplication::translate("ConfigWidget", "Covariates", nullptr));
#ifndef QT_NO_WHATSTHIS
        lengthCovCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "Length can be included as an individual covariate in the SURPH output file. Length data is provided by the tagging data.", nullptr));
#endif // QT_NO_WHATSTHIS
        lengthCovCheckBox->setText(QApplication::translate("ConfigWidget", "Include covariate(s)  in SURPH file output", nullptr));
#ifndef QT_NO_WHATSTHIS
        zeroCovariateCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "Generally when length covariates are included in the output, it is appropriate to also remove fish that have zero length.", nullptr));
#endif // QT_NO_WHATSTHIS
        zeroCovariateCheckBox->setText(QApplication::translate("ConfigWidget", "Remove zero valued covariates", nullptr));
#ifndef QT_NO_WHATSTHIS
        nullCovariateCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "Generally when length covariates are included in the output, it is appropriate to also remove fish that have zero length.", nullptr));
#endif // QT_NO_WHATSTHIS
        nullCovariateCheckBox->setText(QApplication::translate("ConfigWidget", "Remove null valued covariates", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(files), QApplication::translate("ConfigWidget", "Files", nullptr));
        groupBox_4->setTitle(QApplication::translate("ConfigWidget", "Juvenile sites", nullptr));
        addHistFieldButton->setText(QApplication::translate("ConfigWidget", "&Add", nullptr));
#ifndef QT_NO_SHORTCUT
        addHistFieldButton->setShortcut(QApplication::translate("ConfigWidget", "Alt+A", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        sortJuvenileSitesButton->setWhatsThis(QApplication::translate("ConfigWidget", "Sort the sites in upstream to downstream order.", nullptr));
#endif // QT_NO_WHATSTHIS
        sortJuvenileSitesButton->setText(QApplication::translate("ConfigWidget", "Sort", nullptr));
        groupBox_5->setTitle(QApplication::translate("ConfigWidget", "Adult sites", nullptr));
        addAdultSiteButton->setText(QApplication::translate("ConfigWidget", "Add", nullptr));
#ifndef QT_NO_WHATSTHIS
        sortAdultSitesButton->setWhatsThis(QApplication::translate("ConfigWidget", "Sort the streams in downstream to upstream order.", nullptr));
#endif // QT_NO_WHATSTHIS
        sortAdultSitesButton->setText(QApplication::translate("ConfigWidget", "Sort", nullptr));
        groupBox_6->setTitle(QApplication::translate("ConfigWidget", "Release site", nullptr));
#ifndef QT_NO_WHATSTHIS
        siteRelCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "A site release is the situation where fish are released at an interrogation site, and some fish may be removed, by transportation or sampling, and only fish known to be returned-to-river should be included in the release group.", nullptr));
#endif // QT_NO_WHATSTHIS
        siteRelCheckBox->setText(QApplication::translate("ConfigWidget", "Site release", nullptr));
#ifndef QT_NO_WHATSTHIS
        lastFieldGroupBox->setWhatsThis(QApplication::translate("ConfigWidget", "All detections downstream of this site are grouped into the final capture history site.", nullptr));
#endif // QT_NO_WHATSTHIS
        lastFieldGroupBox->setTitle(QApplication::translate("ConfigWidget", "Last capture history survival site", nullptr));
#ifndef QT_NO_WHATSTHIS
        lastFieldTextLabel->setWhatsThis(QApplication::translate("ConfigWidget", "The last site has has two meanings, depending on it's position in the list of selected sites. When this site is not the last selected site, the associated field in the resulting capture history will be the last site for which survivals are calculated, with all subsequent sites pooled into the final capture history field. If the last site is the last selected site, the associated field in the capture history will be the actual last field, with no survival calculated for the reach preceeding the site.", nullptr));
#endif // QT_NO_WHATSTHIS
        lastFieldTextLabel->setText(QApplication::translate("ConfigWidget", "Last survival site:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(sites), QApplication::translate("ConfigWidget", "Sites", nullptr));
        groupBox_7->setTitle(QApplication::translate("ConfigWidget", "Screen by", nullptr));
        speciesTextLabel->setText(QApplication::translate("ConfigWidget", "Species:", nullptr));
        runTextLabel->setText(QApplication::translate("ConfigWidget", "Run:", nullptr));
        rtTextLabel->setText(QApplication::translate("ConfigWidget", "Rearing Type:", nullptr));
        speciesCombo->setItemText(0, QApplication::translate("ConfigWidget", "All", nullptr));
        speciesCombo->setItemText(1, QApplication::translate("ConfigWidget", "1", nullptr));
        speciesCombo->setItemText(2, QApplication::translate("ConfigWidget", "2", nullptr));
        speciesCombo->setItemText(3, QApplication::translate("ConfigWidget", "3", nullptr));
        speciesCombo->setItemText(4, QApplication::translate("ConfigWidget", "4", nullptr));
        speciesCombo->setItemText(5, QApplication::translate("ConfigWidget", "5", nullptr));
        speciesCombo->setItemText(6, QApplication::translate("ConfigWidget", "9", nullptr));

        runCombo->setItemText(0, QApplication::translate("ConfigWidget", "All", nullptr));
        runCombo->setItemText(1, QApplication::translate("ConfigWidget", "1", nullptr));
        runCombo->setItemText(2, QApplication::translate("ConfigWidget", "2", nullptr));
        runCombo->setItemText(3, QApplication::translate("ConfigWidget", "3", nullptr));

        rearTypeCombo->setItemText(0, QApplication::translate("ConfigWidget", "All", nullptr));
        rearTypeCombo->setItemText(1, QApplication::translate("ConfigWidget", "U", nullptr));
        rearTypeCombo->setItemText(2, QApplication::translate("ConfigWidget", "W", nullptr));
        rearTypeCombo->setItemText(3, QApplication::translate("ConfigWidget", "H", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tagScreening), QApplication::translate("ConfigWidget", "Tag Screening", nullptr));
#ifndef QT_NO_WHATSTHIS
        assumeJuvenileCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "When all interrogation, recapture, and mortality data is known to be from the juvenile out-migration, this box may be checked. The program will assume that any oibservation is a juvenile observation. If any adult observations exist in the data set, the output will be invalid.", nullptr));
#endif // QT_NO_WHATSTHIS
        assumeJuvenileCheckBox->setText(QApplication::translate("ConfigWidget", "Assume all juvenile observations", nullptr));
        groupBox_18->setTitle(QApplication::translate("ConfigWidget", "Adult Settings", nullptr));
        steelheadYearCB->setText(QApplication::translate("ConfigWidget", "Use steelhead return year (July 1 - June 30)", nullptr));
        groupBox_11->setTitle(QApplication::translate("ConfigWidget", "Stage determination", nullptr));
        migrationYearRadio->setText(QApplication::translate("ConfigWidget", "Migration year (yyyy):", nullptr));
        juvCutoffRadio->setText(QApplication::translate("ConfigWidget", "Juvenile cutoff date (yyyymmdd):", nullptr));
        migrYearEdit->setInputMask(QString());
        juvCutoffEdit->setInputMask(QString());
        juvCutoffEdit->setText(QString());
        groupBox_10->setTitle(QApplication::translate("ConfigWidget", "Minijacks", nullptr));
        miniJackTextLabel->setText(QApplication::translate("ConfigWidget", "Minijack (adult returning during migration year) can be handled in either of 2 ways:", nullptr));
        combineJacksCheckBox->setText(QApplication::translate("ConfigWidget", "Combine minijacks and first ocean age class into one age class (age class A)", nullptr));
        removeJacksCheckBox->setText(QApplication::translate("ConfigWidget", "Remove minijacks", nullptr));
        groupBox_8->setTitle(QApplication::translate("ConfigWidget", "Adult fallback transformations", nullptr));
        textLabel2->setText(QApplication::translate("ConfigWidget", "Method:", nullptr));
        lastRouteRadio->setText(QApplication::translate("ConfigWidget", "Last route", nullptr));
        anyRouteRadio->setText(QApplication::translate("ConfigWidget", "Any route", nullptr));
        groupBox_9->setTitle(QApplication::translate("ConfigWidget", "Residualization", nullptr));
        removeResSwitch->setText(QApplication::translate("ConfigWidget", "Remove fish observed on known juvenile detectors subsequent to the migration year.", nullptr));
#ifndef QT_NO_WHATSTHIS
        resCutoffCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "This is an effort to remove residualizing fish assuming that spring observations in the year following the migration year are probably residualizing fish. The cutoff date is user specified so that the user can decide when this spring cutoff is.", nullptr));
#endif // QT_NO_WHATSTHIS
        resCutoffCheckBox->setText(QApplication::translate("ConfigWidget", "Remove fish observed during the spring of the year following juvenile out migration:", nullptr));
        label->setText(QApplication::translate("ConfigWidget", "Cutoff date (yyyymmdd):", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(adultCriteria), QApplication::translate("ConfigWidget", "Adult Settings", nullptr));
        label_3->setText(QApplication::translate("ConfigWidget", "The following settings only affect ROSTER formatted output.", nullptr));
        groupBox_16->setTitle(QApplication::translate("ConfigWidget", "Tranportation sites", nullptr));
        label_2->setText(QApplication::translate("ConfigWidget", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:MS Shell Dlg 2; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:MS; font-size:8pt;\">If a transportation site does not appear in the following list, all raceway detections at the site will be flagged as <span style=\" font-weight:600;\">unknown</span> instead of <span style=\" font-weight:600;\">transported</span>. Usually this will result in censoring of those fish unless a subsequent return to river detection occurs.</p></body></html>", nullptr));
        addTransSiteButton->setText(QApplication::translate("ConfigWidget", "&Add", nullptr));
#ifndef QT_NO_SHORTCUT
        addTransSiteButton->setShortcut(QApplication::translate("ConfigWidget", "Alt+A", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        sortTransSitesButton->setWhatsThis(QApplication::translate("ConfigWidget", "Sort the sites in upstream to downstream order.", nullptr));
#endif // QT_NO_WHATSTHIS
        sortTransSitesButton->setText(QApplication::translate("ConfigWidget", "Sort", nullptr));
        groupBox_17->setTitle(QApplication::translate("ConfigWidget", "Settings", nullptr));
        sampTransCheckBox->setText(QApplication::translate("ConfigWidget", "Treat sampled fish at the above sites as transported fish", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(trans), QApplication::translate("ConfigWidget", "Transportation", nullptr));
        groupBox_14->setTitle(QApplication::translate("ConfigWidget", "Outcome determination", nullptr));
        methodTextLabel->setText(QApplication::translate("ConfigWidget", "Method:", nullptr));
#ifndef QT_NO_WHATSTHIS
        removalTrumpsRadio->setWhatsThis(QApplication::translate("ConfigWidget", "The entire detection history at a site is taken into consideration. This type of outcome determination depends on Interrogation Detail data from PTAGIS. The trump order is sampled/held, returned, and transported.", nullptr));
#endif // QT_NO_WHATSTHIS
        removalTrumpsRadio->setText(QApplication::translate("ConfigWidget", "Removal trumps all", nullptr));
#ifndef QT_NO_WHATSTHIS
        lastDetectionRadio->setWhatsThis(QApplication::translate("ConfigWidget", "Use only the last detection (sorted by observation time) of a fish at a given site as the outcome indicator.", nullptr));
#endif // QT_NO_WHATSTHIS
        lastDetectionRadio->setText(QApplication::translate("ConfigWidget", "Last detection", nullptr));
        groupBox_13->setTitle(QApplication::translate("ConfigWidget", "Recapture data", nullptr));
#ifndef QT_NO_WHATSTHIS
        ignoreReRecapsCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "When a fish is recaptured it is censored at the defined site prior to the recapture in the observation sequence. In practice, fish are often recapture at the release site, and downstream observations should be included as valid. Check this box to include those recapture.", nullptr));
#endif // QT_NO_WHATSTHIS
        ignoreReRecapsCheckBox->setText(QApplication::translate("ConfigWidget", "Ignore recaptures at the release site", nullptr));
        groupBox_12->setTitle(QApplication::translate("ConfigWidget", "Miscellaneous", nullptr));
#ifndef QT_NO_WHATSTHIS
        singleCoilCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "Allow a single hit at a site for a fish to be counted.", nullptr));
#endif // QT_NO_WHATSTHIS
        singleCoilCheckBox->setText(QApplication::translate("ConfigWidget", "Allow single coil detections", nullptr));
#ifndef QT_NO_WHATSTHIS
        tagCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "Produce a capture history for a fish found in the interrogation data, even if there is no record for the fish in the tag data.", nullptr));
#endif // QT_NO_WHATSTHIS
        tagCheckBox->setText(QApplication::translate("ConfigWidget", "Allow observed fish not found in tag file (not recommended)", nullptr));
#ifndef QT_NO_WHATSTHIS
        warningsCheckBox->setWhatsThis(QApplication::translate("ConfigWidget", "Display warning messages, either when the program cannot find detector data for an interrogation record, or when a transported fish is detected downstream as a juvenile (except at the Estuary Towed Array or any of the \"Bird\" islands)", nullptr));
#endif // QT_NO_WHATSTHIS
        warningsCheckBox->setText(QApplication::translate("ConfigWidget", "Display warning messages", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(advanced), QApplication::translate("ConfigWidget", "Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigWidget: public Ui_ConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWIDGET_H
