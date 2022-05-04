#include <iostream>

using namespace std;

/*4. Escriba un código que solicite ingresar dos números 𝑥 y 𝑦, tal que 𝑥 < 𝑦. Muestre todos los números primos que se encuentren entre el rango de valores, de no encontrarse, mostrar el primo más cercano a 𝑥 o 𝑦.

*/

int main(){
    int x,y;
    cout<<"Ingrese un numero :"; cin>>x;
    cout<<"Ingrese un numero mayor al anterior :"; cin>>y;

    for(int i = y; i>=x & i<=y; i--){
        if(y/i == 1 & y/i<=1){
            cout<<i;
        }
    }
}
