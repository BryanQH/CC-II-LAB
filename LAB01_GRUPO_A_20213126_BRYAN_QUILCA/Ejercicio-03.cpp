#include <iostream>

using namespace std;


 //Ejercicio 3
/*Elabore un programa que solicite ingresar una hora del d�a (HH:MM en formato de
cadena), solicite un tiempo en minutos a agregar, y retorne la hora de finalizaci�n (el
formato de salida debe de estar en AM o PM seg�n corresponda).
*/

int main(){

    int H,M;
    cout<<"Ingresar la hora :"; cin>>H;
    cout<<"Ingresar los minutos :"; cin>>M;
     if((H>=00 && H<=11)&&(M>=0 && M<=59)){
        cout<<"La hora es : "<<H<<":"<<M<<" am";
     }
     else if((H>=12 && H<=23)&&(M>=0 && M<=59)){
        cout<<"La hora es : "<<H<<":"<<M<<" pm";
     }
     else{
        cout<<"No ingres� una hora exstente ";
     }
    return 0;

}
