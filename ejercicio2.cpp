#include <iostream>
using namespace std;
int fact( int n)
{
    int resultado;
    if (n==0)
    {
        resultado=1;
    }
    else
    {
        resultado = n*fact(n-1);
    }
    return resultado;
}
int main()
{
    int n;
    cout<<"Ingrese un numro entero\n";
    cin>>n;
    cout<<"El factoril de"<<n<<"es:";
    return 0;
}