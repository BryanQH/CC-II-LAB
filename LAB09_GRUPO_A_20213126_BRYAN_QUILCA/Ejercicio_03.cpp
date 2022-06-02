#include<iostream>
#include<list>
#include<cmath>
using namespace std;
template <class date>
string correo_alumno(char,date);
int main() {
    char n; string a;

    for (int i = 0; i < 5; i++) {
        cout << "----Alumno ->"<<i+1<<"----" << endl;
        cout<<endl;

        cout << "Digite la primera letra de su nombre: ";
        cin >> n;
        cout << "Digite su primer apellido: ";
        cin >> a;
        cout << "El correo generado es: " << correo_alumno<string>(n,a) << endl;
        cout<<endl;
    }
    return 0;
}

template <class date>
string correo_alumno(char x, date y) {
    string correo = "@unsa.edu.pe";
    correo = x + y + correo;
    return correo;
}
