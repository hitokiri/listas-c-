//
// Created by hiko on 09-09-15.
//

#ifndef LISTA_PERSONA_H
#define LISTA_PERSONA_H


#include <string.h>
#include "Fecha.h"
#include "Trabajador.h"
#include "Nodo.h"

class Persona {
private:
    char *nombre;
    char *apellidos;
    fecha_ fechanac;
    char codigo[];
public:
    //Persona() { }

    Persona(char *nombre, char* apellidos, const fecha_ fechanac)  {
        this->nombre = nombre;
        this->apellidos = apellidos;
        this->fechanac = fechanac;
    }

/*Persona(char N[]="", char A[]="", fecha_ fn) {
        strcpy(this->nombre,N);
        strcpy(this->apellidos,A);
        this->fechanac = fn;
    }*/



    void MostrarNombres(){
        cout<<this->nombre<<" "<<this->apellidos;
    }
    void MostrarNombresMayusculas(){

    }
    void MostrarNombresMinusculas(){

    }
    void MostrarFechaNac(){
        cout<< "La fecha de nacimiento es ";
        this->fechanac->MostrarFecha();
    }
    void getCodigo(){

    }
    friend class Trabajador;
    friend class Pila;
};typedef Persona* persona;


#endif //LISTA_PERSONA_H
