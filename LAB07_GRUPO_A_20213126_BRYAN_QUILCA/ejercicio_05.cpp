#include <iostream>
#include <stdlib.h>

using namespace std;

class base{
    protected:
        int numero;
    public:
        base(int);
        void mostrar_num();
};
class facatorial: public base{
    public:
        facatorial(int);
        void factorial();

};

base::base(int _numero){
    numero = _numero;
}
facatorial::facatorial(int _numero): base(_numero){

}
void base::mostrar_num(){
    cout<<numero;
}
void facatorial::factorial(){
    int F = 1;
    for(int i = 1; i<=numero;i++){
        F = F *i;
    }
    cout<<"El factorial de :";
    mostrar_num();
    cout<<" es "<<F;

}
int main(){
    int num;

    cout<<"Ingrese un numero : "; cin>>num;
    facatorial n1(num);
    n1.factorial();

    cout<<"\n";
    system("pause");
    return 0;
}
