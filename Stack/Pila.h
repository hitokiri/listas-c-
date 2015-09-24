//
// Created by hiko on 09-01-15.
//

#ifndef LISTA_LISTA_H
#define LISTA_LISTA_H

//#include <iostream>
#include "Nodo.h"
using namespace std;

class Pila {
private:
    pnodo primero;
    pnodo actual;
    bool f_lista_vacia(){
        return (this->primero==NULL);
    }
    void f_primero(){
        this->actual = this->primero;
    }
    void f_siguiente(){
        this->actual = this->actual->Siguiente;
    }

    void f_ultimo(){
        f_primero();
        if (!f_lista_vacia()){
            while (this->actual->Siguiente != NULL){
                f_siguiente();
            }
        }
    }

public:
     ~Pila() {
        pnodo aux;
        while (this->primero){
            aux = this->primero;
            this->primero = this->primero->Siguiente;
            delete aux;
        }
        this->actual = NULL;
    }

    Pila() {
        this->actual = NULL;
        this->primero = NULL;
    }
    //agregar un nuevo elemento a la lista
    void insertar(trabajador trabaja){
        pnodo nuevo = new Nodo(trabaja);
        if (this->f_lista_vacia())
            this->primero = nuevo;
        else
//            this->f_ultimo();
            this->actual->Siguiente =nuevo;
        this->actual = nuevo;
    }

    void sacar(){
        this->f_ultimo();
        pnodo aux ;
        bool encontrado = false;
        aux = this->primero;
        while(aux && !encontrado){
            if(aux->Siguiente == this->actual){
                encontrado = true;
                aux->Siguiente = NULL;
            }else{
                aux = aux->Siguiente;
            }
        }
        if(this->actual == this->primero){
            this->primero = NULL;
            this->actual = NULL;
        }else{
            cout<<endl<<"*******************************************"<<endl;
            cout<< actual->Valor->nombre<<" "<<actual->Valor->apellidos<<" ";
            actual->Valor->fechanac->MostrarFecha();
            cout<<actual->Valor->sueldo<<endl;
            cout<<"*******************************************"<<endl;
            delete this->actual;
            this->actual = aux;
        }

//        cout<< this->actual->Valor->nombre<<endl;
    }

    void Mostrar(){
        pnodo aux;
        aux = this->primero;
        cout<<"Nombre   Apellidos    Sueldo "<<endl;
        while (aux){
            cout << aux->Valor->nombre<<"   "<<aux->Valor->apellidos<<"      "<<aux->Valor->sueldo <<endl;
             //aux->Valor->MostrarNombres();
            //aux->Valor->MostrarFechaNac();
            aux = aux->Siguiente;
        }
    }

};typedef Pila* pila;


#endif //LISTA_LISTA_H
