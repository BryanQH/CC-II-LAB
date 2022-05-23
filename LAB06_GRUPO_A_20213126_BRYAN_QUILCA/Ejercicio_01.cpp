#include <iostream>
#include <stdlib.h>
using namespace std;

class rectangle{
    private:
        int largo;
        int ancho;
    public:
        rectangle(int,int);
        void area();
        void perimetro();

};
//inicalizamos el constructor
rectangle::rectangle(int _largo,int _ancho){
    largo = _largo;
    ancho = _ancho;
}
 void rectangle::area(){
     cout<<"EL area del rectangulo es "<<largo*ancho<<endl;
}
void rectangle::perimetro(){
    cout<<"El perimetro del rectangle es "<<2*largo + 2*ancho<<endl;
}
int main(){
    int a , b;
    cout<<"Introduzca el largo "; cin>>a;
    cout<<"Introduzca el ancho "; cin>>b;

    rectangle r1(a,b);

    r1.perimetro();
    r1.area();

    system("pause");
    return 0;
}
