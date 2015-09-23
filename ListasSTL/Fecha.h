//
// Created by hiko on 09-19-15.
//

#ifndef LISTASSTL_FECHA_H
#define LISTASSTL_FECHA_H


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
        if (! (1582<= this->a )  )//comment these 2 lines out if it bothers you
            return false;
        if (! (1 <= this->m && this->m <= 12) )
            return false;
        if (! (1<= d && d<=31) )
            return false;
        if ( (d==31) && (m==2 || m==4 || m==6 || m==9 || m==11) )
            return false;
        if ( (d==30) && (m==2) )
            return false;
        if ( (m==2) && (d==29) && (a%4!=0) )
            return false;
        if ( (m==2) && (d==29) && (a%400==0) )
            return true;
        if ( (m==2) && (d==29) && (a%100==0) )
            return false;
        if ( (m==2) && (d==29) && (a%4==0)  )
            return true;

        return true;
    }
    void MostrarFecha(){
        cout << this->d << "/" << this->m << "/" <<this->a <<endl;
    }


};typedef Fecha* fecha_;
#endif //LISTASSTL_FECHA_H
