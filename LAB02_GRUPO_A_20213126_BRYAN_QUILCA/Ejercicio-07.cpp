#include <iostream>

using namespace std;

/*7. Calcula el promedio de 3 notas para n estudiantes. */

int main(){
    float n,nota1,nota2,nota3;
    float media;
    cout<<"Indique el numero de estudiantes : "; cin>>n;

    for(int i = 1; i<=n;i++){
        cout<<"\nIndique la nota 1 del estudiante "<<i<<" : "; cin>>nota1;
        cout<<"Indique la nota 2 del estudiante "<<i<<" : "; cin>>nota2;
        cout<<"Indique la nota 3 del estudiante "<<i<<" : "; cin>>nota3;

        media =(nota1+nota2+nota3)/3;

        cout<<"\nEl Promedio del estudiante "<<i<<" es : "<<media<<endl;
    }

}

