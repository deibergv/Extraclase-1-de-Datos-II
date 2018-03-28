//
//      LISTA CIRCULAR - DEIBER GRANADOS VEGA / 20171596397
//

#ifndef GUI_NODE_H
#define GUI_NODE_H

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
};

#endif // GUI_NODE_H