#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double c;
    cout <<setw(3)<<"Grados Farenheit"<<setw(32.5)<<"Grados Celsius"<<endl;
    for(double f=0; f<=300 ; f+=20){
        c=(f-32)*5/9;
        cout <<setw(8)<<f<<setw(37)<<c<<endl;}

    return 0;
}
