#include <iostream>

using namespace std;

/*9. Escribir un programa que pida al usuario un número entero y muestre por pantalla un triángulo rectángulo como el de más abajo, de altura el número introducido. * ** *** **** ***** */

int main(){

    int n;
    string letra;

    cout<<"Ingrese un numero : "; cin>>n;


    for(int i=1 ; i<=n;i++){
        letra ='*******';



        cout<<letra[i]<<endl;
    }
}
