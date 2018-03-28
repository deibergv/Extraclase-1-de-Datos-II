/*
*      LISTA ENLAZADA SIMPLE - DEIBER GRANADOS VEGA / 20171596397
*/

#include <iostream>
#include <QtWidgets/QInputDialog>

using namespace std;

#include "QApplication"
#include "QtWidgets/QLabel"
#include "QtWidgets/QPushButton"

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
/*
 * Llamado a la ventana principal y a la escogencia del tipo de dato que se desea
 */
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow w;
    w.show();

    w.TipoDeDato();

    return app.exec();
}