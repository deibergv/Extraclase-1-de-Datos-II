//
// Created by deiber on 2/25/18.
//

#include "List.h"

using namespace std;

// Constructor
template<typename T>
List<T>::List()
{
    m_num_nodes = 0;
    list = NULL;
    m_end = NULL;
}

// Imprimir la Lista
template<typename T>
void List<T>::printList()
{
    Node<T> *temp = list;

    if (!list) {
        cout << "La Lista está vacía " << endl;
    } else {
        cout << "-> ";
        if (m_num_nodes == 1) {
            temp->print();
        } else {
            list->print();
            temp = list->next;
            while (temp != list) {
                temp->print();
                temp = temp->next;
            }
        }
    }
    cout << endl << endl;
}

// Insertar al inicio //
template<typename T>
void List<T>::add_head(T data_)
{
    Node<T> *new_node = new Node<T> (data_);

    if (!list) {
        list = new_node;
        m_end = new_node;
    } else {
        new_node->next = list;
        list = new_node;
        m_end->next = list;
    }
    m_num_nodes++;
}

// Insertar al final //
template<typename T>
void List<T>::add_end(T data_)
{
    Node<T> *new_node = new Node<T> (data_);

    if (!list) {
        list = new_node;
        m_end = new_node;
    } else {
        m_end->next = new_node;
        m_end = new_node;
        new_node->next = list;
    }
    m_num_nodes++;
}


// Insertar en posicion indicada //
template<typename T>
void List<T>::add_by_position(int pos, T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = list;
    Node<T> *temp1 = temp->next;

    if (pos < 1 || pos > m_num_nodes) {
        cout << "Posicion fuera de rango" << endl;
    } else if (pos == 1) {
        new_node->next = list;
        list = new_node;
        m_end->next = list;
        m_num_nodes++;

    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                temp->next = new_node;
                new_node->next =  temp1;
                if (pos == m_num_nodes) {
                    m_end = temp1;
                    m_end->next = list;
                }
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
        m_num_nodes++;
    }
}

// Eliminar inicial //
template<typename T>
void List<T>::del_head()
{
    Node<T> *temp = list;
    if (!list) {
        cout << "La Lista está vacía " << endl;
    } else {
        list = temp->next;
        m_end->next = list;
    }
    m_num_nodes--;
}

// Eliminar final //
template<typename T>
void List<T>::del_end()
{
    Node<T> *temp = list;
    Node<T> *temp1 = temp->next;

    if (!list) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp1->next != m_end) {
            temp = temp->next;
            temp1 = temp1->next;
        }
        temp1->next = temp->next;
        m_end = temp->next;
        m_end->next = list;
    }
    m_num_nodes--;
}

// Eliminar por posición del nodo //
template<typename T>
void List<T>::del_by_position(int pos)
{
    Node<T> *temp = list;
    Node<T> *temp1 = temp->next;

    if (pos < 1 || pos > m_num_nodes) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        list = temp->next;
        m_end->next = list;
        m_num_nodes--;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == m_num_nodes){
                temp->next = list;
                m_end = temp;
                m_num_nodes--;
            }else if (i == pos) {
                temp->next = temp1->next;
                m_num_nodes--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}

// Editar por posicion //
template<typename T>
void List<T>::edit_by_position(int pos, T data_)
{
    Node<T> *temp = list->next;

    if (pos < 1 || pos > m_num_nodes) {
        cout << "Posicion fuera de rango, no hubo cambios" << endl;
    } else if (pos == 1) {
        list->data = data_;
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
void List<T>::print_by_position(int pos)
{
    Node<T> *temp = list->next;

    if (pos < 1 || pos > m_num_nodes) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        cout << "El dato de la posición indicada es: " << list->data << endl;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                cout << "El dato de la posición indicada es: " << temp->data << endl;
            }
            temp = temp->next;
        }
    }
}

template<typename T>
List<T>::~List() {}