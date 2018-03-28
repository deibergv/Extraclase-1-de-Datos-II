//
//      LISTA CIRCULAR - DEIBER GRANADOS VEGA / 20171596397
//

#ifndef GUI_LIST_H
#define GUI_LIST_H

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

    QString printList();
    QString printListString();
    void add_head(T);
    void add_end(T);
    void add_by_position(int, T);
    void del_head();
    void del_end();
    void del_by_position(int);
    void edit_by_position(int, T);
    QString print_by_position(int);
    QString print_by_positionQString(int);

private:
    Node<T> *m_head;
    Node<T> *m_end;
    int m_num_nodes;
};

#endif // GUI_LIST_H
