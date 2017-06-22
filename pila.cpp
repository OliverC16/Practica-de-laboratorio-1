#include <iostream>
#include<vector>

using namespace std;
template<class T>
class Pil_A
{

    private:
    friend Pil_A<T> operator + (const Pil_A<T> &p1, const Pil_A<T> &p2)
        {
        Pil_A<T> suma =p1;

        for(unsigned i = 0;i<p1.items.size();++i){
            suma.items.push_back(p2.items[i]);
        }
        return suma;
    }
    friend ostream &operator << (ostream &o,const Pil_A<T> &pil)
        {
        o<<"{";
        for (unsigned i = 0; i<pil.items.size()-1;++i){
            o<<pil.items[i]<<";";
            }
        o<<pil.items[pil.items.size()-1]<<"}";
        return o;
        }

    friend Pil_A<T> operator - (Pil_A<T> &princ,const Pil_A<T> &quitar)
    {
        for(unsigned int i;i<princ.items.size();++i)
        {
            for(unsigned int j;j<quitar.items.size();++j){
            if(princ.items[i]==quitar.items[j])
                {
                    princ.items.erase(princ.items.begin()+i);
                }
            }

        }
        return princ;
    }
    public:
    vector<T> items;

        T top();
        void push(const T &item);
        void pop();

};

template<class T>
T Pil_A<T>::top()
{
    return items[items.size()-1];
}

template<class T>
void Pil_A<T>::push(const T &item)
{
   items.push_back(item);
}

template<class T>
void Pil_A<T>::pop()
{
    items.pop_back();

}

/*template<class C>
class Cola
{
public:
    friend Cola<C> operator + (const Cola<C> &c1, const Cola<C> &c2)
    {
        Cola<C> sumaC=c1;
        for (unsigned int i; i< s2.items.)
    }
};

*/
int main()
{
Pil_A<int> pila1,pila2;
pila1.push(1);
pila1.push(5);
cout<<pila1<<endl;
pila2.push(6);
pila2.push(10);
cout<<pila2<<endl;

Pil_A<int> pilasuma=pila1+pila2;
cout<<pilasuma<<endl;

pilasuma.push(15);
pilasuma.push(20);
cout<<pilasuma<<endl;

pilasuma.pop();
cout<<pilasuma<<endl;

Pil_A<int> Presta=pilasuma-pila1;
cout<<"resta: "<<Presta;
}
