#ifndef LISTADBL_H_INCLUDED
#define LISTADBL_H_INCLUDED
#include "Nodo.h"
class ListaDbl{
    private:
        pnodo elemento;
        bool ListaVacia(){
            return this->elemento==NULL;
        }
    public:
        ListaDbl(){
            this->elemento = NULL;
        }
        ~ListaDbl(){
           pnodo aux;
           this->Primero();
           while(this->elemento) {
              aux = this->elemento;
              this->elemento = this->elemento->Siguiente;
              delete aux;
           }
        }
        //Insercion al principio y Insercion al final
        void Insertar(int v, bool pos=true){
            pnodo nuevo = new Nodo(v);
            if (pos){
                //insertar al principio
            }
            else{
                //Insertar al final
                this->Ultimo();
                if (ListaVacia()){
                    this->elemento = nuevo;
                }
                else{
                    this->elemento->Siguiente = nuevo;
                    nuevo->Anterior = this->elemento;
                }
            }
        }
        //Insercion despues del dato Buscado
        void Insertar(int v, int datoB, bool pos=true){
            pnodo nuevo = new Nodo(v);
            pnodo posNodo = this->Buscar(datoB);
            if (posNodo){
                if (pos){
                    //Insercion antes del dato
                }
                else{
                    //Insercion despues del dato
                    if (posNodo->Siguiente){
                        nuevo->Siguiente = posNodo->Siguiente;
                        posNodo->Siguiente->Anterior = nuevo;

                        posNodo->Siguiente = nuevo;
                        nuevo->Anterior = posNodo;
                    }
                    else{
                        posNodo->Siguiente = nuevo;
                        nuevo->Anterior = posNodo;
                    }
                }
            }
            else{
                if (ListaVacia()){
                    this->elemento = nuevo;
                }
            }
        }
        pnodo Buscar(int v){
            bool encontrado=false;
            this->Primero();
            while (this->elemento && !encontrado){
                if (this->elemento->Valor == v){
                    encontrado = true;
                }
                else{
                    this->Siguiente();
                }
            }
            return this->elemento;
        }
        void Borrar(int v){}
        void Modificar(int v, int n){}
        void Mostrar(int orden=1){
            if (orden==1){
                //Ascendente
                this->Primero();
                while (this->elemento){
                    cout << this->elemento->Valor << "-->";
                    this->Siguiente();
                }
            }
            else{
                //Descendente
            }
            cout << "NULL\n";
        }
        bool Actual(){
            return this->elemento != NULL;
        }
        int ValorActual(){
            return this->elemento->Valor;
        }
        void Anterior(){
            if (this->elemento)
                this->elemento = this->elemento->Anterior;
        }
        void Siguiente(){
            if (this->elemento)
                this->elemento = this->elemento->Siguiente;
        }
        void Primero(){
            while (this->elemento && this->elemento->Anterior)
                this->elemento = this->elemento->Anterior;
        }
        void Ultimo(){
            while (this->elemento && this->elemento->Siguiente)
                this->elemento = this->elemento->Siguiente;
        }
};
#endif // LISTADBL_H_INCLUDED
