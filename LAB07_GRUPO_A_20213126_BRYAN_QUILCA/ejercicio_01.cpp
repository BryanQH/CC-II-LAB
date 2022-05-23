#include <iostream>

using namespace std;


class persona{
    private:
        int edad;
        string nombre;
    public:
        persona(int,string);
        void llamar_persona();

};
class alumno : public persona{
    public:
        alumno(int,string);
        void llamar_alumno();


};
persona::persona(int _edad, string _nombre){
    edad = _edad;
    nombre = _nombre;
}
alumno::alumno(int _edad,string _nombre):persona(_edad,_nombre){

}

void persona::llamar_persona(){
    cout<<"EDAD :"<<edad<<endl;
    cout<<"NOMBRE: "<<nombre<<endl;
}

void alumno::llamar_alumno(){
    llamar_persona();
}

int main()
{
    cout << "Hello world!" << endl;
    alumno A1(14,"bryan");

    A1.llamar_alumno();
    system("\npause");
    return 0;
}
