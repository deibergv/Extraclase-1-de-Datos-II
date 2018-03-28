/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Arbol_PreOrden;
    QPushButton *Insertar;
    QPushButton *Eliminar;
    QLabel *n_nodos;
    QLabel *Altura_arbol;
    QLabel *Arbol_PostOrden;
    QLabel *Arbol_InOrden;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(390, 230);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Arbol_PreOrden = new QLabel(centralWidget);
        Arbol_PreOrden->setObjectName(QStringLiteral("Arbol_PreOrden"));
        Arbol_PreOrden->setGeometry(QRect(10, 100, 351, 16));
        Insertar = new QPushButton(centralWidget);
        Insertar->setObjectName(QStringLiteral("Insertar"));
        Insertar->setGeometry(QRect(40, 20, 81, 22));
        Eliminar = new QPushButton(centralWidget);
        Eliminar->setObjectName(QStringLiteral("Eliminar"));
        Eliminar->setGeometry(QRect(270, 20, 81, 22));
        n_nodos = new QLabel(centralWidget);
        n_nodos->setObjectName(QStringLiteral("n_nodos"));
        n_nodos->setGeometry(QRect(60, 70, 91, 16));
        Altura_arbol = new QLabel(centralWidget);
        Altura_arbol->setObjectName(QStringLiteral("Altura_arbol"));
        Altura_arbol->setGeometry(QRect(200, 70, 121, 16));
        Arbol_PostOrden = new QLabel(centralWidget);
        Arbol_PostOrden->setObjectName(QStringLiteral("Arbol_PostOrden"));
        Arbol_PostOrden->setGeometry(QRect(10, 130, 351, 16));
        Arbol_InOrden = new QLabel(centralWidget);
        Arbol_InOrden->setObjectName(QStringLiteral("Arbol_InOrden"));
        Arbol_InOrden->setGeometry(QRect(10, 160, 351, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 390, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Arbol_PreOrden->setText(QApplication::translate("MainWindow", "Arbol vacio...", Q_NULLPTR));
        Insertar->setText(QApplication::translate("MainWindow", "Insertar", Q_NULLPTR));
        Eliminar->setText(QApplication::translate("MainWindow", "Eliminar", Q_NULLPTR));
        n_nodos->setText(QApplication::translate("MainWindow", "# Nodos: 0", Q_NULLPTR));
        Altura_arbol->setText(QApplication::translate("MainWindow", "Altura del arbol: 0", Q_NULLPTR));
        Arbol_PostOrden->setText(QString());
        Arbol_InOrden->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
