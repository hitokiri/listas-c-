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
        if(pos != Trabaja.end()){
            Trabaja.insert(pos,t);
        } else{
            cout<<"no se pudo agregar el registro porque \n no se pudo encontrar la posicion proporcionada"<<endl;
        }

    }

    void Mostrar(){
        list<trabajador >::iterator i;
        for(i=Trabaja.begin(); i != Trabaja.end(); ++i){
            cout << (*i)->nombre << (*i)->apellidos<< (*i)->sueldo;
            (*i)->fechanac->MostrarFecha();
        }
    }

    void Mostrar(list<trabajador >::iterator trabajadorb){
        //compara si el iterador enviado llego al final NULL
        //ya que si es asi se entiende que no encontro nada
        if (trabajadorb != Trabaja.end()){
            //se utiliza el () para hacer un overload y poder tener acceso
            cout<<"nombre: " << (*trabajadorb)->nombre<< endl;
            cout<<"apellido: " << (*trabajadorb)->apellidos<< endl;
            cout<<"salario: " << (*trabajadorb)->sueldo<< endl;
            cout<<"Fecha de nacimiento: "  ;
            (*trabajadorb)->fechanac->MostrarFecha();

        }
        else{
            cout<<"No se pudo mostrar ninguna informacion"<<endl;
        }



    }

    //metodo buscar master
    list<trabajador >::iterator Buscar(char *nombre, char *apellidos){
        list<trabajador >::iterator i;
        for(i=Trabaja.begin(); i != Trabaja.end(); ++i){
            if(strcmp(nombre,(*i)->nombre) == 0 && strcmp(apellidos,(*i)->apellidos) == 0 ){
                return i;
            }
        }
        return i;
    }

    void borrar(list<trabajador >::iterator trabajadorb){
       if(trabajadorb != ultimo()){
           Trabaja.remove(*trabajadorb);
       }else{
           cout<<"El trabajador ingresado no existe";
       }


    }

//para poder tener acceso a el ultimo miembro de la lista
    list<::Trabajador *>::iterator ultimo (){
       return  Trabaja.end();
    }
};



#endif //LISTASSTL_LISTA_H
