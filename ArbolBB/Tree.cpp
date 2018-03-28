//
// Created by deiber on 3/1/18.
//

#include "Tree.h"

// Constructor por defecto
template<typename T>
Tree<T>::Tree()
{
    raiz = NULL;
    actual = NULL;
}

// Destructor básico:
template<typename T>
Tree<T>::~Tree()
{
    Podar(raiz);
}

template<typename T>
bool Tree<T>::Vacio(Node<T> *r)
{
    return r==NULL;
}

template<typename T>
bool Tree<T>::EsHoja(Node<T> *r)
{
    return !r->derecho && !r->izquierdo;
}

// Poda: borrar todos los nodos a partir de uno, incluido
template<typename T>
void Tree<T>::Podar(Node<T>* &nodo)
{
    // Algoritmo recursivo, recorrido en postorden
    if(nodo) {
        Podar(nodo->izquierdo); // Podar izquierdo
        Podar(nodo->derecho);   // Podar derecho
        delete nodo;            // Eliminar nodo
        nodo = NULL;
    }
}

// Insertar un int en el árbol ABB
template<typename T>
void Tree<T>::Insertar(const int dat)
{
    Node<T> *padre = NULL;
    actual = raiz;
    // Buscar el int en el árbol, manteniendo un puntero al nodo padre
    while(!Vacio(actual) && dat != actual->dato) {
        padre = actual;
        if(dat > actual->dato) actual = actual->derecho;
        else if(dat < actual->dato) actual = actual->izquierdo;
    }

    // Si se ha encontrado el elemento, regresar sin insertar
    if(!Vacio(actual)) return;
    // Si padre es NULL, entonces el árbol estaba vacío, el nuevo nodo será el nodo raiz
    if(Vacio(padre)) raiz = new Node<T>(dat);
        // Si el int es menor que el que contiene el nodo padre, se inserta a la rama izquierda
    else if(dat < padre->dato) padre->izquierdo = new Node<T>(dat);
        // Si el int es mayor que el que contiene el nodo padre, se inserta a la rama derecha
    else if(dat > padre->dato) padre->derecho = new Node<T>(dat);
}

// Eliminar un elemento de un árbol ABB
template<typename T>
void Tree<T>::Borrar(const int dat)
{
    Node<T> *padre = NULL;
    Node<T> *nodo;
    int aux;

    actual = raiz;
    // Mientras sea posible que el valor esté en el árbol
    while(!Vacio(actual)) {
        if(dat == actual->dato) { // Si el valor está en el nodo actual
            if(EsHoja(actual)) { // Y si además es un nodo hoja: lo borramos
                if(padre) // Si tiene padre (no es el nodo raiz)
                    // Anulamos el puntero que le hace referencia
                    if(padre->derecho == actual) padre->derecho = NULL;
                    else if(padre->izquierdo == actual) padre->izquierdo = NULL;
                delete actual; // Borrar el nodo
                actual = NULL;
                return;
            }
            else { // Si el valor está en el nodo actual, pero no es hoja
                // Buscar nodo
                padre = actual;
                // Buscar nodo más izquierdo de rama derecha
                if(actual->derecho) {
                    nodo = actual->derecho;
                    while(nodo->izquierdo) {
                        padre = nodo;
                        nodo = nodo->izquierdo;
                    }
                }
                    // O buscar nodo más derecho de rama izquierda
                else {
                    nodo = actual->izquierdo;
                    while(nodo->derecho) {
                        padre = nodo;
                        nodo = nodo->derecho;
                    }
                }
                // Intercambiar valores de no a borrar u nodo encontrado
                // y continuar, cerrando el bucle. El nodo encontrado no tiene
                // por qué ser un nodo hoja, cerrando el bucle nos aseguramos
                // de que sólo se eliminan nodos hoja.
                aux = actual->dato;
                actual->dato = nodo->dato;
                nodo->dato = aux;
                actual = nodo;
            }
        }
        else { // Todavía no hemos encontrado el valor, seguir buscándolo
            padre = actual;
            if(dat > actual->dato) actual = actual->derecho;
            else if(dat < actual->dato) actual = actual->izquierdo;
        }
    }
}

