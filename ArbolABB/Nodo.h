//
// Created by hiko on 11-04-15.
//

#ifndef ARBOLABB_NODO_H
#define ARBOLABB_NODO_H

using namespace std;

class Nodo {
public:
    // Constructor:
    Nodo(const int dat, Nodo *izq=NULL, Nodo *der=NULL) :
            dato(dat), izquierdo(izq), derecho(der) {}
    // Miembros:
    int dato;
    Nodo *izquierdo;
    Nodo *derecho;
    friend class ArbolABB;
};typedef Nodo* pnodo;


#endif //ARBOLABB_NODO_H
