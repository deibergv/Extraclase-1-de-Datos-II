//
//      LISTA CIRCULAR - DEIBER GRANADOS VEGA / 20171596397
//

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "List.h"
#include "List.cpp"
#include <QInputDialog>
#include <iostream>
#include <QtWidgets/QMessageBox>

QString option;

List<int> lista;
List<QString> listString;
int i;
int pos;
int n_nodes = 0;
QString ListaDatos = "";

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

//Opciones de insersion
void MainWindow::on_InsertarInicio_clicked()
{
    if (option == "Int") {
        int i = QInputDialog::getInt(this, tr("Insertar al Inicio:"),
                                     tr("Numero que desea insertar:"), 0, 0, 100000, 1);
        lista.add_head(i);
        ListaDatos = lista.printList();
    } else if (option == "String") {
        QString text = QInputDialog::getMultiLineText(this, tr("Insertar al Inicio:"),
                                                      tr("Dato que desea insertar:"), "");
        listString.add_head(text);
        ListaDatos = lista.printListString();
    }
    n_nodes += 1;
    ui->Text->setText(ListaDatos);
    ui->Text->adjustSize();
}

void MainWindow::on_InsertarFinal_clicked()
{
    if (option == "Int") {
        int i = QInputDialog::getInt(this, tr("Insertar al Inicio:"),
                                     tr("Numero que desea insertar:"), 0, 0, 100000, 1);
        lista.add_end(i);
        ListaDatos = lista.printList();
    } else if (option == "String") {
        QString text = QInputDialog::getMultiLineText(this, tr("Insertar al Inicio:"),
                                                      tr("Dato que desea insertar:"), "");
        listString.add_end(text);
        ListaDatos = lista.printListString();
    }
    n_nodes += 1;
    ui->Text->setText(ListaDatos);
    ui->Text->adjustSize();
}

void MainWindow::on_InsertarPosicion_clicked()
{
    int pos = QInputDialog::getInt(this, tr("Posicion:"),
                                   tr("Indique la posicion deseada:"), 0, 1, n_nodes, 1);
    if (option == "Int") {
        int i = QInputDialog::getInt(this, tr("Insertar al Inicio:"),
                                     tr("Numero que desea insertar:"), 0, 0, 100000, 1);
        lista.add_by_position(pos, i);
        ListaDatos = lista.printList();
    } else if (option == "String") {
        QString text = QInputDialog::getMultiLineText(this, tr("Insertar al Inicio:"),
                                                      tr("Dato que desea insertar:"), "");
        listString.add_by_position(pos, text);
        ListaDatos = lista.printListString();
    }
    n_nodes += 1;
    ui->Text->setText(ListaDatos);
    ui->Text->adjustSize();
}

// Opciones de Eliminado
void MainWindow::on_EliminarInicio_clicked()
{
    if (option == "Int") {
        lista.del_head();
        ListaDatos = lista.printList();
    } else if (option == "String") {
        listString.del_head();
        ListaDatos = lista.printListString();
    }
    n_nodes -= 1;
    ui->Text->setText(ListaDatos);
    ui->Text->adjustSize();
}

void MainWindow::on_EliminarFinal_clicked() {
    if (option == "Int") {
        lista.del_end();
        ListaDatos = lista.printList();
    } else if (option == "String") {
        listString.del_end();
        ListaDatos = lista.printListString();
    }
    n_nodes -= 1;
    ui->Text->setText(ListaDatos);
    ui->Text->adjustSize();
}

void MainWindow::on_EliminarPosicion_clicked()
{
    int pos = QInputDialog::getInt(this, tr("Posicion:"),
                                   tr("Indique la posicion deseada:"), 0, 1, n_nodes, 1);
    if (option == "Int") {
        lista.del_by_position(pos);
        ListaDatos = lista.printList();
    } else if (option == "String") {
        listString.del_by_position(pos);
        ListaDatos = lista.printListString();
    }
    n_nodes -= 1;
    ui->Text->setText(ListaDatos);
    ui->Text->adjustSize();
}

//Opcion de Obtencion
void MainWindow::on_Obtener_clicked()
{
    int pos = QInputDialog::getInt(this, tr("Posicion:"),
                                   tr("Indique la posicion deseada:"), 0, 1, n_nodes, 1);
    if (option == "Int") {
        QString Dato = lista.print_by_position(pos);
        if (Dato == "Posicion fuera de rango")
        {
            QMessageBox *msgBox = new QMessageBox;
            msgBox->setWindowTitle("Lista");
            msgBox->setText(Dato);
            msgBox->setWindowModality(Qt::NonModal);
            msgBox->show();
        } else {
            QMessageBox *msgBox = new QMessageBox;
            msgBox->setWindowTitle("Lista");
            msgBox->setText("El dato es: " + Dato);
            msgBox->setWindowModality(Qt::NonModal);
            msgBox->show();
        }
    } else if (option == "String") {
        QString Dato = listString.print_by_positionQString(pos);
        if (Dato == "Posicion fuera de rango")
        {
            QMessageBox *msgBox = new QMessageBox;
            msgBox->setWindowTitle("Lista");
            msgBox->setText(Dato);
            msgBox->setWindowModality(Qt::NonModal);
            msgBox->show();
        } else {
            QMessageBox *msgBox = new QMessageBox;
            msgBox->setWindowTitle("Lista");
            msgBox->setText("El dato es: " + Dato);
            msgBox->setWindowModality(Qt::NonModal);
            msgBox->show();
        }}
}

//Opcion de Edicion
void MainWindow::on_Editar_clicked()
{
    int pos = QInputDialog::getInt(this, tr("Posicion:"),
                                   tr("Indique la posicion deseada:"), 0, 1, n_nodes, 1);
    if (option == "Int") {
        int i = QInputDialog::getInt(this, tr("Insertar al Inicio:"),
                                     tr("Numero que desea modificar:"), 0, 0, 100000, 1);
        lista.edit_by_position(pos, i);
        ListaDatos = lista.printList();
    } else if (option == "String") {
        QString text = QInputDialog::getMultiLineText(this, tr("Insertar al Inicio:"),
                                                      tr("Dato que desea modificar:"), "");
        listString.edit_by_position(pos, text);
        ListaDatos = lista.printListString();
    }
    ui->Text->setText(ListaDatos);
    ui->Text->adjustSize();
}
