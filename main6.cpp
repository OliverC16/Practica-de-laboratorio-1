#include <iostream>

using namespace std;

int main()
{
    float x;
    char y;
    float z;
    int c;
        cout<<"Introduce 0 para inicializar el programa (-1 para cerrar):";
        cin>>c;
        while(c==0){
        cout<<"Escribe en este orden: (signo, valor 1, valor2) , : "<<endl;

        cin>>y;
        cin>>x;
        cin>>z;

        float result;
        switch(y){
        case '+':
            result = x+z;
            cout<<x<<y<<z<<"="<<result<<endl;break;
        case '-':
            result = x-z;
            cout<<x<<y<<z<<"="<<result<<endl;break;
        case '*':
            result = x*z;
            cout<<x<<y<<z<<"="<<result<<endl;break;
        case '/':
            result = x/z;
            cout<<x<<y<<z<<"="<<result<<endl;break;
        }
        }
        if (c==-1)
            cout<<"Fin del Programa";



        return 0;
}
