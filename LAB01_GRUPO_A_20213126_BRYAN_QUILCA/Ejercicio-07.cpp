

#include <iostream>

using namespace std;
//Ejercicio 7
/*Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
divisor del otro. */

int main(){
    int a,b;

    cout<<"Ingrese un numero :"; cin >>a;
    cout<<"Ingrese un numero :"; cin >>b;

    if(a%b == 0){
        cout<<a<<" es divisible entre "<<b;
    }
    else if(b%a == 0){
        cout<<b<<" es divisible entre "<<a;
    }
    else{
        cout<<a<<" y "<<b<<" no son divisbles";
    }
}
