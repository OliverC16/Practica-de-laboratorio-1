#include <iostream>
#include <string>

using namespace std;


bool palindrome (string arreglo, int tam)
{
    bool a=true;
    for (int i=0;i<tam/2;i++)
    {

        if (arreglo[i]!=arreglo[(tam-i)-1]){
            a=false;
            cout<<a<<"False";
            return 1;
        }
    }
    cout<<a<<"True";

    }

int main ()
{

    string arreglo;

    cout<<"Ingrese la cadena"<<endl;
    cin>>arreglo;
    int tam=arreglo.size();
    palindrome (arreglo,tam);

    return 0;


}

