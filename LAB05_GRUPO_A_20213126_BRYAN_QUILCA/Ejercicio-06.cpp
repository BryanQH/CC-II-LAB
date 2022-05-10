#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int suma(int a , int b){
    int s;
    s = a + b;

    return s;
}

int resta(int a , int b){
    int r;
    r = a - b;

    return r;
}

int producto(int a , int b){
    int p;
    p = a * b;

    return p;
}

int division(int a , int b){
    float d;
    if (b==0){
        cout<<"Indeterminado ";
        return -1;
    }
    d = a/b;
    return d;
}

void ingrese_numero(int& numero){

        cout<<"Ingrese numero : "; cin>>numero;
}

int main(){
    int (*fun)(int,int);
    int num1,num2;

    ingrese_numero(num1);
    ingrese_numero(num2);

    int opcion =-1;

    do{
        cout<<"\n*****QUE OPERACION DESEA REALIZAR***** "<<endl;
        cout<<" 1.Suma "<<endl;
        cout<<" 2.Resta "<<endl;
        cout<<" 3.Multiplicacion "<<endl;
        cout<<" 4.Division "<<endl;
        cout<<" 5. Salir "<<endl;
        cout<<"   Opcion : "; cin>>opcion;

        switch(opcion){
            case 1:{
                cout<<"La suma es = ";
                fun=suma; break;

            }
            case 2:{
                cout<<"La resta es = ";
                fun=resta; break;

            }
            case 3:{
                cout<<"El producto es = ";
                fun=producto; break;

            }
            case 4:{
                cout<<"La Division es = ";
                fun=division; break;

            }
            case 5:{
                cout<<"GRACIAS "<<endl; break;
            }

            default: cout<<"La opcion no es valida";
        }

        if(opcion>=1 && opcion<=4){
            cout<<fun(num1,num2);
        }

    }while(opcion!=5);

    system("\npause");
    return 0;
}
