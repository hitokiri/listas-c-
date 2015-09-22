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
    //para poder tener acceso a el ultimo miembro de la lista
    list<::Trabajador *>::iterator ultimo (){
       return  Trabaja.end();
    }
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
        if(pos != Trabaja.end()){
            Trabaja.insert(pos,t);
        } else{
            cout<<"no se pudo agregar el registro porque \n no se pudo encontrar la posicion proporcionada"<<endl;
        }

    }

    void Mostrar(){
        list<trabajador >::iterator i;
        for(i=Trabaja.begin(); i != Trabaja.end(); ++i){
            cout << (*i)->nombre << " ";
        }
    }

    void Mostrar(list<trabajador >::iterator trabajadorb){
        //compara si el iterador enviado llego al final NULL
        //ya que si es asi se entiende que no encontro nada
        if (trabajadorb != ultimo()){
            //se utiliza el () para hacer un overload y poder tener acceso
            cout<<"nombre: " << (*trabajadorb)->nombre<< endl;
            cout<<"apellido: " << (*trabajadorb)->apellidos<< endl;
        }
        else{
            cout<<"No se pudo mostrar ninguna informacion"<<endl;
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
