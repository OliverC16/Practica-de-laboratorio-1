#include <iostream>

using namespace std;


    void insercion (int arreglo[], int tam)
 {
     for (int i=0; i<tam;i++)
     {
        int j;

         j=i;

         while (j>0 && arreglo[j]<arreglo[j-1])
         {
             int temp=arreglo[j];
             arreglo[j]=arreglo[j-1];
             arreglo[j-1]=temp;
             j--;

         }

     }

 }

 int main ()
 {

     int tam,n;
     cout<<"Ingrese el tamanho de la lista a ordenar"<<endl;
     cin>>tam;
     int arreglo [tam];
     for (int i=0;i<tam;i++)
     {
         cout<<"Ingrese valor:"<<endl;
         cin>>arreglo[i];
     }

     insercion (arreglo, tam);
     for (int i=0;i<tam;i++)

         cout<<endl<<arreglo[i]<<endl;
     return 0;

 }

