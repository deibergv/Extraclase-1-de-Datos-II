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

    void on_Insertar_clicked();

    void on_Eliminar_clicked();

private:
    Ui::MainWindow *ui;
};

#endif //GUI_MAINWINDOW_H
