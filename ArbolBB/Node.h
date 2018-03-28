//
// Created by deiber on 3/1/18.
//

#ifndef ARBOLBB_NODE_H
#define ARBOLBB_NODE_H

#include <iostream>

using namespace std;

template<class T>

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

#endif //ARBOLBB_NODE_H


