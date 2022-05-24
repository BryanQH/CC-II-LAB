#include <iostream>
#include <stdlib.h>

using namespace std;

class forma{
    private:
        string color;
        int cordenadaX,cordenadaY;
        string nombre;
    public:
        forma(string, int ,int,string);
        virtual void imprimir();
        void mover_forma();
};
forma::forma(string _color, int _cordenadaX, int _cordenadaY,string _nombre){
    color = _color;
    cordenadaX = _cordenadaX;
    cordenadaY = _cordenadaY;
    nombre = _nombre;
}
void forma::imprimir(){
    cout<<"\nCOLOR :"<<color<<endl;
    cout<<"CORDENADA [x,y]: ["<<cordenadaX<<","<<cordenadaY<<"]"<<endl;
    cout<<"NOMBRE: "<<nombre<<endl;
}
void forma::mover_forma(){
    int a,b;
    cout<<"\nMOVER FORMA"<<endl;
    cout<<"Indique las nuevas coordenadas : "<<endl;
    cout<<"X : "; cin>>a;
    cout<<"Y : "; cin>>b;
    cout<<"\nNUEVAS CORDENADAS [x,y]: ["<<a<<","<<b<<"]"<<endl;
}

class rectangle : public forma{
    private:
        int l_mayor,l_menor;
    public:
        rectangle(string,int,int,string,int,int);
        void imprimir();
};

rectangle::rectangle(string _color, int _cordenadaX, int _cordenadaY,string _nombre,int _l_mayor,int _l_menor):forma(_color,_cordenadaX,_cordenadaY,_nombre){
    l_mayor = _l_mayor;
    l_menor = _l_menor;
}
void rectangle::imprimir(){
    forma::imprimir();
    cout<<"Lado mayor: "<<l_mayor<<endl;
    cout<<"Lado menor: "<<l_menor<<endl;
    cout<<"AREA: "<<l_mayor*l_menor;
    mover_forma();
}
class cuadrado:public rectangle{
    public:
        cuadrado(string,int,int,string,int,int);
        void imprimir();
};
cuadrado::cuadrado(string _color, int _cordenadaX, int _cordenadaY,string _nombre,int _l_mayor,int _l_menor):rectangle(_color,_cordenadaX,_cordenadaY,_nombre,_l_mayor,_l_menor){

}
void cuadrado::imprimir(){
    rectangle::imprimir();

}
class elipse : public forma{
    private:
        int r_mayor,r_menor;
    public:
        elipse(string,int,int,string,int,int);
        void imprimir();
};
elipse::elipse(string _color, int _cordenadaX, int _cordenadaY,string _nombre,int _r_mayor,int _r_menor):forma(_color,_cordenadaX,_cordenadaY,_nombre){
    r_mayor = _r_mayor;
    r_menor = _r_menor;
}
void elipse::imprimir(){
    forma::imprimir();
    cout<<"Radio mayor :"<<r_mayor<<endl;
    cout<<"Radio menor :"<<r_menor<<endl;
    cout<<"Area : "<<3.14*r_mayor*r_menor<<endl;

}
class circulo:public elipse{
    public:
        circulo(string,int,int,string,int,int);
        void imprimir();
};
circulo::circulo(string _color, int _cordenadaX, int _cordenadaY,string _nombre,int _r_mayor,int _r_menor):elipse(_color,_cordenadaX,_cordenadaY,_nombre,_r_mayor,_r_menor){
}
void circulo::imprimir(){
    elipse::imprimir();
}
int main(){
    //CLASS FORMA
    cout<<"CLASS FORMA"<<endl;
    forma a1("verde",23,24,"circulo");
    a1.imprimir();
    //CLASS RECTANGLE
    cout<<"CLASS RECTABGULO"<<endl;
    rectangle r1("azul",34,53,"rectangulo",12,5);
    r1.imprimir();
    //CLASS ELIPSE
    cout<<"\nCLASS ELIPSE"<<endl;
    elipse e1("rosado",56,78,"elipse",14,7);
    e1.imprimir();
    //CLASS CUADRADO
    cout<<"\nCLASS CUADRADO"<<endl;
    cuadrado cu1("morado",89,34,"cuadrado",15,15);
    cu1.imprimir();
    //CLASS CIRCULO
    cout<<"\nCLASS CIRCULO";
    circulo ci1("rojo",20,83,"circulo",20,20);
    ci1.imprimir();
    cout<<"\n";
    system("pause");
    return 0;
}
