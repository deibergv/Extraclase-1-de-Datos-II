//
//      LISTA ENLAZADA DOBLE - DEIBER GRANADOS VEGA / 20171596397
//

#ifndef GUI_MAINWINDOW_H
#define GUI_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString TipoDeDato();

private slots:

    void on_InsertarInicio_clicked();

    void on_InsertarFinal_clicked();

    void on_InsertarPosicion_clicked();

    void on_EliminarInicio_clicked();

    void on_EliminarFinal_clicked();

    void on_EliminarPosicion_clicked();

    void on_Obtener_clicked();

    void on_Editar_clicked();

private:
    Ui::MainWindow *ui;
};

#endif //GUI_MAINWINDOW_H
