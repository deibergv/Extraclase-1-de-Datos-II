//
// Created by deiber on 2/24/18.
//

#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <class T>

class Node
{
public:
    Node();
    Node(T);
    ~Node();

    Node *next;
    T data;

    void print();
};

#endif // NODE_H