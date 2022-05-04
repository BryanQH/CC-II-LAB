

#include <iostream>

using namespace std;


//Ejercicio 5
/*Elabore un código que reciba como entrada una secuencia de caracteres que contiene
un numero flotante y retorne el número redondeado.
*/

int main(){
     float N;
     int M,Z,S;

     cout<<"digite un numero  "<<endl; cin>>N;
     M = N*10000000;
     Z = M%10000000; S = M/10000000;
     if(Z>4444445){
        cout<<"Su numero es "<<S+1;
     }
     else{
        cout<<"Su nuemro es "<<S;
     }

     return 0;
}
