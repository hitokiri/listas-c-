//
// Created by hiko on 09-09-15.
//

#ifndef LISTA_TRABAJADOR_H
#define LISTA_TRABAJADOR_H


#include "Persona.h"

class Trabajador :public Persona{
private:
    float sueldo;
    float diss;
    float dIsr;
    float totalAPagar;

public:
    Trabajador(char *nombre, char *apellidos, const fecha_ fechanac, float sueldo) : Persona(nombre, apellidos,
                                                                                             fechanac) {

        this->sueldo =sueldo;
    }

/*   Trabajador(char N[], char A[], fecha_ f, float sueldo){
        this->nombre = N;
        this->apellidos = A;
        this->fechanac = f;
        this->sueldo = sueldo;
    }*/

    void MostrarNombresApellidos(){

    }
    float getSueldo(){

    }
    float getIss(){

    }
    float getAfp(){

    }
    float getIrs(){

    }
    float getTotalPagar(){

    }
    friend class Nodo;
    friend class Pila;
};typedef Trabajador* trabajador;


#endif //LISTA_TRABAJADOR_H
