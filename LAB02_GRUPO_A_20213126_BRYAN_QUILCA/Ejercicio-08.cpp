#include <iostream>

using namespace std;


/*8. Escribir un programa que genere la tabla de multiplicar de un número introducido por el teclado. */

int main(){
    int n,a;
    cout<<"Ingrese un numero :"; cin>>n;
    cout<<"Hasta que numero desea hacer la tabla? :"; cin>>a;

    for(int i = 0; i <= a; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}
