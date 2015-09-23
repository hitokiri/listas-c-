// Standard Template Library example

#include <iostream>
#include <list>
#include "Lista.h"
using namespace std;
/*
 * Forma de llenar los datos
 * ejemplo
 * nombre hiko
 * apellido hitokiri
 * sueldo 232333
 * fecha 24 4 1980
 *
 * Nota:
 * -l
 * La fecha va separda por espacios no esta valdiada con tra el reloj del sistema asi que
 * no verifica si el año ingresado es mayor al actual
 *
 * - existe un system("clear") el cual debera de ser cambiado a "cls" si se esta en windows
 *
 * - No esta validado los campos solo tiene el funcionamiento basico requerido
 *
 * - Alguna pregunta escribir a lastvnm@gmail.com
 * */

// Simple example uses type int
void insertar_trabajador();

void Buscar_trabajador();

void Borrar_trabajador();

void Agregar_pos();

Lista lst;

int main() {

    //esta parte de codigo es para probar todas las opciones
//    trabajador trabajador1;
//    fecha_ fecha;
//    fecha = new Fecha(20,02,2015);
//    char* nombref = "Edgar";
//    char* apellidof = "Joaquin";
//    char* nombre = "hiko";
//    char* apellido = "hitokiri";
//    trabajador1 = new Trabajador(nombre, apellido, fecha, 1000);
//    lst.insertar(trabajador1);
//    char* nombre1 = "carlos";
//    char* apellido1 = "ceron";
//    trabajador1 = new Trabajador(nombre1, apellido1, fecha, 1000);
//    lst.insertar(trabajador1);
//    lst.Mostrar();
//    cout<<endl;
//
//    lst.Mostrar(lst.Buscar(nombre,apellido));
//    cout<<endl;
//
//    trabajador1 = new Trabajador(nombref, apellidof, fecha, 1000);
//    lst.insertar(trabajador1,lst.Buscar(nombre1,apellido1));
//    lst.Mostrar();
//    cout<<endl;
//    cout<<"Lista mas borrado"<<endl;
//    lst.borrar (lst.Buscar(nombre1,apellido1));
//    lst.Mostrar();
//    lst.ultimo();
    int op;
    do{
        system("clear");

        cout << "*************************************\n";
        cout << "*           MENU DE OPCIONES        *\n";
        cout << "*************************************\n";
        cout << "* 1. Agregar Trabajador             *\n";
        cout << "* 2. Buscar                         *\n";
        cout << "* 3. Eliminar Trabajador            *\n";
        cout << "* 4. Mostrar Trabajadores           *\n";
        cout << "* 5. Agregar en Posicion            *\n";
        cout << "* para salir cualquier numero > 6   *\n";
        cout << "*************************************\n";
        cout << "\nDigite su opcion: ";
        cin >> op;

        switch(op){
            case 1:
                cout << "\nAgregar Trabajador \n\n";
                insertar_trabajador();
                system("clear");//esto es en linux para win debe cambiarse a cls
                break;

            case 2:
                cout << "\nBuscar Trabajador \n\n";
                Buscar_trabajador();
                system("clear");
                break;

            case 3:
                cout << "\nBuscar Trabajador \n\n";
                Borrar_trabajador();
                system("clear");
                break;

            case 4:
                lst.Mostrar();
                break;
                
            case 5:
                Agregar_pos();
                system("clear");
                break;

        }

        cin.get();
        }while(op < 7);

    return 0;
}

void insertar_trabajador( ){
    char* Nombre;
    char* Apellido;
    Nombre = new char[15];
    Apellido = new char[15];
    int day,month,year;
    double sueldo;
    trabajador tr;
    fecha_ fecha;
    cout << "\nIngrese el nombre: ";
    cin >> Nombre;
    cout << "\nIngrese el apellido: ";
    cin >> Apellido;
    cout << "\nIngrese el Sueldo: ";
    cin >> sueldo;
    do{
        cout << "\nIngrese Fecha de Nacimiento: ";
        cin >> day>> month>> year;
        fecha = new Fecha(day,month, year);
    }while (!fecha->esValida());
    tr = new Trabajador(Nombre,Apellido,fecha ,sueldo);
    lst.insertar(tr);
}

void Buscar_trabajador(){
    char* Nombre;
    char* Apellido;
    Nombre = new char[15];
    Apellido = new char[15];
    cout << "\nIngrese el nombre: ";
    cin >> Nombre;
    cout << "\nIngrese el apellido: ";
    cin >> Apellido;
    lst.Mostrar(lst.Buscar(Nombre,Apellido));
}

void Borrar_trabajador(){
    char* Nombre;
    char* Apellido;
    Nombre = new char[15];
    Apellido = new char[15];
    cout << "\nIngrese el nombre: ";
    cin >> Nombre;
    cout << "\nIngrese el apellido: ";
    cin >> Apellido;
    lst.borrar(lst.Buscar(Nombre,Apellido));
}

void Agregar_pos(){
    char* Nombre;
    char* Apellido;
    Nombre = new char[15];
    Apellido = new char[15];
    char* Nombre_b;
    char* Apellido_b;
    Nombre_b = new char[15];
    Apellido_b = new char[15];
    int day,month,year;
    double sueldo;
    trabajador tr;
    fecha_ fecha;
    cout << "\nIngrese el nombre: ";
    cin >> Nombre;
    cout << "\nIngrese el apellido: ";
    cin >> Apellido;
    cout << "\nIngrese el Sueldo: ";
    cin >> sueldo;
    do{
        cout << "\nIngrese Fecha de Nacimiento: ";
        cin >> day>> month>> year;
        fecha = new Fecha(day,month, year);
    }while (!fecha->esValida());
    
    cout<<"Ingrese el nombre y apellido de la posicion "<<endl;
    cout << "\nIngrese el nombre: ";
    cin >> Nombre_b;
    cout << "\nIngrese el apellido: ";
    cin >> Apellido_b;
    tr = new Trabajador(Nombre,Apellido,fecha ,sueldo);
    lst.insertar(tr,lst.Buscar(Nombre_b,Apellido_b));
}




/*
int main(){
    //system("color 80");
    list<int> L;
    L.push_back(0);              // Insert a new element at the end
    L.push_front(0);             // Insert a new element at the beginning
    L.insert(++L.begin(),2);     // Insert "2" before position of first argument
    // (Place before second argument)
    L.push_back(5);
    L.push_back(6);

    list<int>::iterator i;

    for(i=L.begin(); i != L.end(); ++i) cout << *i << " ";
    cout << endl;
    return 0;
}
*/


                