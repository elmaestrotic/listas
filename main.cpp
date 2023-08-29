#include <iostream>
#include "Lista.h"

using namespace std;

int main() {
    int valor;
    Nodo *temp;
    bool encontrado = false;
    Lista *l = new Lista();
    l->crearLista();
    l->insertarCabezaLista(913);
    l->visualizar();

    cout << "Ingrese el valor a buscar: ";
    cin >> valor;


    temp = l->buscarLista(valor);
    if (temp != NULL) {
        cout << "El valor " << temp->getDataNodo() << " se encuentra en la lista" << endl;
    } else {
        cout << "El valor " << valor << " no se encuentra en la lista" << endl;
    }

    return 0;
}
