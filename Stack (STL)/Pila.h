//
// Created by hiko on 09-01-15.
//

#ifndef LISTA_LISTA_H
#define LISTA_LISTA_H

//#include <iostream>
#include <list>
#include <stack>
#include "Nodo.h"
using namespace std;

class Pila {
private:
    stack<trabajador > trabaja_stack;

public:
     ~Pila() {
         delete trabaja_stack;
    }

    Pila() {

    }
    //agregar un nuevo elemento a la lista
    void insertar(trabajador trabaja){
        trabaja_stack.push(trabaja);
    }

    void sacar(){
        //mostrar el ultimo ingresado que sera el primero en salir
        trabaja_stack.top();
        //borrar el mostrado
        trabaja_stack.pop();
    }
    void invertir(){
        cout<<"El orden de la pila a sido inverdito";
        trabaja_stack.swap(trabaja_stack);
    }




};typedef Pila* pila;


#endif //LISTA_LISTA_H
