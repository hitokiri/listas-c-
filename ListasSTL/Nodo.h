//
// Created by hiko on 09-19-15.
//

#ifndef LISTASSTL_NODO_H
#define LISTASSTL_NODO_H

#include "Trabajador.h"

using namespace std;

class Nodo{

private:
    trabajador Valor ;
//    Nodo* Anterior;
    Nodo* Siguiente ;

public:
    Nodo(trabajador valor, Nodo* siguiente = NULL) {
        this->Valor = valor;
        this->Siguiente = siguiente;
    }

    friend class Lista;
};typedef Nodo* pnodo;


#endif //LISTASSTL_NODO_H
