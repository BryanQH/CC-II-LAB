

#include <iostream>

using namespace std;
//Ejercicio 6
/*Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado
en binario.
*/

 int main(){

     int x,dig1,dig2,dig3,dig4,dig5,dig6,dig7,dig8,dig9,dig10;
     int num1,num2,num3,num4,num5,num6,num7,num8,num9;

     cout<<"Ingrese un numero entre 100 y 999 :"; cin>>x;

     dig1= x%2;   num1= x/2;
     dig2= num1%2;  num2= num1/2;
     dig3= num2%2;  num3= num2/2;
     dig4= num3%2;  num4= num3/2;
     dig5= num4%2;  num5= num4/2;
     dig6= num5%2;  num6= num5/2;
     dig7= num6%2;  num7= num6/2;
     dig8= num7%2;  num8= num7/2;
     dig9= num8%2;  num9= num8/2;
     dig10= num9/2;

     cout<<"El numero es binario es "<<dig10<<dig9<<dig8<<dig7<<dig6<<dig5<<dig4<<dig3<<dig2<<dig1;

     return 0;
 }
