#include <iostream>

using namespace std;

/*5. Elabore un programa que lea n números y determine cuál es el mayor, el menor y la media de los números leídos. */

int main(){
    float n,numero,num_mayor = 0,num_menor=9999999,suma = 0;
    float media;

    cout<<"Cuantos numeros desea ingresar :"; cin>>n;

    for(int i =1;i<=n;i++){
    cout<<"Ingrese el numero "<<i<<" : "; cin>>numero;

    suma += numero;
    media = suma/n;

    if(num_mayor<numero){
        num_mayor=numero;
    }
    if(num_menor>numero){
        num_menor=numero;
    }
    }
    cout<<"El numero mayor es :"<<num_mayor<<endl;
    cout<<"El numero menor es :"<<num_menor<<endl;
    cout<<"La media aritmetica es:"<<media;
    return 0;

}
