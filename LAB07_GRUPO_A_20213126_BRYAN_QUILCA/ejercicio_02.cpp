#include <iostream>
#include <stdlib.h>

using namespace std;

class color{
    private:
        int R,G,B;
    public:
        color(int,int,int);
        void llamar_color();
};
class material : public color{
    private:
        string material2;
    public:
        material(int,int,int,string);
        void llamar_material();
};
class objeto: public material{
    public:
        objeto(int,int,int,string);
        void llamar_objeto();
};

color::color(int _R,int _G,int _B){
    R = _R;
    G = _G;
    B = _B;
}
material::material(int _R, int _G, int _B, string _material) : color(_R,_G,_B){
    material2 = _material;
}
objeto::objeto(int _R, int _G, int _B, string _material): material( _R,_G, _B, _material){

}
 void color::llamar_color(){
    cout<<R<<","<<G<<","<<B;
}
void material::llamar_material(){
    cout<<material2;
}
void objeto::llamar_objeto(){
    cout<<"El ";
    llamar_material();
    cout<<" es color ";
    llamar_color();
}
int main(){
    int a,b,c;
    string m;

    cout<<"Ingrese el color: "; cin>>a>>b>>c;
    cout<<"Ingrese el material: "; cin>>m;

    objeto Obj1(a,b,c,m);

    Obj1.llamar_objeto();
    cout<<"\n";

    system("pause");
    return 0;
}
