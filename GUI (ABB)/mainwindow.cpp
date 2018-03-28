//
//      LISTA ENLAZADA DOBLE - DEIBER GRANADOS VEGA / 20171596397
//

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Tree.h"
#include "Tree.cpp"
#include <QInputDialog>
#include <iostream>
#include <QtWidgets/QMessageBox>

QString option;

Tree<int> Treeint;
//Tree<QString> TreeString;
QString Arbol = "";
QString cant_nodos = "";
QString altura_arbol = "";

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::TipoDeDato() {
    QStringList options;
    options << tr("Int") << tr("String");
    option = QInputDialog::getItem(this, tr("Tipo de Dato:"),
                                   tr("Elija el tipo de dato que desea para la lista:"), options, 0, false);
    return option;
}

// Función de prueba para recorridos del árbol
void Mostrar(int &d)
{
    //cout << d << ",";
    Arbol = Arbol + QString::number(d) + ",";
}


//Opciones de insersion
void MainWindow::on_Insertar_clicked()
{
    int i = QInputDialog::getInt(this, tr("Insertar al Inicio:"),
                                 tr("Numero que desea insertar:"), 0, 0, 100000, 1);
    Treeint.Insertar(i);

    cant_nodos = "# Nodos: " + QString::number(Treeint.NumeroNodos());
    ui->n_nodos->setText(cant_nodos);

    altura_arbol = "Altura de arbol: " + QString::number(Treeint.AlturaArbol());
    ui->Altura_arbol->setText(altura_arbol);

    Arbol = "PreOrden: ";
    Treeint.PreOrden(Mostrar);
    ui->Arbol_PreOrden->setText(Arbol);

    Arbol = "PostOrden: ";
    Treeint.PostOrden(Mostrar);
    ui->Arbol_PostOrden->setText(Arbol);

    Arbol = "InOrden: ";
    Treeint.InOrden(Mostrar);
    ui->Arbol_InOrden->setText(Arbol);
}

// Opciones de Eliminado
void MainWindow::on_Eliminar_clicked()
{
    int i = QInputDialog::getInt(this, tr("Insertar al Inicio:"),
                                 tr("Numero que desea insertar:"), 0, 0, 100000, 1);
    Treeint.Borrar(i);

    cant_nodos = "# Nodos: " + QString::number(Treeint.NumeroNodos());
    ui->n_nodos->setText(cant_nodos);

    altura_arbol = "Altura de arbol: " + QString::number(Treeint.AlturaArbol());
    ui->Altura_arbol->setText(altura_arbol);

    Arbol = "PreOrden: ";
    Treeint.PreOrden(Mostrar);
    ui->Arbol_PreOrden->setText(Arbol);

    Arbol = "PostOrden: ";
    Treeint.PostOrden(Mostrar);
    ui->Arbol_PostOrden->setText(Arbol);

    Arbol = "InOrden: ";
    Treeint.InOrden(Mostrar);
    ui->Arbol_InOrden->setText(Arbol);
}