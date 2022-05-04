#include <iostream>

using namespace std;

/*2. Calcule los primeros 50 números primos y muestre el resultado en pantalla. */

int main(){
    int n;
    cout<<"Ingrese la cantidad de numeros primos a imprimir :"; cin>>n;
    switch(n){
        case 1: cout<<"1"; break;
        case 2: cout<<"1 2"; break;
        case 3: cout<<"1 2 3"; break;
        case 4:
            for(int i = 0;i<=n;i++){
                for(int a = 2;i>=0;i++){
                    if(1000/i>=2){
                        cout<<i;
                    }
                }
            }
    }

    return 0;
}
