
#include <iostream>

using namespace std;

//EJERCICIO 9
/*Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean
negativos.*/


int main(){
    int x,suma;
    for(int i=1;i<=10;i++){
        cout<<"Numero "<<i<<" : "; cin>>x;
        if(x<0){
            suma +=x;
        }
    }
    cout<<"La suma de los negativos es "<<suma;

    return 0;
}
