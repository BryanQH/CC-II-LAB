#include <iostream>
#include<stdlib.h>

using namespace std;

//ejercicio n°1
int main()
{
    string nombre[3],apellido[3];
    int Edad[3],DNI[3];

    for(int i = 0;i<3;i++){

        cout<<"\nPersona "<<i+1<<" : "<<endl;
        cout<<"\nnombre: ";  cin>>nombre[i];
        cout<<"apellido: ";  cin>>apellido[i];
        cout<<"DNI: "; cin>>DNI[i];
        cout<<"Edad: ";  cin>>Edad[i];
    }
    for(int i = 0;i<3;i++){
        cout<<"\nPersona "<<i+1<<" : "<<endl;
        cout<<"\nnombre: "<<nombre[i]<<endl;
        cout<<"apellido: "<<apellido[i]<<endl;
        cout<<"DNI: "<<DNI[i]<<endl;
        cout<<"Edad: "<<Edad[i]<<endl;
    }
    system("pause");
    return 0;
}
