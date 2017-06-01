#include <iostream>
#include <sstream>
using namespace std;
class Birthday{
    private:
    int dia,mes,anho;
    public:
    Birthday(){
        dia=0;
        mes=0;
        anho=0;
    }


    void birthday_set(const int d , const int m , const int a){
        dia=d;
        mes=m;
        anho=a;
    }
    const string fCumple(){
        stringstream d1,m1,a1;
        d1<<dia;
        m1<<mes;
        a1<<anho;
        return d1.str()+"-"+m1.str()+"-"+a1.str();
    }
    const int get_dia(){return dia;}
    const int get_mes(){return mes;}
    const int get_anho(){return anho;}

};

class Persona{
protected:
    Birthday cumple;
    string nombre;
    int edad;
public:
    Persona(){
        nombre="";
        edad=0;
    }
    Persona(const string &nomb, const int d , const int m , const int a) {
        cumple.birthday_set(d,m,a);
        nombre=nomb;
    }
    ~Persona(){
        cout<<nombre<<" Muere"<<endl;
    }
    int calc_edad (int dh ,int mh , int ah){
        edad= ah-cumple.get_anho();
        if (mh-cumple.get_mes()<0){
            edad-=1;
            return edad;
        }
        else if (mh==cumple.get_mes()){
            if (dh-cumple.get_dia()<0){
                edad-=1;
                return edad;
            }
            else if(dh==cumple.get_dia()){
                cout<< "Feliz Cumpleanhos N."<<edad<<" "<<nombre<<"!!!"<<endl;
                return edad;
            }
            else{
                return edad;
            }
        }
        else{
            return edad;
        }
    }
    virtual const string imprimir_D()=0;
    const string get_nombre(){return nombre;}
    const int get_edad(){return edad;}
};
class Gerente : public Persona{
    public:
    string empleo;
    Gerente(const string &nomb, const int d , const int m , const int a,const string &emp): Persona(nomb,d,m,a),empleo(emp){}
    const string imprimir_D(){
        return "Me llamo:"+nombre+". Soy gerente ,trabajo en: "+empleo+". Cumplo el:" +cumple.fCumple();
    }
};
class Conserje : public Persona{
    public:
        string nescoba;
        Conserje(const string &nomb, const int d , const int m , const int a,const string &mesc): Persona(nomb,d,m,a),nescoba(mesc){}
        const string imprimir_D(){
            return "Me llamo:"+nombre+". Soy conserje ,mi escoba se llama: "+nescoba+". Cumplo el:" +cumple.fCumple();
    }
};

int main()
{
    Persona *O;
    //cout<<O.calc_edad(16,04,2017)<<endl;
    Gerente L("Luis",16,04,1999,"Gold's Gym");

    O = &L;


    cout << O->imprimir_D()<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;

    Persona *vector[4] ;
    vector[0] = new Gerente("Guillermo",9,5,1993,"Microsoft");
    vector[1] = new Gerente("Samuel",12,4,1989,"Rockstar");
    vector[2] = new Conserje("Ruben",13,2,1990,"Wilson");
    vector[3] = new Conserje("Daniel",25,4,1992,"Krillin");
    for(int i=0;i<4;i++){
        cout<<vector[i] -> imprimir_D()<<endl;
        cout<<"Tengo: "<<vector[i] -> calc_edad(27,5,2017)<<" anhos."<<endl;
        delete vector[i];
    }
    return 0;

}
