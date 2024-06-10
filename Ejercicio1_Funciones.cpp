#include <iostream>
#include <cmath>
int fact(int n);
using namespace std;

int main()
{
    int numero,resultado,fact;
    cout<<"Ingrese un numero entero\n";
    cin>>numero;
    cout<<"El factorial de"<<numero<<"es:"<<fact(n)<<"\n";
    if(numero==0)
    {
        resultado=1;
        cout<<"El numero ingersado no es valido.\n";
    }
    else
    {
        resultado=1;
        for(int i=1; i<=numero; i++)
        {
            resultado=resultado*i;
        }
    }
    return resultado;
}