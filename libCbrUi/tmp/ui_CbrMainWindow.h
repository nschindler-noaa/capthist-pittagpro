/********************************************************************************
** Form generated from reading UI file 'CbrMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBRMAINWINDOW_H
#define UI_CBRMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CbrMainWindow
{
public:
    QAction *actionExit;
    QAction *actionInfo;
    QAction *actionSave;
    QAction *actionPrint;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile_;
    QMenu *menuHelp_;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CbrMainWindow)
    {
        if (CbrMainWindow->objectName().isEmpty())
            CbrMainWindow->setObjectName(QString::fromUtf8("CbrMainWindow"));
        CbrMainWindow->setEnabled(true);
        CbrMainWindow->resize(588, 466);
        actionExit = new QAction(CbrMainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionInfo = new QAction(CbrMainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        actionSave = new QAction(CbrMainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionPrint = new QAction(CbrMainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        centralwidget = new QWidget(CbrMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        CbrMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CbrMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 588, 21));
        menuFile_ = new QMenu(menubar);
        menuFile_->setObjectName(QString::fromUtf8("menuFile_"));
        menuHelp_ = new QMenu(menubar);
        menuHelp_->setObjectName(QString::fromUtf8("menuHelp_"));
        CbrMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CbrMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CbrMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile_->menuAction());
        menubar->addAction(menuHelp_->menuAction());

        retranslateUi(CbrMainWindow);
        QObject::connect(actionExit, SIGNAL(activated()), CbrMainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(CbrMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CbrMainWindow)
    {
        CbrMainWindow->setWindowTitle(QApplication::translate("CbrMainWindow", "MainWindow", nullptr));
        actionExit->setText(QApplication::translate("CbrMainWindow", "Exit", nullptr));
        actionInfo->setText(QApplication::translate("CbrMainWindow", "About", nullptr));
        actionSave->setText(QApplication::translate("CbrMainWindow", "Save", nullptr));
        actionPrint->setText(QApplication::translate("CbrMainWindow", "Print", nullptr));
        menuFile_->setTitle(QApplication::translate("CbrMainWindow", "File", nullptr));
        menuHelp_->setTitle(QApplication::translate("CbrMainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CbrMainWindow: public Ui_CbrMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBRMAINWINDOW_H
