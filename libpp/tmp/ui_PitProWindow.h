/********************************************************************************
** Form generated from reading UI file 'PitProWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PITPROWINDOW_H
#define UI_PITPROWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PitProWindow
{
public:
    QAction *runAction;
    QAction *cancelRunAction;
    QAction *loadConfigAction;
    QAction *saveConfigAction;
    QAction *fileSave_run_configuration_asAction;
    QAction *exitAction;
    QAction *actionData_converter;
    QAction *showSitesConfigAction;
    QAction *showOutputWindowAction;
    QAction *showSummariesAction;
    QAction *showManualAction;
    QAction *showUpdateManagerAction;
    QAction *showInfoAction;
    QAction *restoreDefaultsAction;
    QAction *actionUpdate_available;
    QAction *editSitesConfigAction;
    QAction *checkForUpdatesAction;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QMenu *menuOutput;
    QMenu *menuEdit;
    QMenu *menuData;
    QMenu *menuFile;
    QToolBar *toolbar;

    void setupUi(QMainWindow *PitProWindow)
    {
        if (PitProWindow->objectName().isEmpty())
            PitProWindow->setObjectName(QString::fromUtf8("PitProWindow"));
        PitProWindow->resize(640, 480);
        runAction = new QAction(PitProWindow);
        runAction->setObjectName(QString::fromUtf8("runAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/misc.png"), QSize(), QIcon::Normal, QIcon::Off);
        runAction->setIcon(icon);
        cancelRunAction = new QAction(PitProWindow);
        cancelRunAction->setObjectName(QString::fromUtf8("cancelRunAction"));
        loadConfigAction = new QAction(PitProWindow);
        loadConfigAction->setObjectName(QString::fromUtf8("loadConfigAction"));
        saveConfigAction = new QAction(PitProWindow);
        saveConfigAction->setObjectName(QString::fromUtf8("saveConfigAction"));
        fileSave_run_configuration_asAction = new QAction(PitProWindow);
        fileSave_run_configuration_asAction->setObjectName(QString::fromUtf8("fileSave_run_configuration_asAction"));
        exitAction = new QAction(PitProWindow);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        actionData_converter = new QAction(PitProWindow);
        actionData_converter->setObjectName(QString::fromUtf8("actionData_converter"));
        showSitesConfigAction = new QAction(PitProWindow);
        showSitesConfigAction->setObjectName(QString::fromUtf8("showSitesConfigAction"));
        showOutputWindowAction = new QAction(PitProWindow);
        showOutputWindowAction->setObjectName(QString::fromUtf8("showOutputWindowAction"));
        showSummariesAction = new QAction(PitProWindow);
        showSummariesAction->setObjectName(QString::fromUtf8("showSummariesAction"));
        showManualAction = new QAction(PitProWindow);
        showManualAction->setObjectName(QString::fromUtf8("showManualAction"));
        showUpdateManagerAction = new QAction(PitProWindow);
        showUpdateManagerAction->setObjectName(QString::fromUtf8("showUpdateManagerAction"));
        showInfoAction = new QAction(PitProWindow);
        showInfoAction->setObjectName(QString::fromUtf8("showInfoAction"));
        restoreDefaultsAction = new QAction(PitProWindow);
        restoreDefaultsAction->setObjectName(QString::fromUtf8("restoreDefaultsAction"));
        actionUpdate_available = new QAction(PitProWindow);
        actionUpdate_available->setObjectName(QString::fromUtf8("actionUpdate_available"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/messagebox_warning.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpdate_available->setIcon(icon1);
        editSitesConfigAction = new QAction(PitProWindow);
        editSitesConfigAction->setObjectName(QString::fromUtf8("editSitesConfigAction"));
        checkForUpdatesAction = new QAction(PitProWindow);
        checkForUpdatesAction->setObjectName(QString::fromUtf8("checkForUpdatesAction"));
        centralWidget = new QWidget(PitProWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        PitProWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PitProWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 21));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuOutput = new QMenu(menuBar);
        menuOutput->setObjectName(QString::fromUtf8("menuOutput"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuData = new QMenu(menuBar);
        menuData->setObjectName(QString::fromUtf8("menuData"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        PitProWindow->setMenuBar(menuBar);
        toolbar = new QToolBar(PitProWindow);
        toolbar->setObjectName(QString::fromUtf8("toolbar"));
        toolbar->setOrientation(Qt::Horizontal);
        PitProWindow->addToolBar(Qt::TopToolBarArea, toolbar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuData->menuAction());
        menuBar->addAction(menuOutput->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(showManualAction);
        menuHelp->addAction(checkForUpdatesAction);
        menuHelp->addSeparator();
        menuHelp->addAction(showInfoAction);
        menuOutput->addAction(showOutputWindowAction);
        menuOutput->addSeparator();
        menuOutput->addAction(showSummariesAction);
        menuEdit->addAction(restoreDefaultsAction);
        menuData->addAction(editSitesConfigAction);
        menuData->addAction(showSitesConfigAction);
        menuData->addSeparator();
        menuData->addAction(showUpdateManagerAction);
        menuFile->addAction(runAction);
        menuFile->addAction(cancelRunAction);
        menuFile->addSeparator();
        menuFile->addAction(loadConfigAction);
        menuFile->addAction(saveConfigAction);
        menuFile->addAction(fileSave_run_configuration_asAction);
        menuFile->addSeparator();
        menuFile->addAction(exitAction);
        toolbar->addAction(runAction);
        toolbar->addAction(actionUpdate_available);

        retranslateUi(PitProWindow);

        QMetaObject::connectSlotsByName(PitProWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PitProWindow)
    {
        PitProWindow->setWindowTitle(QApplication::translate("PitProWindow", "MainWindow", nullptr));
        runAction->setText(QApplication::translate("PitProWindow", "Run PitPro", nullptr));
#ifndef QT_NO_WHATSTHIS
        runAction->setWhatsThis(QApplication::translate("PitProWindow", "Run the program using the current configuration.", nullptr));
#endif // QT_NO_WHATSTHIS
        cancelRunAction->setText(QApplication::translate("PitProWindow", "Cancel run", nullptr));
#ifndef QT_NO_WHATSTHIS
        cancelRunAction->setWhatsThis(QApplication::translate("PitProWindow", "Cancel the current run.", nullptr));
#endif // QT_NO_WHATSTHIS
        loadConfigAction->setText(QApplication::translate("PitProWindow", "Load run configuration file...", nullptr));
#ifndef QT_NO_WHATSTHIS
        loadConfigAction->setWhatsThis(QApplication::translate("PitProWindow", "Load a configuration from file.", nullptr));
#endif // QT_NO_WHATSTHIS
        saveConfigAction->setText(QApplication::translate("PitProWindow", "Save run configuration", nullptr));
#ifndef QT_NO_WHATSTHIS
        saveConfigAction->setWhatsThis(QApplication::translate("PitProWindow", "Save the current run configuration with the current configuration name.", nullptr));
#endif // QT_NO_WHATSTHIS
        fileSave_run_configuration_asAction->setText(QApplication::translate("PitProWindow", "Save run configuration as...", nullptr));
#ifndef QT_NO_WHATSTHIS
        fileSave_run_configuration_asAction->setWhatsThis(QApplication::translate("PitProWindow", "Save the run configuration with a new name.", nullptr));
#endif // QT_NO_WHATSTHIS
        exitAction->setText(QApplication::translate("PitProWindow", "Exit", nullptr));
        actionData_converter->setText(QApplication::translate("PitProWindow", "Data converter...", nullptr));
#ifndef QT_NO_WHATSTHIS
        actionData_converter->setWhatsThis(QApplication::translate("PitProWindow", "Show the data converter.", nullptr));
#endif // QT_NO_WHATSTHIS
        showSitesConfigAction->setText(QApplication::translate("PitProWindow", "Show current sites configuration...", nullptr));
#ifndef QT_NO_WHATSTHIS
        showSitesConfigAction->setWhatsThis(QApplication::translate("PitProWindow", "Show the sites configuration.", nullptr));
#endif // QT_NO_WHATSTHIS
        showOutputWindowAction->setText(QApplication::translate("PitProWindow", "Show status window...", nullptr));
#ifndef QT_NO_WHATSTHIS
        showOutputWindowAction->setWhatsThis(QApplication::translate("PitProWindow", "Show the program message console.", nullptr));
#endif // QT_NO_WHATSTHIS
        showSummariesAction->setText(QApplication::translate("PitProWindow", "Results manager...", nullptr));
#ifndef QT_NO_WHATSTHIS
        showSummariesAction->setWhatsThis(QApplication::translate("PitProWindow", "Show the data manager.", nullptr));
#endif // QT_NO_WHATSTHIS
        showManualAction->setText(QApplication::translate("PitProWindow", "Manual...", nullptr));
        showUpdateManagerAction->setText(QApplication::translate("PitProWindow", "Check for configuration updates...", nullptr));
        showInfoAction->setText(QApplication::translate("PitProWindow", "About...", nullptr));
#ifndef QT_NO_WHATSTHIS
        showInfoAction->setWhatsThis(QApplication::translate("PitProWindow", "Show program information.", nullptr));
#endif // QT_NO_WHATSTHIS
        restoreDefaultsAction->setText(QApplication::translate("PitProWindow", "Restore defaults", nullptr));
#ifndef QT_NO_WHATSTHIS
        restoreDefaultsAction->setWhatsThis(QApplication::translate("PitProWindow", "Restore the settings to program defaults.", nullptr));
#endif // QT_NO_WHATSTHIS
        actionUpdate_available->setText(QApplication::translate("PitProWindow", "Update available", nullptr));
#ifndef QT_NO_WHATSTHIS
        actionUpdate_available->setWhatsThis(QApplication::translate("PitProWindow", "This icon indicates that an update is available, either for the program, or for the sites configuration file. Click this toolbar icon to bring up the update manager.", nullptr));
#endif // QT_NO_WHATSTHIS
        editSitesConfigAction->setText(QApplication::translate("PitProWindow", "Select active sites configuration...", nullptr));
        checkForUpdatesAction->setText(QApplication::translate("PitProWindow", "Check for updates", nullptr));
        menuHelp->setTitle(QApplication::translate("PitProWindow", "Help", nullptr));
        menuOutput->setTitle(QApplication::translate("PitProWindow", "Output", nullptr));
        menuEdit->setTitle(QApplication::translate("PitProWindow", "Edit", nullptr));
        menuData->setTitle(QApplication::translate("PitProWindow", "Sites", nullptr));
        menuFile->setTitle(QApplication::translate("PitProWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PitProWindow: public Ui_PitProWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PITPROWINDOW_H
