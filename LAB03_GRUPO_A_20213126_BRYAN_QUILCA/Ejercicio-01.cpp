#include <iostream>

using namespace std;


/*Hacer un programa que sin usar la funci�n pow(), pero por medio de una funci�n,
calcule la potencia de un n�mero (ambos n�meros ingresados por teclado).
*/

int potencia(int a , int b);

int main(){

    int b,e;

    cout <<"digite la base: "; cin>>b;
    cout<<"Digite el exponente: "; cin>>e;
    cout<<"La potencia es : "<<potencia(b,e);
    return 0;
}


int potencia(int a,int b){
    int n_potencia = 1;

     for(int i = 1;i<=b;i++){
            n_potencia *= a;

     }
    return n_potencia;
}
