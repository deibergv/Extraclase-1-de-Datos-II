/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MainWindow_H
#define UI_MainWindow_H

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
    QLabel *Text;
    QLabel *label;
    QPushButton *InsertarInicio;
    QPushButton *InsertarFinal;
    QPushButton *InsertarPosicion;
    QLabel *label_2;
    QPushButton *EliminarInicio;
    QPushButton *EliminarPosicion;
    QPushButton *EliminarFinal;
    QPushButton *Obtener;
    QPushButton *Editar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(492, 175);
        MainWindow->setMaximumSize(QSize(10000, 10000));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Text = new QLabel(centralWidget);
        Text->setObjectName(QStringLiteral("Text"));
        Text->setGeometry(QRect(10, 80, 131, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 61, 21));
        InsertarInicio = new QPushButton(centralWidget);
        InsertarInicio->setObjectName(QStringLiteral("InsertarInicio"));
        InsertarInicio->setGeometry(QRect(90, 10, 51, 22));
        InsertarFinal = new QPushButton(centralWidget);
        InsertarFinal->setObjectName(QStringLiteral("InsertarFinal"));
        InsertarFinal->setGeometry(QRect(90, 40, 51, 22));
        InsertarPosicion = new QPushButton(centralWidget);
        InsertarPosicion->setObjectName(QStringLiteral("InsertarPosicion"));
        InsertarPosicion->setGeometry(QRect(10, 40, 71, 22));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 10, 53, 22));
        EliminarInicio = new QPushButton(centralWidget);
        EliminarInicio->setObjectName(QStringLiteral("EliminarInicio"));
        EliminarInicio->setGeometry(QRect(260, 10, 51, 22));
        EliminarPosicion = new QPushButton(centralWidget);
        EliminarPosicion->setObjectName(QStringLiteral("EliminarPosicion"));
        EliminarPosicion->setGeometry(QRect(180, 40, 71, 22));
        EliminarFinal = new QPushButton(centralWidget);
        EliminarFinal->setObjectName(QStringLiteral("EliminarFinal"));
        EliminarFinal->setGeometry(QRect(260, 40, 51, 22));
        Obtener = new QPushButton(centralWidget);
        Obtener->setObjectName(QStringLiteral("Obtener"));
        Obtener->setGeometry(QRect(350, 10, 131, 22));
        Editar = new QPushButton(centralWidget);
        Editar->setObjectName(QStringLiteral("Editar"));
        Editar->setGeometry(QRect(350, 40, 131, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 492, 19));
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
        Text->setText(QApplication::translate("MainWindow", "La lista esta vacia...", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Insertar:", Q_NULLPTR));
        InsertarInicio->setText(QApplication::translate("MainWindow", "INICIO", Q_NULLPTR));
        InsertarFinal->setText(QApplication::translate("MainWindow", "FINAL", Q_NULLPTR));
        InsertarPosicion->setText(QApplication::translate("MainWindow", "POSICION", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Eliminar:", Q_NULLPTR));
        EliminarInicio->setText(QApplication::translate("MainWindow", "INICIO", Q_NULLPTR));
        EliminarPosicion->setText(QApplication::translate("MainWindow", "POSICION", Q_NULLPTR));
        EliminarFinal->setText(QApplication::translate("MainWindow", "FINAL", Q_NULLPTR));
        Obtener->setText(QApplication::translate("MainWindow", "Obtener dato", Q_NULLPTR));
        Editar->setText(QApplication::translate("MainWindow", "Editar por posicion", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MainWindow_H
