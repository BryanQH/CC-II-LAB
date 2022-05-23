#include <iostream>
#include <stdlib.h>

using namespace std;

class Ave{
    private:
        string especie;
    public:
        Ave(string);
        void llamar_especie();
};
class ganzo:public Ave{
    private:
        string nombre1;
    public:
        ganzo(string,string);
        void llamar_ganzo();
};

class pato:public Ave{
    private:
        string nombre2;
    public:
        pato(string,string);
        void llamar_pato();
};

class gallina:public Ave{
    private:
        string nombre3;
    public:
        gallina(string,string);
        void llamar_gallina();
};

Ave::Ave(string _especie){
    especie = _especie;
}
ganzo::ganzo(string _especie, string _nombre1):Ave(_especie){
    nombre1 = _nombre1;
}
pato::pato(string _especie, string _nombre2):Ave(_especie){
    nombre2 = _nombre2;
}
gallina::gallina(string _especie, string _nombre3):Ave(_especie){
    nombre3 = _nombre3;
}
void Ave::llamar_especie(){
    cout<<especie;
}
void ganzo::llamar_ganzo(){
    cout<<"Soy un ganzo de especie ";
    llamar_especie();
    cout<<" y me llamo "<<nombre1<<endl;

}
void pato::llamar_pato(){
    cout<<"Soy un pato de especie ";
    llamar_especie();
    cout<<" y me llamo "<<nombre2<<endl;

}
void gallina::llamar_gallina(){
    cout<<"Soy un gallina de especie ";
    llamar_especie();
    cout<<" y me llamo "<<nombre3<<endl;

}
int main(){
    Ave n("OVIPAROS");
    n.llamar_especie();

    cout<<"\n";

    cout<<"\nCLASE GANZO"<<endl;
    ganzo n1("oviparo","Juan");
    n1.llamar_ganzo();

    cout<<"\nCLASE PATO"<<endl;
    pato n2("oviparo","Martin");
    n2.llamar_pato();

    cout<<"\nCLASE GALLINA"<<endl;
    gallina n3("oviparo","Maria");
    n3.llamar_gallina();

    cout<<"\n";
    system("pause");
    return 0;
}
