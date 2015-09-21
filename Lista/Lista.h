//
// Created by hiko on 09-01-15.
//

#ifndef LISTA_LISTA_H
#define LISTA_LISTA_H

#include <iostream>
#include "Nodo.h"
using namespace std;


class Lista {
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
       this->f_primero();
        if (!f_lista_vacia()){
            while (this->actual->Siguiente != NULL){
                this->f_siguiente();
            }

        }
    }
public:
     ~Lista() {
        pnodo aux;
        while (this->primero){
            aux = this->primero;
            this->primero = this->primero->Siguiente;
            delete aux;
        }
        this->actual = NULL;
    }

    Lista() {
        this->actual = NULL;
        this->primero = NULL;
    }
    //agregar un nuevo elemento a la lista
//    void add(int v){
//        pnodo nuevo = new Nodo(v);
//        if (this->f_lista_vacia())
//            this->primero = nuevo;
//        else
//            this->actual->Siguiente =nuevo;
//        this->actual = nuevo;
//    }
    void add(int v){
        pnodo nuevo = new Nodo(v);
        this->f_primero();
        if (this->f_lista_vacia())
            this->primero = nuevo;
        else{
            this->f_ultimo();
            this->actual->Siguiente =  nuevo;
        }

        this->actual = nuevo;
    }

    void show(){
        pnodo aux;
        aux = this->primero;
        while (aux){
            cout << aux->Valor <<" --> ";
            aux = aux->Siguiente;
        }
    }
    pnodo search(int valor){
        pnodo aux;
        bool encontrado = false;
        if(this->f_lista_vacia()){
            aux = NULL;
        }else{
            aux = this->primero;
            while(aux && !encontrado){

                if(aux->Valor == valor){
                    encontrado = true;
                }else{
                    aux = aux->Siguiente;
                }
            }
        }
        return aux;
    }

    pnodo search_before(pnodo valor){
        pnodo aux ;
        bool encontrado = false;
        aux = this->primero;
        while(aux && !encontrado){

            if(aux->Siguiente == valor){
                encontrado = true;
            }else{
                aux = aux->Siguiente;
            }
        }
        return aux;
    }

    void delet(int valor){
        if(!this->f_lista_vacia()){
            //buscar el objeto con el valor deseado
            pnodo aux = search(valor);
            //saber  el objeto a borar no es el priero
            pnodo aux_anterior;
            if(aux != this->primero){
                aux_anterior = search_before( aux );
                aux_anterior->Siguiente = aux->Siguiente;
                delete aux;
            }else{
                this->primero = aux->Siguiente;
            }
            //buscarenterior


        }else{
            cout << "La lista esta vacia";
        }
    }

};


#endif //LISTA_LISTA_H
