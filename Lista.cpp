//
// Created by Alexander on 27/08/2022.
//

#include "Lista.h"
#include "Nodo.h"
#include <iostream>

using namespace std;

void Lista::Lista::crearLista() {
    int x;
    primero = NULL;
    cout << "Ingrese -1  para finalizar la lista: " << endl;
    do {
        cin >> x;
        if (x != -1) {
            primero = new Nodo(x, primero);
        }
    } while (x != -1);
}

Lista::Lista() { primero = NULL; }//inicializamos el puntero primero con NULL al momento de crear la lista, es decir este es el puntero head cuando se crea la lista}

void Lista::insertarCabezaLista(int entrada) {
    Nodo *nuevo;
    nuevo = new Nodo(entrada);
    nuevo->ponerEnlace(primero); // enlaza nuevo con primero
    primero = nuevo; // mueve primero y apunta al nuevo nodo
}

void Lista::insertarUltimo(int entrada) {
    Nodo *ultimo = this->getUltimo();//seobtine la dirmem del último nodo
    ultimo->ponerEnlace(new Nodo(entrada));//se crea el nuevo nodo con el valor de entrada
}

Nodo *Lista::getUltimo() {
    Nodo *n = primero;
    if (n == NULL) throw "Error, lista vacía";
    while (n->getEnlaceNodo() != NULL) n = n->getEnlaceNodo();
    return n;
}

void Lista::insertarLista(Nodo *anterior, int entrada) {
    Nodo *nuevo;
    nuevo = new Nodo(entrada);
    nuevo->ponerEnlace(anterior->getEnlaceNodo());
    anterior->ponerEnlace(nuevo);
}

Nodo *Lista::buscarLista(int destino) {
    Nodo *temp;
    for (temp = primero; temp != NULL; temp = temp->getEnlaceNodo()) {
        if (destino == temp->getDataNodo())
            return temp;
    }
    return NULL;
}


void Lista::visualizar() {
    Nodo *n;
    int k = 0;
    n = primero;
    while (n != NULL) {
        char c;
        k++;
        c = (k % 15 != 0 ? ' ' : '\n');
        cout << n->getDataNodo() << "|" << c;
        n = n->getEnlaceNodo();
    }

}

void Lista::eliminar(int entrada) {
    Nodo *actual, *anterior;
    bool encontrado;
    actual = primero;
    anterior = NULL;
    encontrado = false;
    // búsqueda del nodo y del anterior
    while ((actual != NULL) && !encontrado) {
        encontrado = (actual->getDataNodo() == entrada);
        if (!encontrado) {
            anterior = actual;
            actual = actual->getEnlaceNodo();
        }
    }
    // enlace del nodo anterior con el siguiente
    if (actual != NULL) {
        // distingue entre cabecera y resto de la lista
        if (actual == primero) {
            primero = actual->getEnlaceNodo();
        } else {
            anterior->ponerEnlace(actual->getEnlaceNodo());
        }
        delete actual;
    }



}