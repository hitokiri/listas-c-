
// Arbol AVL en C++
// (C) Mayo 2002, Salvador Pozo
// C con Clase: http://c.conclase.net

#include <iostream>
using namespace std;

#include "AVL.h"


// Funci�n de prueba para recorridos del �rbol
void Mostrar(char &d, int FE)
{
    cout << d << "(" << FE << "),";
}

int main()
{
    // Un �rbol de enteros
    AVL ArbolInt;

    // Inserci�n de nodos en �rbol:
/*   ArbolInt.Insertar(15);
   ArbolInt.Insertar(4);
   ArbolInt.Insertar(20);
   ArbolInt.Insertar(3);
   ArbolInt.Insertar(25);
   ArbolInt.Insertar(6);
   ArbolInt.Insertar(8);*/
    ArbolInt.Insertar( "a");
    ArbolInt.Insertar("b");
    ArbolInt.Insertar("c");
    ArbolInt.Insertar("d");
    ArbolInt.Insertar("e");
    ArbolInt.Insertar("f");
//    ArbolInt.Insertar(70);
//    ArbolInt.Insertar(18);
//    ArbolInt.Insertar(9);
//    ArbolInt.Insertar(10);
//    ArbolInt.Insertar(11);
//    ArbolInt.Insertar(12);
//    ArbolInt.Insertar(13);
//    ArbolInt.Insertar(14);
//    ArbolInt.Insertar(15);
//    ArbolInt.Insertar(16);

//    cout << "Altura de arbol " << ArbolInt.AlturaArbol() << endl;
    cout<<"Altura nodo:  "<< ArbolInt.Altura("c")<<endl;

    // Mostrar el �rbol en tres ordenes distintos:
    cout << "InOrden: ";
    ArbolInt.InOrden();
    cout << endl;
    cout << "PreOrden: ";
    ArbolInt.PreOrden();
    cout << endl;
    cout << "PostOrden: ";
    ArbolInt.PostOrden();
    cout << endl;
//
//    ArbolInt.Borrar("a");
//    ArbolInt.Borrar("b");
//
//    cout << "Altura de arbol " << ArbolInt.AlturaArbol() << endl;
//
//    // Mostrar el �rbol en tres ordenes distintos:
//    cout << "InOrden: ";
//    ArbolInt.InOrden(Mostrar);
//    cout << endl;
//    cout << "PreOrden: ";
//    ArbolInt.PreOrden(Mostrar);
//    cout << endl;
//    cout << "PostOrden: ";
//    ArbolInt.PostOrden(Mostrar);
    cout << endl;

/*   // Borraremos algunos elementos:
   cout << "N nodos: " << ArbolInt.NumeroNodos() << endl;
   ArbolInt.Borrar(5);
   cout << "Borrar   5: ";
   ArbolInt.InOrden(Mostrar);
   cout << endl;
   ArbolInt.Borrar(8);
   cout << "Borrar   8: ";
   ArbolInt.InOrden(Mostrar);
   cout << endl;
   ArbolInt.Borrar(15);
   cout << "Borrar  15: ";
   ArbolInt.InOrden(Mostrar);
   cout << endl;
   ArbolInt.Borrar(245);
   cout << "Borrar 245: ";
   ArbolInt.InOrden(Mostrar);
   cout << endl;
   ArbolInt.Borrar(4);
   cout << "Borrar   4: ";
   ArbolInt.InOrden(Mostrar);
   ArbolInt.Borrar(17);
   cout << endl;
   cout << "Borrar  17: ";
   ArbolInt.InOrden(Mostrar);
   cout << endl;

   // Veamos algunos par�metros
   cout << "N nodos: " << ArbolInt.NumeroNodos() << endl;
   cout << "Altura de 1 " << ArbolInt.Altura(1) << endl;
   cout << "Altura de 10 " << ArbolInt.Altura(10) << endl;
   cout << "Altura de arbol " << ArbolInt.AlturaArbol() << endl;

   cin.get();

   // Arbol de cadenas:
   AVL<Cadena> ArbolCad;

   // Inserci�n de valores:
   ArbolCad.Insertar("Hola");
   ArbolCad.Insertar(",");
   ArbolCad.Insertar("somos");
   ArbolCad.Insertar("buenos");
   ArbolCad.Insertar("programadores");

   // Mostrar en diferentes ordenes:
   cout << "InOrden: ";
   ArbolCad.InOrden(Mostrar);
   cout << endl;
   cout << "PreOrden: ";
   ArbolCad.PreOrden(Mostrar);
   cout << endl;
   cout << "PostOrden: ";
   ArbolCad.PostOrden(Mostrar);
   cout << endl;

   // Borrar "buenos":
   ArbolCad.Borrar("buenos");
   cout << "Borrar 'buenos': ";
   ArbolCad.InOrden(Mostrar);
   cout << endl; */
    cin.get();
    return 0;
}
