#include <iostream>
#include "Lista.h"
using namespace std;

int main() {
    Lista saludo;
    //saludo.add(1);
    //saludo.add(3);
    //saludo.add(2);
    //saludo.add(4);
    //saludo.show();
//    cout<< "lolol";
   // cout << "Hello, World!" << endl;
    fecha_  fecha = new Fecha(1,2,3);
    char *n = "hiko";
    char *a = "hitokiri";
    float s= 12;
    saludo.insertar(n,a,fecha,s);
    char *n1 = "hiko11";
    char *a1 = "hitokiri";
    float s1= 12;
    saludo.insertar(n1,a1,fecha,s);
    saludo.Mostrar();
    cin.get();
    return 0;
}