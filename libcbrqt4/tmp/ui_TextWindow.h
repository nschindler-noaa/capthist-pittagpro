/********************************************************************************
** Form generated from reading UI file 'TextWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTWINDOW_H
#define UI_TEXTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextWindow
{
public:
    QAction *actionSaveAs;
    QAction *actionPrint;
    QAction *actionExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu_File;

    void setupUi(QMainWindow *TextWindow)
    {
        if (TextWindow->objectName().isEmpty())
            TextWindow->setObjectName(QString::fromUtf8("TextWindow"));
        TextWindow->resize(706, 600);
        actionSaveAs = new QAction(TextWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionPrint = new QAction(TextWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionExit = new QAction(TextWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(TextWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        TextWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TextWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TextWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(TextWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 706, 21));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        TextWindow->setMenuBar(menubar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(actionSaveAs);
        menu_File->addAction(actionPrint);
        menu_File->addSeparator();
        menu_File->addAction(actionExit);

        retranslateUi(TextWindow);

        QMetaObject::connectSlotsByName(TextWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TextWindow)
    {
        TextWindow->setWindowTitle(QString());
        actionSaveAs->setText(QApplication::translate("TextWindow", "&Save as...", nullptr));
        actionPrint->setText(QApplication::translate("TextWindow", "&Print...", nullptr));
        actionExit->setText(QApplication::translate("TextWindow", "Close", nullptr));
        menu_File->setTitle(QApplication::translate("TextWindow", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextWindow: public Ui_TextWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTWINDOW_H
