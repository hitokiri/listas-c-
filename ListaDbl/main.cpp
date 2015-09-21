#include <iostream>
using namespace std;
#include "ListaDbl.h"
int main(){
    ListaDbl lst;
    //La insercion va al final
    lst.Insertar(1,false);
    lst.Insertar(2,false);
    //Insercion en medio
    lst.Insertar(3,2,false);
    lst.Insertar(4,3,false);
    lst.Mostrar();
    return 0;
}
