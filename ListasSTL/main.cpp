// Standard Template Library example

#include <iostream>
#include <list>
#include "Lista.h"
#include "Trabajador.h"
#include "Fecha.h"
using namespace std;

// Simple example uses type int
void  insertar_trabajador();
Lista traba;
list<trabajador> Trabaja;
int main() {

    Lista saludo;

    //saludo.add(1);
    //saludo.add(3);
    //saludo.add(2);
    //saludo.add(4);
    //saludo.show();
//    cout<< "lolol";
    // cout << "Hello, World!" << endl;
//    fecha_  fecha = new Fecha(1,2,3);
//    char *n = "hiko";
//    char *a = "hitokiri";
//    float s= 12;
//    saludo.insertar(n,a,s);
//    char *n1 = "hiko11";
//    char *a1 = "hitokiri";
//    float s1= 12;
//    saludo.insertar(n1,a1,s);
//    saludo.Mostrar();
//    cin.get();
    Lista lst;
    trabajador trabajador1;
    fecha_ fecha;
    fecha = new Fecha(20,02,2015);
    char* nombref = "Edgar";
    char* apellidof = "Joaquin";
    char* nombre = "hiko";
    char* apellido = "hitokiri";
    trabajador1 = new Trabajador(nombre, apellido, fecha, 1000);
    lst.insertar(trabajador1);
    char* nombre1 = "carlos";
    char* apellido1 = "ceron";
    trabajador1 = new Trabajador(nombre1, apellido1, fecha, 1000);
    lst.insertar(trabajador1);
    lst.Mostrar();
    cout<<endl;

    lst.Mostrar(lst.Buscar(nombre1,apellido));
    cout<<endl;

    trabajador1 = new Trabajador(nombref, apellidof, fecha, 1000);
    lst.insertar(trabajador1,lst.Buscar(nombre1,apellido1));
    lst.Mostrar();

    int op;
//
//    do{
//        system("cls");
//
//        cout << "*************************************\n";
//        cout << "*           MENU DE OPCIONES        *\n";
//        cout << "*************************************\n";
//        cout << "* 1. Agregar Trabajador             *\n";
//        cout << "* 2. Buscar                         *\n";
//        cout << "* 3. Modificar Lista de Trabajadores*\n";
//        cout << "* 4. Eliminar Trabajador            *\n";
//        cout << "* 5. Mostrar Trabajador             *\n";
//        cout << "*************************************\n";
//        cout << "\nDigite su opcion: ";
//        cin >> op;
//
//        switch(op){
//            case 1:
//                cout << "\nAGREGAR ESTUDIANTE: \n\n" ;
////                insertar_trabajador();
//                cout<<"Agregar Trabajador";
//                break;
//
//            case 2:
//                char* Nombre;
//                char* Apellido;
//                cout << "\nBUSCAR ESTUDIANTE \n\n";
//                cout << "Digite el apellido del Estudiante: ";
//                cin >> Apellido;
////                system("cls");
//                break;
//
//            case 3:
//                cout << "\Modificar \n\n";
////                lst.Mostrar();
//                cout<<"Modificar";
//                break;
//
//            case 4:
//                cout << "ELIMINAR" ;
////                int e;
////                cout << "A quien quiere eliminar: ";
////                cin >> e;
//
//            case 5:
//                cout << "\nMOSTRAR LISTA" << endl;
//                break;
//
//            case 6:
//                int d,m,y;
//                cout << "\nIngresar Fecha" << endl;
//                cin>>d>>m>>y;
//                fecha_ f = new Fecha(d,m,y);
//                if (f->esValida()){
//                    cout<<"la Fecha es Valida";
//                }else{
//                    cout<<"la Feccha es invalida";
//                }
//                break;
//
//        }
//    }while(op < 7);

    return 0;
}

void insertar_trabajador(){

    char* Nombre;
    char* Apellido;
    double sueldo;
    cout << "\nIngrese su nombre: ";
    cin >> Nombre;
    cout << "\nIngrese su apellido: ";
    cin >> Apellido;
    cout << "\nIngrese Sueldo: ";
    cin >> sueldo;
//    traba.insertar(Nombre,Apellido,sueldo);
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


                