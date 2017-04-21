#include <iostream>

using namespace std;

void change(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
    }
int main()
{
    int x;
    int y;
    cout<<"Introduce el valor 1: "<<endl;
    cin>>x;
    cout<<"Introducir valor 2: "<<endl;
    cin>>y;

    change(x,y);
    cout<<"nuevo valor de 1: "<<x<<endl;
    cout<<"nuevo valor de 2: "<<y<<endl;

    return 0;
}
