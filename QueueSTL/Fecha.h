//
// Created by hiko on 09-09-15.
//

#ifndef LISTA_FECHA_H
#define LISTA_FECHA_H
using namespace std;

class Fecha {
private:
    int d;
    int m;
    int a;
public:
    Fecha(int d , int m, int a){
        this->d = d;
        this->m = m;
        this->a = a;
    }
    bool esValida(){
        return true;
    }
    void MostrarFecha(){
        cout << this->d << "/" << this->m << "/" <<this->a ;
    }

};typedef Fecha* fecha_;


#endif //LISTA_FECHA_H
