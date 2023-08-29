//
// Created by Alexander on 27/08/2022.
//
#include "Nodo.h"

Nodo::Nodo(int t)
{
    dato = t;
    enlace = 0; // 0 es el puntero NULL en C++
}
Nodo::Nodo(int d, Nodo* n) // crea el nodo y lo enlaza a n
{
    dato = d;
    enlace = n;
}

int Nodo::getDataNodo( ) const
{
    return dato;
}

Nodo *Nodo::getEnlaceNodo( ) const
{
    return enlace;
}

void Nodo:: ponerEnlace(Nodo* sgte)
{
    enlace = sgte;
}