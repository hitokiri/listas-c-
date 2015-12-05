//
// Created by hiko on 11-28-15.
//

#ifndef TALLERARBOLES_NODO_H
#define TALLERARBOLES_NODO_H


class Nodo {
public:
    // Constructor:
//    Nodo(const int dat, Nodo *pad=NULL, Nodo *izq=NULL, Nodo *der=NULL) :
//            dato(dat), padre(pad), izquierdo(izq), derecho(der), FE(0) {}

    Nodo(const char *dato, Nodo *izquierdo=NULL, Nodo *derecho=NULL, Nodo *padre=NULL) :
            dato(dato), izquierdo(izquierdo),derecho(derecho), padre(padre) { }

// Miembros:
//    int dato;
    const char *dato;
    int FE;
    Nodo *izquierdo;
    Nodo *derecho;
    Nodo *padre;
    friend class AVL;
};typedef Nodo* pNodo;

#endif //TALLERARBOLES_NODO_H
