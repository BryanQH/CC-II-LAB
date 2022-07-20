#include <iostream>
#include<ctime>

using namespace std;

struct Persona {
	string nombre;
	int dia, mes, anio ;
};
int main() {
	int n;
	cout << "Indique el numero de Personas : ";
	cin>>n;
	Persona* alumnos = new Persona[n];
	for (int i = 0; i < n; i++) {
		cout<<"-------- Persona "<<i+1<<" ---------"<<endl;
        cout << "Nombre: ";
		cin >> alumnos[i].nombre;
        cout<<"\nIngrese su fecha de cumpleanios "<<endl;
		cout << "Dia : ";
		cin >> alumnos[i].dia;
		cout << "Mes : ";
		cin >> alumnos[i].mes;
		cout<< "Anio: ";
		cin >> alumnos[i].anio;
	}
	time_t now= time(0);
	tm* time= localtime(&now);
	for(int i=0; i<n; i++){
		if((time->tm_mon)+1==alumnos[i].mes){
			cout<<"El alumno que cumple años este mes es: "<<alumnos[i].nombre<<endl;
		}
        else{
            cout<<"El alumno que no cumple anios este mes es: "<<alumnos[i].nombre<<endl;
        }
	}
	return 0;
}