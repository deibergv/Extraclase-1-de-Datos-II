//
//      ARBOL BINARIO de BUSQUEDA - DEIBER GRANADOS VEGA / 20171596397
//

#ifndef GUI_ABB_NODE_H
#define GUI_ABB_NODE_H

#include <iostream>

using namespace std;

template <class T>

class Node
{
public:
    Node();
    Node(const int dat, Node *izq=NULL, Node *der=NULL);
    ~Node();

    // Miembros:
    int dato;
    Node *izquierdo;
    Node *derecho;
};

#endif // GUI_ABB_NODE_H