

#include <iostream>

using namespace std;

//Ejercicio 8
/* Escribir un programa que calcule la media de x cantidad números introducidos por el
teclado. */

int main(){

    float n,x,suma = 0,media;

    cout<<"Ingrese la cantidad de numeros que desea sacar la media "; cin>>n;

    for(int i = 1; i <= n; i++){
        cout<<"Numero " <<i<<" : "; cin>>x;

        suma += x;

    }
    media = suma /n;
    cout<<"La suma es : "<<media;
}
