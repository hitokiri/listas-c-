//
// Created by hiko on 09-01-15.
//

#ifndef LISTA_NODO_H
#define LISTA_NODO_H


class Nodo{

private:
    int Valor;
//    Nodo* Anterior;
    Nodo* Siguiente ;

public:
    Nodo(int valor, Nodo* siguiente = NULL) {
        this->Valor = valor;
        this->Siguiente = siguiente;
    }

    friend class Lista;
};typedef Nodo* pnodo;
#endif //LISTA_NODO_H
