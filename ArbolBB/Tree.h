//
// Created by deiber on 2/28/18.
//

#ifndef ARBOLBB_TREE_H
#define ARBOLBB_TREE_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "Node.h"
#include "Node.cpp"

using namespace std;

template<class T>

class Tree
{
public:
    // Constructor y destructor básicos:
    Tree();
    ~Tree();
    // Insertar en árbol ordenado:
    void Insertar(const int dat);
    // Borrar un elemento del árbol:
    void Borrar(const int dat);
    // Función de búsqueda:
    bool Buscar(const int dat);
    // Comprobar si el árbol está vacío:
    bool Vacio(Node<T> *r);
    // Comprobar si es un nodo hoja:
    bool EsHoja(Node<T> *r);
    // Contar número de nodos:
    const int NumeroNodos();
    const int AlturaArbol();
    // Calcular altura de un int:
    int Altura(const int dat);
    // Devolver referencia al int del nodo actual:
    int ValorActual();
    // Moverse al nodo raiz:
    void Raiz();
    // Aplicar una función a cada elemento del árbol:
    void InOrden(void (*func)(int&) , Node<T> *nodo=NULL, bool r=true);
    void PreOrden(void (*func)(int&) , Node<T> *nodo=NULL, bool r=true);
    void PostOrden(void (*func)(int&) , Node<T> *nodo=NULL, bool r=true);

private:
    // Funciones auxiliares
    void Podar(Node<T>* &);
    void auxContador(Node<T>*);
    void auxAltura(Node<T>*, int);

    // Punteros de la lista, para cabeza y nodo actual:
    Node<T> *raiz;
    Node<T> *actual;
    int contador;
    int altura;
};

#endif //ARBOLBB_TREE_H
