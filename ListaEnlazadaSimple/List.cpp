//
// Created by deiber on 2/24/18.
//

#include "List.h"

using namespace std;

// Constructor
template<typename T>
List<T>::List()
{
    m_num_nodes = 0;
    m_head = NULL;
}

// Llenar la Lista aleatoriamente para enteros
template<typename T>
void List<T>::fill_random(int dim)
{
    srand(time(NULL));
    for (int i = 0; i < dim; i++) {
        add_end(rand() % 100);
    }
}

// Imprimir la Lista
template<typename T>
void List<T>::printList()
{
    Node<T> *temp = m_head;
    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->print();
            if (!temp->next) cout << "NULL";
            temp = temp->next;
        }
    }
    cout << endl << endl;
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
        new_node->next = m_head;
        m_head = new_node;
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

    if (pos < 1 || pos > m_num_nodes) {
        cout << "Posicion fuera de rango" << endl;
    } else if (pos == 1) {
        new_node->next = m_head;
        m_head = new_node;
        m_num_nodes++;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                temp->next = new_node;
                new_node->next =  temp1;
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
    Node<T> *temp = m_head;
    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        m_head = temp->next;
    }
    m_num_nodes--;
}

// Eliminar final //
template<typename T>
void List<T>::del_end()
{
    Node<T> *temp = m_head;
    Node<T> *temp1 = temp->next;

    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp1->next != NULL) {
            temp = temp->next;
            temp1 = temp1->next;
        }
        Node<T> *aux_node = temp;
        temp1->next = temp->next;
        delete aux_node;
    }
    m_num_nodes--;
}

// Eliminar por posición del nodo //
template<typename T>
void List<T>::del_by_position(int pos)
{
    Node<T> *temp = m_head;
    Node<T> *temp1 = temp->next;

    if (pos < 1 || pos > m_num_nodes) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        m_head = temp->next;
        m_num_nodes--;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == m_num_nodes){
                temp->next = temp1->next;
                m_num_nodes--;
            }else if (i == pos) {
                Node<T> *aux_node = temp1;
                temp->next = temp1->next;
                delete aux_node;
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
    Node<T> *temp = m_head->next;

    if (pos < 1 || pos > m_num_nodes) {
        cout << "Posicion fuera de rango, no hubo cambios" << endl;
    } else if (pos == 1) {
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
void List<T>::print_by_position(int pos)
{
    Node<T> *temp = m_head->next;

    if (pos < 1 || pos > m_num_nodes) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        cout << "El dato de la posición indicada es: " << m_head->data << endl;
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