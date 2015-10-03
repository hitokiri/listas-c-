//
// Created by hiko on 09-01-15.
//

#ifndef LISTA_LISTA_H
#define LISTA_LISTA_H

//#include <iostream>
#include <queue>
#include "Nodo.h"
using namespace std;

class Cola {
private:
    queue<trabajador > trabaja_stack;

public:
     ~Cola() {
    }

    Cola() {

    }
    //agregar un nuevo elemento a la lista
    void insertar(trabajador trabaja){
        trabaja_stack.push(trabaja);
    }

    void sacar(){
        //mostrar el ultimo ingresado que sera el primero en salir
        trabajador trabajasor_sal = trabaja_stack.front();
        cout<<"Nombre: "<<trabajasor_sal->nombre<<endl;
        //borrar el mostrado
        trabaja_stack.pop();
    }
    void invertir(){
        cout<<"El orden de la pila a sido inverdito";
        trabaja_stack.swap(trabaja_stack);
    }




};typedef Cola * pila;


#endif //LISTA_LISTA_H
