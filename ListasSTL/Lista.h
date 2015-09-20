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

    void insertar(trabajador t, pnodo pos ){
      if (Trabaja.empty()){
          Trabaja.push_back(t);
      }else if(!pos){
          Trabaja.push_back(t);
      }else{

      }
    }

    void Mostrar(){
        list<trabajador >::iterator i;
        trabajador reccorer;
        for(i=Trabaja.begin(); i != Trabaja.end(); ++i){
            reccorer = *i;
            cout << reccorer->nombre << " ";
        }
    }
    //encargada de mostrar lo buscado con search
    void Buscar(char *nombre, char *apellidos){

    }

    pnodo search(char *nombre, char *apellidos){

    }



    void delet(char *nombre, char *apellidos){





    }

};



#endif //LISTASSTL_LISTA_H
