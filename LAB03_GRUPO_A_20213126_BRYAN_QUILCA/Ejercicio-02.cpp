#include <iostream>

using namespace std;



/*2. Hacer un programa que lea por teclado un a�o, calcule y muestre si es bisiesto. Para
realizar el c�lculo utiliza una funci�n llamada bisiesto. La funci�n bisiesto recibe el
a�o le�do por teclado, comprueba si es o no bisiesto.
*/

int bisiesto(int a);

int main(){
    int x;
    int z;

    cout<<"introduzaca un anho "; cin>>x;
    cout<<"1 -> si"<<endl<<"0 -> no "<<endl;
    z = bisiesto(x);

    cout<<"El anho "<<z<<" es biciesto ";
}

int bisiesto(int a){

    int anho;

    if( a%4 == 0){
        anho=1;
    }
    else{
        anho=0;
    }
    return anho;
}
