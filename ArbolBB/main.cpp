#include <iostream>

#include "Tree.h"
#include "Tree.cpp"

using namespace std;

// Función de prueba para recorridos del árbol
void Mostrar(int &d)
{
    cout << d << ",";
}

int main()
{
    // Un Arbol de enteros
    Tree<int> TreeInt;

    // Insercion de nodos en arbol:
    TreeInt.Insertar(10);
    TreeInt.Insertar(5);
    TreeInt.Insertar(12);
    TreeInt.Insertar(4);
    TreeInt.Insertar(7);
    TreeInt.Insertar(3);
    TreeInt.Insertar(6);
    TreeInt.Insertar(9);
    TreeInt.Insertar(8);
    TreeInt.Insertar(11);
    TreeInt.Insertar(14);
    TreeInt.Insertar(13);
    TreeInt.Insertar(2);
    TreeInt.Insertar(1);
    TreeInt.Insertar(15);
    TreeInt.Insertar(10);
    TreeInt.Insertar(17);
    TreeInt.Insertar(18);
    TreeInt.Insertar(16);

    cout << "Altura de arbol " << TreeInt.AlturaArbol() << endl;

    // Mostrar el arbol en tres ordenes distintos:
    cout << "InOrden: ";
    TreeInt.InOrden(Mostrar);
    cout << endl;
    cout << "PreOrden: ";
    TreeInt.PreOrden(Mostrar);
    cout << endl;
    cout << "PostOrden: ";
    TreeInt.PostOrden(Mostrar);
    cout << endl;

    // Borraremos algunos elementos:
    cout << "N nodos: " << TreeInt.NumeroNodos() << endl;
    TreeInt.Borrar(5);
    cout << "Borrar   5: ";
    TreeInt.InOrden(Mostrar);
    cout << endl;
    TreeInt.Borrar(8);
    cout << "Borrar   8: ";
    TreeInt.InOrden(Mostrar);
    cout << endl;
    TreeInt.Borrar(15);
    cout << "Borrar  15: ";
    TreeInt.InOrden(Mostrar);
    cout << endl;
    TreeInt.Borrar(245);
    cout << "Borrar 245: ";
    TreeInt.InOrden(Mostrar);
    cout << endl;
    TreeInt.Borrar(4);
    cout << "Borrar   4: ";
    TreeInt.InOrden(Mostrar);
    TreeInt.Borrar(17);
    cout << endl;
    cout << "Borrar  17: ";
    TreeInt.InOrden(Mostrar);
    cout << endl;

    // Veamos algunos par�metros
    cout << "N nodos: " << TreeInt.NumeroNodos() << endl;
    cout << "Altura de 1 " << TreeInt.Altura(1) << endl;
    cout << "Altura de 10 " << TreeInt.Altura(10) << endl;
    cout << "Altura de arbol " << TreeInt.AlturaArbol() << endl;

    cin.get();

    return 0;
}