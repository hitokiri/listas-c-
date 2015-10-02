#include <iostream>
#include "Cola.h"
using namespace std;
/*
 * se dejo un metodo mostrar para demostrar que la insecion y el borrado y mostrado de los datos
 * es como debe de ser el funcionamiento del mismo.
 *
 * para preguntas lastvnm@gmail.com
 * */
int main() {
    pila pl;
    pl = new Cola;
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
    char* nombre2 = "borrado";
    char* apellido2 = "nuevo";
    trabajador trabaja2 = new Trabajador(nombre2, apellido2, fecha, 23);
    pl->insertar(trabaja2);

    cout<<"Elemento despues de borrado "<<endl;
    pl->sacar();

    cout<<endl<<"otro agregado"<<endl;
    char* nombre3 = "carlos";
    char* apellido3 = "ramon";
    trabajador trabaja3 = new Trabajador(nombre3, apellido3, fecha, 23);
    pl->insertar(trabaja3);
    pl->Mostrar();
    return 0;
}