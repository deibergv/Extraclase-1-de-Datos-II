//
//      LISTA ENLAZADA DOBLE - DEIBER GRANADOS VEGA / 20171596397
//

#include <QtCore/QString>
#include <sstream>
#include "List.h"

using namespace std;

// Constructor
template<typename T>
List<T>::List()
{
    m_num_nodes = 0;
    m_head = NULL;
}

// Imprimir la Lista
template<typename T>
QString List<T>::printList()
{
    Node<T> *temp = m_head;
    QString Dato;
    while (temp) {
        if (temp == m_head) {
            Dato = "NULL -> " + QString::number(temp->data);
        } else {
            Dato = Dato + " -> " + QString::number(temp->data);
        }
        if (!temp->next) Dato = Dato + " -> " + "NULL";
        temp = temp->next;
    }
    if (m_num_nodes == 0) Dato = "La lista esta vacia...";
    return Dato;
}

// Imprimir la Lista
template<typename T>
QString List<T>::printListString()
{
    Node<T> *temp = m_head;
    QString Dato;
    while (temp) {
        if (temp == m_head) {
            Dato = "NULL -> " + QString(temp->data);
        } else {
            Dato = Dato + " -> " + QString(temp->data);
        }
        if (!temp->next) Dato = Dato + " -> " + "NULL";
        temp = temp->next;
    }
    if (m_num_nodes == 0) Dato = "La lista esta vacia...";
    return Dato;
}

// Insertar al inicio //
template<typename T>
void List<T>::add_head(T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        m_head->previous = new_node;
        m_head = new_node;
        new_node->next = temp;
    }
    m_num_nodes++;
}

// Insertar al final //
template<typename T>
void List<T>::add_end(T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    m_num_nodes++;
}

// Insertar en posicion indicada //
template<typename T>
void List<T>::add_by_position(int pos, T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;
    Node<T> *temp1 = temp->next;

    if (pos == 1) {
        m_head->previous = new_node;
        m_head = new_node;
        new_node->next = temp;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                temp->next = new_node;
                new_node->next = temp1;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
    m_num_nodes++;
}

// Eliminar inicial //
template<typename T>
void List<T>::del_head()
{
    Node<T> *temp = m_head;
    if (m_head) {
        m_head = temp->next;
        m_num_nodes--;
    }
}

// Eliminar final //
template<typename T>
void List<T>::del_end()
{
    Node<T> *temp = m_head;
    Node<T> *temp1 = temp->next;

    for (int i = 2; i <= m_num_nodes; i++) {
        if (i == m_num_nodes){
            temp->next = temp1->next;
        }
        temp = temp->next;
        temp1 = temp1->next;
    }
    m_num_nodes--;
}

// Eliminar por posición del nodo //
template<typename T>
void List<T>::del_by_position(int pos)
{
    Node<T> *temp = m_head;
    Node<T> *temp1 = temp->next;

    if (pos == 1) {
        m_head = temp->next;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == m_num_nodes){
                temp->next = temp1->next;
            }else if (i == pos) {
                Node<T> *aux_node = temp1;
                temp->next = temp1->next;
                delete aux_node;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
    m_num_nodes--;
}

// Editar por posicion //
template<typename T>
void List<T>::edit_by_position(int pos, T data_)
{
    Node<T> *temp = m_head->next;

    if (pos == 1) {
        m_head->data = data_;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                temp->data = data_;
            }
            temp = temp->next;
        }
    }
}

// Imprimir por posicion //
template<typename T>
QString List<T>::print_by_position(int pos)
{
    Node<T> *temp = m_head->next;

    if (pos == 1) {
        QString Dato = QString::number(m_head->data);
        return Dato;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                QString Dato = QString::number(temp->data);
                return Dato;
            }
            temp = temp->next;
        }
    }
}

// Imprimir por posicion //
template<typename T>
QString List<T>::print_by_positionQString(int pos)
{
    Node<T> *temp = m_head->next;

    if (pos == 1) {
        QString Dato = QString(m_head->data);
        return Dato;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                QString Dato = QString(temp->data);
                return Dato;
            }
            temp = temp->next;
        }
    }
}

template<typename T>
List<T>::~List() {}