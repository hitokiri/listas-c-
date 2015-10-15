#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<char> pila ;
    char exprecion[100]="x+{y*2+[4x/2+2(x+4)+3x]/4}";

    int i = 0;

    while( exprecion[i] != '\0')
    {
        if( exprecion[i]=='(' || exprecion[i]=='[' || exprecion[i]=='{' )
        {
            pila.push(exprecion[i]);
        }
        else if( exprecion[i]==')' || exprecion[i]==']' || exprecion[i]=='}' )
        {


            if(!pila.empty())
            {
                if( exprecion[i]==')' )
                {
                    if( pila.top() == '(')
                        pila.pop();
                }
                else if( exprecion[i]==']' )
                {
                    if( pila.top() == '[')
                        pila.pop();
                }
                else if( exprecion[i]=='}' )
                {
                    if( pila.top() == '{')
                        pila.pop();
                }
            }
            else
                pila.push(  exprecion[i] );
        }
        i++;
    }

    if(pila.empty())
        cout<<"\n\tLa ecuacion es correcta..."<<endl;
    else
        cout<<"\n\t La ecuacion es incorrecta , faltan simbolos de agrupacion..."<<endl;

    return 0;
}