/********************************************************************************
** Form generated from reading UI file 'ResultsManager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTSMANAGER_H
#define UI_RESULTSMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultsManager
{
public:
    QAction *actionExit;
    QAction *actionCovariance_matrix;
    QAction *actionPrint;
    QAction *actionSave;
    QAction *actionCJS_Data;
    QAction *actionTravel_Time_data;
    QWidget *centralWidget;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *prefixLabel;
    QComboBox *groupCombo;
    QSpacerItem *spacerItem;
    QTabWidget *tabWidget;
    QWidget *summary;
    QVBoxLayout *vboxLayout2;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout1;
    QPushButton *backButton;
    QSpacerItem *spacerItem1;
    QTextBrowser *summaryTextBrowser;
    QWidget *data;
    QVBoxLayout *vboxLayout4;
    QVBoxLayout *vboxLayout5;
    QHBoxLayout *hboxLayout2;
    QPushButton *dataBackButton;
    QSpacerItem *spacerItem2;
    QTextBrowser *dataTextBrowser;
    QWidget *errors;
    QVBoxLayout *vboxLayout6;
    QVBoxLayout *vboxLayout7;
    QHBoxLayout *hboxLayout3;
    QLabel *label_3;
    QComboBox *errorRunCombo;
    QSpacerItem *spacerItem3;
    QTextEdit *errorsTextEdit;
    QWidget *travelTime;
    QVBoxLayout *vboxLayout8;
    QVBoxLayout *vboxLayout9;
    QHBoxLayout *hboxLayout4;
    QLabel *label_2;
    QComboBox *ttRunCombo;
    QSpacerItem *spacerItem4;
    QTextEdit *ttTextEdit;
    QWidget *cjs;
    QVBoxLayout *vboxLayout10;
    QHBoxLayout *hboxLayout5;
    QCheckBox *oneTableCjsCB;
    QCheckBox *showLambdaCB;
    QSpacerItem *spacerItem5;
    QTextEdit *cjsTextEdit;
    QWidget *tracker;
    QVBoxLayout *vboxLayout11;
    QVBoxLayout *vboxLayout12;
    QHBoxLayout *hboxLayout6;
    QLabel *label;
    QComboBox *pitComboBox;
    QPushButton *goButton;
    QSpacerItem *spacerItem6;
    QCheckBox *trackerDetailCheckBox;
    QTextEdit *trackerTextEdit;
    QMenuBar *menuBar;
    QMenu *menuData;
    QMenu *menuFile;

    void setupUi(QMainWindow *ResultsManager)
    {
        if (ResultsManager->objectName().isEmpty())
            ResultsManager->setObjectName(QString::fromUtf8("ResultsManager"));
        ResultsManager->resize(663, 558);
        actionExit = new QAction(ResultsManager);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCovariance_matrix = new QAction(ResultsManager);
        actionCovariance_matrix->setObjectName(QString::fromUtf8("actionCovariance_matrix"));
        actionPrint = new QAction(ResultsManager);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionSave = new QAction(ResultsManager);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionCJS_Data = new QAction(ResultsManager);
        actionCJS_Data->setObjectName(QString::fromUtf8("actionCJS_Data"));
        actionTravel_Time_data = new QAction(ResultsManager);
        actionTravel_Time_data->setObjectName(QString::fromUtf8("actionTravel_Time_data"));
        centralWidget = new QWidget(ResultsManager);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        vboxLayout = new QVBoxLayout(centralWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        prefixLabel = new QLabel(centralWidget);
        prefixLabel->setObjectName(QString::fromUtf8("prefixLabel"));

        hboxLayout->addWidget(prefixLabel);

        groupCombo = new QComboBox(centralWidget);
        groupCombo->setObjectName(QString::fromUtf8("groupCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupCombo->sizePolicy().hasHeightForWidth());
        groupCombo->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(groupCombo);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        summary = new QWidget();
        summary->setObjectName(QString::fromUtf8("summary"));
        vboxLayout2 = new QVBoxLayout(summary);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(summary);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        hboxLayout1->addWidget(backButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        vboxLayout3->addLayout(hboxLayout1);


        vboxLayout2->addLayout(vboxLayout3);

        summaryTextBrowser = new QTextBrowser(summary);
        summaryTextBrowser->setObjectName(QString::fromUtf8("summaryTextBrowser"));

        vboxLayout2->addWidget(summaryTextBrowser);

        tabWidget->addTab(summary, QString());
        data = new QWidget();
        data->setObjectName(QString::fromUtf8("data"));
        vboxLayout4 = new QVBoxLayout(data);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setSpacing(6);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        dataBackButton = new QPushButton(data);
        dataBackButton->setObjectName(QString::fromUtf8("dataBackButton"));

        hboxLayout2->addWidget(dataBackButton);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);


        vboxLayout5->addLayout(hboxLayout2);


        vboxLayout4->addLayout(vboxLayout5);

        dataTextBrowser = new QTextBrowser(data);
        dataTextBrowser->setObjectName(QString::fromUtf8("dataTextBrowser"));

        vboxLayout4->addWidget(dataTextBrowser);

        tabWidget->addTab(data, QString());
        errors = new QWidget();
        errors->setObjectName(QString::fromUtf8("errors"));
        vboxLayout6 = new QVBoxLayout(errors);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        vboxLayout7 = new QVBoxLayout();
        vboxLayout7->setSpacing(6);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        vboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(errors);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout3->addWidget(label_3);

        errorRunCombo = new QComboBox(errors);
        errorRunCombo->setObjectName(QString::fromUtf8("errorRunCombo"));
        sizePolicy.setHeightForWidth(errorRunCombo->sizePolicy().hasHeightForWidth());
        errorRunCombo->setSizePolicy(sizePolicy);

        hboxLayout3->addWidget(errorRunCombo);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);


        vboxLayout7->addLayout(hboxLayout3);


        vboxLayout6->addLayout(vboxLayout7);

        errorsTextEdit = new QTextEdit(errors);
        errorsTextEdit->setObjectName(QString::fromUtf8("errorsTextEdit"));
        errorsTextEdit->setReadOnly(true);

        vboxLayout6->addWidget(errorsTextEdit);

        tabWidget->addTab(errors, QString());
        travelTime = new QWidget();
        travelTime->setObjectName(QString::fromUtf8("travelTime"));
        vboxLayout8 = new QVBoxLayout(travelTime);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        vboxLayout9 = new QVBoxLayout();
        vboxLayout9->setSpacing(6);
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        vboxLayout9->setContentsMargins(0, 0, 0, 0);
        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(travelTime);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout4->addWidget(label_2);

        ttRunCombo = new QComboBox(travelTime);
        ttRunCombo->setObjectName(QString::fromUtf8("ttRunCombo"));
        sizePolicy.setHeightForWidth(ttRunCombo->sizePolicy().hasHeightForWidth());
        ttRunCombo->setSizePolicy(sizePolicy);

        hboxLayout4->addWidget(ttRunCombo);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem4);


        vboxLayout9->addLayout(hboxLayout4);


        vboxLayout8->addLayout(vboxLayout9);

        ttTextEdit = new QTextEdit(travelTime);
        ttTextEdit->setObjectName(QString::fromUtf8("ttTextEdit"));
        ttTextEdit->setReadOnly(true);

        vboxLayout8->addWidget(ttTextEdit);

        tabWidget->addTab(travelTime, QString());
        cjs = new QWidget();
        cjs->setObjectName(QString::fromUtf8("cjs"));
        vboxLayout10 = new QVBoxLayout(cjs);
        vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        oneTableCjsCB = new QCheckBox(cjs);
        oneTableCjsCB->setObjectName(QString::fromUtf8("oneTableCjsCB"));

        hboxLayout5->addWidget(oneTableCjsCB);

        showLambdaCB = new QCheckBox(cjs);
        showLambdaCB->setObjectName(QString::fromUtf8("showLambdaCB"));
        showLambdaCB->setChecked(false);

        hboxLayout5->addWidget(showLambdaCB);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem5);


        vboxLayout10->addLayout(hboxLayout5);

        cjsTextEdit = new QTextEdit(cjs);
        cjsTextEdit->setObjectName(QString::fromUtf8("cjsTextEdit"));
        cjsTextEdit->setReadOnly(true);

        vboxLayout10->addWidget(cjsTextEdit);

        tabWidget->addTab(cjs, QString());
        tracker = new QWidget();
        tracker->setObjectName(QString::fromUtf8("tracker"));
        vboxLayout11 = new QVBoxLayout(tracker);
        vboxLayout11->setObjectName(QString::fromUtf8("vboxLayout11"));
        vboxLayout12 = new QVBoxLayout();
        vboxLayout12->setSpacing(6);
        vboxLayout12->setObjectName(QString::fromUtf8("vboxLayout12"));
        vboxLayout12->setContentsMargins(0, 0, 0, 0);
        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(tracker);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout6->addWidget(label);

        pitComboBox = new QComboBox(tracker);
        pitComboBox->setObjectName(QString::fromUtf8("pitComboBox"));
        sizePolicy.setHeightForWidth(pitComboBox->sizePolicy().hasHeightForWidth());
        pitComboBox->setSizePolicy(sizePolicy);
        pitComboBox->setEditable(true);
        pitComboBox->setMaxCount(30);

        hboxLayout6->addWidget(pitComboBox);

        goButton = new QPushButton(tracker);
        goButton->setObjectName(QString::fromUtf8("goButton"));

        hboxLayout6->addWidget(goButton);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem6);

        trackerDetailCheckBox = new QCheckBox(tracker);
        trackerDetailCheckBox->setObjectName(QString::fromUtf8("trackerDetailCheckBox"));

        hboxLayout6->addWidget(trackerDetailCheckBox);


        vboxLayout12->addLayout(hboxLayout6);


        vboxLayout11->addLayout(vboxLayout12);

        trackerTextEdit = new QTextEdit(tracker);
        trackerTextEdit->setObjectName(QString::fromUtf8("trackerTextEdit"));
        trackerTextEdit->setReadOnly(true);

        vboxLayout11->addWidget(trackerTextEdit);

        tabWidget->addTab(tracker, QString());

        vboxLayout1->addWidget(tabWidget);


        vboxLayout->addLayout(vboxLayout1);

        ResultsManager->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ResultsManager);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 663, 26));
        menuData = new QMenu(menuBar);
        menuData->setObjectName(QString::fromUtf8("menuData"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        ResultsManager->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuData->menuAction());
        menuData->addAction(actionCJS_Data);
        menuData->addAction(actionTravel_Time_data);
        menuData->addAction(actionCovariance_matrix);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(ResultsManager);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ResultsManager);
    } // setupUi

    void retranslateUi(QMainWindow *ResultsManager)
    {
        ResultsManager->setWindowTitle(QApplication::translate("ResultsManager", "Results Manager", nullptr));
#ifndef QT_NO_WHATSTHIS
        ResultsManager->setWhatsThis(QApplication::translate("ResultsManager", "The Results Manager presents the results of PitPro with a graphical interface, facilitating browsing of the results.", nullptr));
#endif // QT_NO_WHATSTHIS
        actionExit->setText(QApplication::translate("ResultsManager", "Exit", nullptr));
        actionCovariance_matrix->setText(QApplication::translate("ResultsManager", "Export covariance matrix", nullptr));
        actionPrint->setText(QApplication::translate("ResultsManager", "Print", nullptr));
        actionSave->setText(QApplication::translate("ResultsManager", "Save", nullptr));
        actionCJS_Data->setText(QApplication::translate("ResultsManager", "Export Cormack-Jolly-Seber data (CSV)", nullptr));
        actionTravel_Time_data->setText(QApplication::translate("ResultsManager", "Export travel time data (CSV)", nullptr));
        prefixLabel->setText(QApplication::translate("ResultsManager", "Prefix:", nullptr));
        backButton->setText(QApplication::translate("ResultsManager", "<< Back", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(summary), QApplication::translate("ResultsManager", "Summary", nullptr));
        dataBackButton->setText(QApplication::translate("ResultsManager", "<< Back", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(data), QApplication::translate("ResultsManager", "Data", nullptr));
        label_3->setText(QApplication::translate("ResultsManager", "Run:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(errors), QApplication::translate("ResultsManager", "Errors", nullptr));
        label_2->setText(QApplication::translate("ResultsManager", "Run:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(travelTime), QApplication::translate("ResultsManager", "Travel Time", nullptr));
        oneTableCjsCB->setText(QApplication::translate("ResultsManager", "Display in one table", nullptr));
        showLambdaCB->setText(QApplication::translate("ResultsManager", "Show final product (lambda)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(cjs), QApplication::translate("ResultsManager", "Cormack-Jolly-Seber", nullptr));
        label->setText(QApplication::translate("ResultsManager", "PIT Tag:", nullptr));
        goButton->setText(QApplication::translate("ResultsManager", "Go", nullptr));
        trackerDetailCheckBox->setText(QApplication::translate("ResultsManager", "Show details", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tracker), QApplication::translate("ResultsManager", "PIT Tag Tracker", nullptr));
        menuData->setTitle(QApplication::translate("ResultsManager", "Data", nullptr));
        menuFile->setTitle(QApplication::translate("ResultsManager", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultsManager: public Ui_ResultsManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTSMANAGER_H
