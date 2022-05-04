#include <iostream>

using namespace std;


/*10. Escribir un programa que pida al usuario una palabra y luego muestre por pantalla una a una las letras de la palabra introducida empezando por la última.*/

int main(){
    string palabra;

    cout<<" ingrese un palabra"; cin>>palabra;

    for(int i =0; i<=9;i++){
        cout<<"'"<<palabra[i]<<"'";
    }

    return 0;
}
