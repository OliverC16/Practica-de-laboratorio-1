#include <iostream>
#include <cmath>
using namespace std;
double pot (double &x, int &y){
    double pote=x;
    for (int i=y;i>=2;i--){
        pote*x;
    }
    return pote;
}
int main()
{
    double base;
    int expo;
    cout<<"Ingrese el valor de la base: ";
    cin>>base;
    cout<<"Ingrese el valor del exponente: ";
    cin>>expo;

    cout<<"La potencia resulta = "<<pot(base,expo)<<endl;

    return 0;
}
