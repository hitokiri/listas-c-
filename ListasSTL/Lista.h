//
// Created by hiko on 09-16-15.
//

#ifndef LISTASSTL_LISTA_H
#define LISTASSTL_LISTA_H

#include <list>
#include "Nodo.h"
using namespace std;

class Lista {
private:
   list<trabajador > Trabaja;
public:


    ~Lista() {

    }

    //agregar un nuevo elemento a la lista
//    void insertar(char* nombre, char* ape, float S){
//        trabajador Trabaja = new Trabajador(nombre, ape, NULL, S);
//        pnodo nuevo = new Nodo(Trabaja);
//        if (this->f_lista_vacia())
//            this->primero = nuevo;
//        else
//            this->actual->Siguiente =nuevo;
//        this->actual = nuevo;
//    }

    void insertar(char* nombre, char* ape, float S, pnodo pos){

    }

    void insertar(trabajador t){
        Trabaja.push_back(t);
    }

    void insertar(trabajador t, list<trabajador >::iterator pos ){
        Trabaja.insert(pos,t);
    }

    void Mostrar(){
        list<trabajador >::iterator i;
        for(i=Trabaja.begin(); i != Trabaja.end(); ++i){
            cout << (*i)->nombre << " ";
        }
    }

    void Mostrar(list<trabajador >::iterator trabajadorb){

        if ((trabajadorb) != Trabaja.end()){
            cout<<"nombre: " << (*trabajadorb)->nombre<< endl;
            cout<<"apellido: " << (*trabajadorb)->apellidos<< endl;
        }
        else{
            cout<<"No se pudo mostrar ninguna informacion";
        }



    }
    //metodo buscar prueba con regresado de tipo trabajador
//    trabajador Buscar(char *nombre, char *apellidos){
//        list<trabajador >::iterator i;
//        trabajador trabajadorb = NULL;
//        for(i=Trabaja.begin(); i != Trabaja.end(); ++i){
//            if((*i)->nombre == nombre && (*i)->apellidos == apellidos ){
//                return *i;
//            }
//        }
//        return trabajadorb;
//    }

    //metodo buscar master
    list<trabajador >::iterator Buscar(char *nombre, char *apellidos){
        list<trabajador >::iterator i;
        trabajador trabajadorb = NULL;
        for(i=Trabaja.begin(); i != Trabaja.end(); ++i){
            if((*i)->nombre == nombre && (*i)->apellidos == apellidos ){
                return i;
            }
        }
        return i;
    }

    void borrar(char *nombre, char *apellidos){


    }

};



#endif //LISTASSTL_LISTA_H
