/********************************************************************************
** Form generated from reading UI file 'newEditWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWEDITWINDOW_H
#define UI_NEWEDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newEditWindow
{
public:
    QAction *fileOpenAction;
    QAction *fileSaveAction;
    QAction *fileSave_AsAction;
    QAction *filePrintAction;
    QAction *fileExitAction;
    QAction *editCopyAction;
    QAction *editCutAction;
    QAction *editPasteAction;
    QAction *editUndoAction;
    QAction *editRedoAction;
    QAction *editDeleteAction;
    QAction *editSelect_AllAction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *newEditWindow)
    {
        if (newEditWindow->objectName().isEmpty())
            newEditWindow->setObjectName(QString::fromUtf8("newEditWindow"));
        newEditWindow->resize(800, 600);
        fileOpenAction = new QAction(newEditWindow);
        fileOpenAction->setObjectName(QString::fromUtf8("fileOpenAction"));
        fileSaveAction = new QAction(newEditWindow);
        fileSaveAction->setObjectName(QString::fromUtf8("fileSaveAction"));
        fileSave_AsAction = new QAction(newEditWindow);
        fileSave_AsAction->setObjectName(QString::fromUtf8("fileSave_AsAction"));
        filePrintAction = new QAction(newEditWindow);
        filePrintAction->setObjectName(QString::fromUtf8("filePrintAction"));
        fileExitAction = new QAction(newEditWindow);
        fileExitAction->setObjectName(QString::fromUtf8("fileExitAction"));
        editCopyAction = new QAction(newEditWindow);
        editCopyAction->setObjectName(QString::fromUtf8("editCopyAction"));
        editCutAction = new QAction(newEditWindow);
        editCutAction->setObjectName(QString::fromUtf8("editCutAction"));
        editPasteAction = new QAction(newEditWindow);
        editPasteAction->setObjectName(QString::fromUtf8("editPasteAction"));
        editUndoAction = new QAction(newEditWindow);
        editUndoAction->setObjectName(QString::fromUtf8("editUndoAction"));
        editRedoAction = new QAction(newEditWindow);
        editRedoAction->setObjectName(QString::fromUtf8("editRedoAction"));
        editDeleteAction = new QAction(newEditWindow);
        editDeleteAction->setObjectName(QString::fromUtf8("editDeleteAction"));
        editSelect_AllAction = new QAction(newEditWindow);
        editSelect_AllAction->setObjectName(QString::fromUtf8("editSelect_AllAction"));
        centralwidget = new QWidget(newEditWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        verticalLayout_2->addLayout(verticalLayout);

        newEditWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(newEditWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        newEditWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(newEditWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        newEditWindow->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menu_File->addAction(fileOpenAction);
        menu_File->addAction(fileSaveAction);
        menu_File->addAction(fileSave_AsAction);
        menu_File->addSeparator();
        menu_File->addAction(filePrintAction);
        menu_File->addSeparator();
        menu_File->addAction(fileExitAction);
        menu_Edit->addAction(editCopyAction);
        menu_Edit->addAction(editCutAction);
        menu_Edit->addAction(editPasteAction);
        menu_Edit->addAction(editDeleteAction);
        menu_Edit->addAction(editSelect_AllAction);
        menu_Edit->addSeparator();
        menu_Edit->addAction(editUndoAction);
        menu_Edit->addAction(editRedoAction);

        retranslateUi(newEditWindow);

        QMetaObject::connectSlotsByName(newEditWindow);
    } // setupUi

    void retranslateUi(QMainWindow *newEditWindow)
    {
        newEditWindow->setWindowTitle(QApplication::translate("newEditWindow", "MainWindow", nullptr));
        fileOpenAction->setText(QApplication::translate("newEditWindow", "&Open", nullptr));
        fileSaveAction->setText(QApplication::translate("newEditWindow", "&Save", nullptr));
        fileSave_AsAction->setText(QApplication::translate("newEditWindow", "Save &As", nullptr));
        filePrintAction->setText(QApplication::translate("newEditWindow", "&Print", nullptr));
        fileExitAction->setText(QApplication::translate("newEditWindow", "E&xit", nullptr));
        editCopyAction->setText(QApplication::translate("newEditWindow", "&Copy", nullptr));
        editCutAction->setText(QApplication::translate("newEditWindow", "Cu&t", nullptr));
        editPasteAction->setText(QApplication::translate("newEditWindow", "&Paste", nullptr));
        editUndoAction->setText(QApplication::translate("newEditWindow", "&Undo", nullptr));
        editRedoAction->setText(QApplication::translate("newEditWindow", "&Redo", nullptr));
        editDeleteAction->setText(QApplication::translate("newEditWindow", "&Delete", nullptr));
        editSelect_AllAction->setText(QApplication::translate("newEditWindow", "Select &All", nullptr));
        menu_File->setTitle(QApplication::translate("newEditWindow", "&File", nullptr));
        menu_Edit->setTitle(QApplication::translate("newEditWindow", "&Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newEditWindow: public Ui_newEditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWEDITWINDOW_H
