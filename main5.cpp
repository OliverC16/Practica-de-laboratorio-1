#include <iostream>

using namespace std;

int main(){

    int x;

    while (x!=-1){
    cout<<"Introduzca numeros entre 0 y 9:";
    cin>>x;
    switch(x){
        case 0:cout<<"Cero"<<endl;break;
        case 1:cout<<"Uno"<<endl;break;
        case 2:cout<<"Dos"<<endl;break;
        case 3:cout<<"Tres"<<endl;break;
        case 4:cout<<"Cuatro"<<endl;break;
        case 5:cout<<"Cinco"<<endl;break;
        case 6:cout<<"Seis"<<endl;break;
        case 7:cout<<"Siete"<<endl;break;
        case 8:cout<<"8cho"<<endl;break;
        case 9:cout<<"Nueve"<<endl;break;
        default: cout<<"Numero no admitido"<<endl;
            }
    }
    cout<<"Fin del programa"<<endl;

    return 0;
}
