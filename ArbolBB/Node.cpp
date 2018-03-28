//
// Created by deiber on 3/1/18.
//

#include "Node.h"

// Constructor por defecto
template<typename T>
Node<T>::Node()
{
    dato = 0;
    derecho = NULL;
    izquierdo = NULL;
}

// Constructor por parametro:
template<typename T>
Node<T>::Node(const int dat, Node *izq, Node *der)
{
    dato = dat;
    derecho = der;
    izquierdo = izq;
}

template<typename T>
Node<T>::~Node() {}
