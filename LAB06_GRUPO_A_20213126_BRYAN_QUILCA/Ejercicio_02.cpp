#include <iostream>
#include <stdlib.h>
using namespace std;

class student_university{
    private:
        string nombre;
        int cui;
        float nota1,nota2,nota3;
    public:
        student_university(string,int,float,float,float);//constructor
        void media();
        void nota_mayor();
};
student_university::student_university(string _nombre, int _cui, float _nota1,float _nota2,float _nota3){
    nombre = _nombre;
    cui = _cui;
    nota1 = _nota1;
    nota2 = _nota2;
    nota3 = _nota3;
}

void student_university::media(){
    float M;
    M = (nota1 + nota2 + nota3)/3;

    if(M>=10.5){
        cout<<"Nota final: "<<M<<endl<<"El alumno aprobo"<<endl;
    }
    else {
        cout<<"Nota final: "<<M<<endl<<"El alumno desaprobo"<<endl;
    }

}
int main(){
    float a , b,c;
    int cui;
    string n;
    cout<<"Nombre del alumno : "; cin>>n;
    cout<<"CUI : "; cin>>cui;
    cout<<"Digite la nota 1 del alumno : "; cin>>a;
    cout<<"Digite la nota 2 del alumno : "; cin>>b;
    cout<<"Digite la nota 3 del alumno : "; cin>>c;

    student_university M(n,cui,a,b,c);

    M.media();

    system("pause");
    return 0;

}
