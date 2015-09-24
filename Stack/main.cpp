#include <iostream>
#include "Pila.h"
using namespace std;

int main() {
    pila pl;
    pl = new Pila;
    fecha_ fecha;
    fecha = new Fecha(12,3,2015);
    char* nombre = "hiko";
    char* apellido = "hitokiri";
    trabajador trabaja = new Trabajador(nombre, apellido, fecha, 23);
    pl->insertar(trabaja);
    char* nombre1 = "lol";
    char* apellido1 = "sisi";
    trabajador trabaja1 = new Trabajador(nombre1, apellido1, fecha, 23);
    pl->insertar(trabaja1);
    char* nombre2 = "forigua";
    char* apellido2 = "london";
    trabajador trabaja2 = new Trabajador(nombre2, apellido2, fecha, 23);
    pl->insertar(trabaja2);
    pl->Mostrar();

    pl->sacar();
    cout<<"Elemento despues de borrado "<<endl;

    pl->Mostrar();

    cout<<endl<<"otro agregado"<<endl;
    char* nombre3 = "carlos";
    char* apellido3 = "ramon";
    trabajador trabaja3 = new Trabajador(nombre3, apellido3, fecha, 23);
    pl->insertar(trabaja3);
    pl->Mostrar();
    return 0;
}