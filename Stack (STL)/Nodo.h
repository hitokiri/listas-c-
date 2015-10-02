//
// Created by hiko on 09-01-15.
//

#ifndef LISTA_NODO_H
#define LISTA_NODO_H

#include "Trabajador.h"

using namespace std;

class Nodo{

private:
    trabajador Valor ;
    Nodo* Siguiente ;

public:
    Nodo(trabajador valor, Nodo* siguiente = NULL) {
        this->Valor = valor;
        this->Siguiente = siguiente;
    }

    friend class Pila;
};typedef Nodo* pnodo;
#endif //LISTA_NODO_H
