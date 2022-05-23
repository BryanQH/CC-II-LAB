#include <iostream>
#include <stdlib.h>

using namespace std;

class multimedia{
    private:
        string nombre;
        int reproducciones;
    public:
        multimedia(string,int);
        void mostrar_mult();
};
class disco:public multimedia{
    private:
        float duracion;
    public:
        disco(string,int,float);
        void mostrar_disco();
};
multimedia::multimedia(string _nombre, int _reproducciones){
    nombre = _nombre;
    reproducciones = _reproducciones;
}

disco::disco(string _nombre, int _reproducciones, float _duracion):multimedia(_nombre,_reproducciones){
    duracion = _duracion;
}

void multimedia::mostrar_mult(){
    cout<<"NOMBRE: "<<nombre<<endl;
    cout<<"N° de reproducciones :"<<reproducciones<<endl;
}
void disco::mostrar_disco(){
    mostrar_mult();
    cout<<"DURACION :"<<duracion<<endl;
}
int main(){
    string n;
    int r;
    float d;

    cout<<"Nombre del disco: "; cin>>n;
    cout<<"N de reproducciones: "; cin>>r;
    cout<<"Duracion: "; cin>>d;

    disco d1(n,r,d);
    d1.mostrar_disco();

    system("pause");
    return 0;
}
