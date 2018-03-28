//
// Created by deiber on 2/24/18.
//

#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "Node.h"
#include "Node.cpp"

using namespace std;

template <class T>

class List
{
public:
    List();
    ~List();

    void fill_random(int);
    void printList();
    void add_head(T);
    void add_end(T);
    void add_by_position(int, T);
    void del_head();
    void del_end();
    void del_by_position(int);
    void edit_by_position(int, T);
    void print_by_position(int);

private:
    Node<T> *m_head;
    int m_num_nodes;
};

#endif // LIST_H
