//
//      LISTA CIRCULAR - DEIBER GRANADOS VEGA / 20171596397
//

#include "Node.h"

// Constructor por defecto
template<typename T>
Node<T>::Node()
{
    data = NULL;
    next = NULL;
}

// Constructor por parámetro
template<typename T>
Node<T>::Node(T data_)
{
    data = data_;
    next = NULL;
}

template<typename T>
Node<T>::~Node() {}