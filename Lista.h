//
// Created by Alexander on 27/08/2022.
//

#ifndef LISTICAS_LISTA_H
#define LISTICAS_LISTA_H


#include <cstddef>
#include "Nodo.h"

class Lista {
protected:
    Nodo *primero;//primero es un atributo. Es un puntero de tipo Nodo
public:

    Lista();//Constructor de la lista. Al crearse la lista se debe inicializar el puntero *primero (head)  de modo que apunte a NULL

    void crearLista();

    void insertarCabezaLista(int entrada);

    void insertarUltimo(int entrada);

    //void ultimo(int entrada);

    void insertarLista(int entrada);

    void insertarLista(Nodo* anterior, int entrada);//especial

    Nodo *buscarLista(int destino);

    void eliminar(int entrada);

    Nodo *getUltimo();

    void visualizar();
};


#endif //LISTICAS_LISTA_H
