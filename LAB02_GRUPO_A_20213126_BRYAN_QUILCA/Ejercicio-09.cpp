#include <iostream>

using namespace std;

/*9. Escribir un programa que pida al usuario un n�mero entero y muestre por pantalla un tri�ngulo rect�ngulo como el de m�s abajo, de altura el n�mero introducido. * ** *** **** ***** */

int main(){

    int n;
    string letra;

    cout<<"Ingrese un numero : "; cin>>n;


    for(int i=1 ; i<=n;i++){
        letra ='*******';



        cout<<letra[i]<<endl;
    }
}
