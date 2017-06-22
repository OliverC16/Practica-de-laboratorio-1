#include <iostream>
#include <vector>
using namespace std;

template<class C>
class Cola{
private:
    friend Cola<C> operator + (const Cola<C> &c1, const Cola<C> &c2){
        Cola<C> suma;

        if(c2.items.size()==0){
            suma=c2;
            for (int i=0;i<c1.items.size();i++){
                suma.items.push_back(c1.items[i]);
            }
            suma.calc_f();
        }
        else{
            suma=c1;
            for (int i=0;i<c2.items.size();i++){
                suma.items.push_back(c2.items[i]);
            }
            suma.calc_f();
        }
        return suma;
    }

    friend Cola<C> operator - (Cola<C> &c1, const Cola<C> &elQ){
        for(int i=0;i<c1.items.size();i++){
            for (int j=0;j<elQ.items.size();j++){
                if(c1.items[i]==elQ.items[j])
                    c1.items.erase(c1.items.begin()+i);
            }
        }
        c1.calc_f();
        return c1;
    }

    friend ostream operator << (ostream &o,const Cola<C> &cola){
        o<<"{";
        for (int i=0;i<cola.items.size();i++){
            if (i==cola.items.size()-1){o<<cola.items[i]<<"}";}
            else{o<<cola.items[i]<<";";}
        }
    }

public:
    C first;
    vector<C> items;
    void calc_f();
    void push(const C &elemento);
    C pop();
};
template<class C>
void Cola<C>::calc_f(){first==items.front();}
template<class C>
void Cola<C>::push(const C &elemento){
    items.push_back(elemento);
    if(items.size()-1==0){calc_f();}
    }
template<class C>
C Cola<C>::pop(){
    calc_f();
    C ret=first;
    return ret;
}

int main()
{
    Cola<int> c1;
    c1.push(1);
    c1.push(3);
    c1.push(6);
    c1.push(8);
    Cola<int> c2;
    c2.push(3);
    c2.push(6);
    Cola<int> resta;
    resta=c1-c2;
    cout<<resta;


    return 0;
}
