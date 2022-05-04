#include <iostream>

using namespace std;

/*Ejercicio N°2 Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final). */

 int main(){

     string nombre,apellido_p,apellido_m;

     cout<<"Ingrese su primer nombre :"; cin>>nombre;
     cout<<"Ingrese su apellido paterno :"; cin>>apellido_p;
     cout<<"Ingrese su apellido materno :"; cin>>apellido_m;

     cout<<"Su correo generado es "<<nombre[0]<<apellido_p<<apellido_m[0]<<"@unsa.edu.pe";

     return 0;
 }
