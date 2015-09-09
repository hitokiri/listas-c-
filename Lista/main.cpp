#include <iostream>
#include "Lista.h"
using namespace std;

int main() {
    Lista saludo;
    saludo.add(1);
    saludo.add(3);
    saludo.add(2);
    saludo.add(4);
    saludo.show();
    cout <<endl;
    saludo.delet(4);
    saludo.delet(1);
    saludo.show();
    cout <<endl;
    saludo.add(10);
    saludo.show();
    cout <<endl;
    saludo.delet(3);
    saludo.show();
    cout <<endl;
    saludo.add(11);
    saludo.add(31);
    saludo.add(21);
    saludo.add(41);
    saludo.show();
//    cout<< "lolol";
//    cout << "Hello, World!" << endl;
    cin.get();
    return 0;
}