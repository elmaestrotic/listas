//
// Created by Alexander on 27/08/2022.
//

#ifndef LISTICAS_NODO_H
#define LISTICAS_NODO_H


class Nodo {
protected:
    int dato;
    Nodo *enlace;
public:
    Nodo(int t);

    Nodo(int p, Nodo *n);

    int getDataNodo() const;

    Nodo *getEnlaceNodo() const;


    void ponerEnlace(Nodo *sgte);

};

#endif //LISTICAS_NODO_H
