#include <iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int a,b,c;
    int *aptr,*bptr;
    aptr=&a;
    bptr=&b;

    cout<<"Introduzca numero 1: "; cin>>a;
    cout<<"Introduzca numero 2: "; cin>>b;

    c=*aptr;
    *aptr=*bptr;
    *bptr=c;

    cout<<"\nNumero 1 : "<<a<<endl;
    cout<<"Numero 2 : "<<b<<endl<<endl;

    system("pause\n");
    return 0;
}

