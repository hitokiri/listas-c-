//
// Created by hiko on 11-28-15.
//

#ifndef TALLERARBOLES_NODO_H
#define TALLERARBOLES_NODO_H


class Nodo {
public:
    // Constructor:
    Nodo(const int dat, Nodo *pad=NULL, Nodo *izq=NULL, Nodo *der=NULL) :
            dato(dat), padre(pad), izquierdo(izq), derecho(der), FE(0) {}
    // Miembros:
    int dato;
    int FE;
    Nodo *izquierdo;
    Nodo *derecho;
    Nodo *padre;
    friend class AVL;
};

#endif //TALLERARBOLES_NODO_H