// Recorrido de árbol en inorden
template<typename T>
void Tree<T>::InOrden(void (*func)(int&) , Node<T> *nodo, bool r)
{
    if(r) nodo = raiz;
    if(nodo->izquierdo) InOrden(func, nodo->izquierdo, false);
    func(nodo->dato);
    if(nodo->derecho) InOrden(func, nodo->derecho, false);
}

// Recorrido de árbol en preorden
template<typename T>
void Tree<T>::PreOrden(void (*func)(int&), Node<T> *nodo, bool r)
{
    if(r) nodo = raiz;
    func(nodo->dato);
    if(nodo->izquierdo) PreOrden(func, nodo->izquierdo, false);
    if(nodo->derecho) PreOrden(func, nodo->derecho, false);
}

// Recorrido de árbol en postorden
template<typename T>
void Tree<T>::PostOrden(void (*func)(int&), Node<T> *nodo, bool r)
{
    if(r) nodo = raiz;
    if(nodo->izquierdo) PostOrden(func, nodo->izquierdo, false);
    if(nodo->derecho) PostOrden(func, nodo->derecho, false);
    func(nodo->dato);
}

// Buscar un valor en el árbol
template<typename T>
bool Tree<T>::Buscar(const int dat)
{
    actual = raiz;

    // Todavía puede aparecer, ya que quedan nodos por mirar
    while(!Vacio(actual)) {
        if(dat == actual->dato) return true; // int encontrado
        else if(dat > actual->dato) actual = actual->derecho; // Seguir
        else if(dat < actual->dato) actual = actual->izquierdo;
    }
    return false; // No está en árbol
}

// Calcular la altura del nodo que contiene el int dat
template<typename T>
int Tree<T>::Altura(const int dat)
{
    int altura = 0;
    actual = raiz;

    // Todavía puede aparecer, ya que quedan nodos por mirar
    while(!Vacio(actual)) {
        if(dat == actual->dato) return altura; // int encontrado
        else {
            altura++; // Incrementamos la altura, seguimos buscando
            if(dat > actual->dato) actual = actual->derecho;
            else if(dat < actual->dato) actual = actual->izquierdo;
        }
    }
    return -1; // No está en árbol
}

template<typename T>
int Tree<T>::ValorActual()
{
    return actual->dato;
}

template<typename T>
void Tree<T>::Raiz()
{
    actual = raiz;
}

// Contar el número de nodos
template<typename T>
const int Tree<T>::NumeroNodos()
{
    contador = 0;

    auxContador(raiz); // FUnción auxiliar
    return contador;
}

// Función auxiliar para contar nodos. Función recursiva de recorrido en
//   preorden, el proceso es aumentar el contador
template<typename T>
void Tree<T>::auxContador(Node<T> *nodo)
{
    contador++;  // Otro nodo
    // Continuar recorrido
    if(nodo->izquierdo) auxContador(nodo->izquierdo);
    if(nodo->derecho)   auxContador(nodo->derecho);
}

// Calcular la altura del árbol, que es la altura del nodo de mayor altura.
template<typename T>
const int Tree<T>::AlturaArbol()
{
    altura = 0;

    auxAltura(raiz, 0); // Función auxiliar
    return altura;
}

// Función auxiliar para calcular altura. Función recursiva de recorrido en
// postorden, el proceso es actualizar la altura sólo en nodos hojas de mayor
// altura de la máxima actual
template<typename T>
void Tree<T>::auxAltura(Node<T> *nodo, int a)
{
    // Recorrido postorden
    if(nodo->izquierdo) auxAltura(nodo->izquierdo, a+1);
    if(nodo->derecho)   auxAltura(nodo->derecho, a+1);
    // Proceso, si es un nodo hoja, y su altura es mayor que la actual del
    // árbol, actualizamos la altura actual del árbol
    if(EsHoja(nodo) && a > altura) altura = a;
}