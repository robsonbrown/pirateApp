/********************************************************************************
** Form generated from reading UI file 'pirateApp.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIRATEAPP_H
#define UI_PIRATEAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pirateAppClass
{
public:
    QWidget *centralWidget;
    QPushButton *btnHello;
    QLabel *lblPirate;
    QMenuBar *menuBar;
    QMenu *menuTest;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *pirateAppClass)
    {
        if (pirateAppClass->objectName().isEmpty())
            pirateAppClass->setObjectName(QStringLiteral("pirateAppClass"));
        pirateAppClass->resize(706, 556);
        centralWidget = new QWidget(pirateAppClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnHello = new QPushButton(centralWidget);
        btnHello->setObjectName(QStringLiteral("btnHello"));
        btnHello->setGeometry(QRect(330, 450, 75, 23));
        lblPirate = new QLabel(centralWidget);
        lblPirate->setObjectName(QStringLiteral("lblPirate"));
        lblPirate->setGeometry(QRect(30, 30, 71, 41));
        pirateAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(pirateAppClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 706, 21));
        menuTest = new QMenu(menuBar);
        menuTest->setObjectName(QStringLiteral("menuTest"));
        pirateAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(pirateAppClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        pirateAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(pirateAppClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        pirateAppClass->setStatusBar(statusBar);

        menuBar->addAction(menuTest->menuAction());

        retranslateUi(pirateAppClass);

        QMetaObject::connectSlotsByName(pirateAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *pirateAppClass)
    {
        pirateAppClass->setWindowTitle(QApplication::translate("pirateAppClass", "pirateApp", 0));
        btnHello->setText(QApplication::translate("pirateAppClass", "PushButton", 0));
        lblPirate->setText(QApplication::translate("pirateAppClass", "TextLabel", 0));
        menuTest->setTitle(QApplication::translate("pirateAppClass", "Test", 0));
    } // retranslateUi

};

namespace Ui {
    class pirateAppClass: public Ui_pirateAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIRATEAPP_H
