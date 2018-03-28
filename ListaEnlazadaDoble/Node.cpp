//
// Created by deiber on 2/24/18.
//

#include "Node.h"

// Constructor por defecto
template<typename T>

Node<T>::Node()
{
    data = NULL;
    next = NULL;
    previous = NULL;
}

// Constructor por parámetro
template<typename T>
Node<T>::Node(T data_)
{
    data = data_;
    next = NULL;
    previous = NULL;
}

// Imprimir un Nodo
template<typename T>
void Node<T>::print()
{
    //cout << "Node-> " << "Dato: " << dato << " Direccion: " << this << " Siguiente: " << next << endl;
    cout << data << " -> ";
}

template<typename T>
Node<T>::~Node() {}