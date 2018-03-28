#include <iostream>

#include "List.h"
#include "List.cpp"

using namespace std;

int main()
{
    List<int> list;
    int ele;

    int dim;
    int pos;

    /*cout << "Ingresa la dimensión de la lista: " << endl;
    cin >> dim;

    list.fill_random(dim);*/

    cout << "Lista A al inicio " << endl;
    list.printList();

    cout << "Agrega un elemento al inicio: " << endl;
    cin >> ele;
    list.add_head(ele);
    list.printList();

    cout << "Agrega un elemento al final: " << endl;
    cin >> ele;
    list.add_end(ele);
    list.printList();

    cout << "Agregar un elemento en la posicion: " << endl;
    cin >> pos;
    cout << "Agregar el elemento: " << endl;
    cin >> ele;
    list.add_by_position(pos,ele);
    list.printList();

    cout << "Eliminado el elemento inicial: " << endl;
    list.del_head();
    list.printList();

    cout << "Eliminado el elemento final: " << endl;
    list.del_end();
    list.printList();

    cout << "Elimina un elemento por posición: " << endl;
    cin >> pos;
    list.del_by_position(pos);
    list.printList();

    cout << "Editar el dato en la posición: " << endl;
    cin >> pos;
    cout << "Cambiarlo por: " << endl;
    cin >> ele;
    list.edit_by_position(pos,ele);
    list.printList();

    cout << "Obtiener el dato de la posición: " << endl;
    cin >> pos;
    list.print_by_position(pos);
    list.printList();

    return 0;
}