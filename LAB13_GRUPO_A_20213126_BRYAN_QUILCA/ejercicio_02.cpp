
using namespace std;
#include <iostream>

struct Alumno{

	string Nombre;
	char Grupo;
	float fase1;
	float fase2;
	float fase3;
	float proyecto_final;
	
};

int main(int argc, char *argv[]) {
	int n ,valor;
	
	cout<<"Indique la cantidad de alumnos : ";
	cin>>n;
	Alumno* alumno = new Alumno[n];
	for(int i=0; i<n; i++){
		cout<<"Nombre del alumno "<<i+1<<" :" ; cin>>alumno[i].Nombre;
		cout<<"DIgite el grupo al que pertenece "<<alumno[i].Nombre<<" :"; cin>>alumno[i].Grupo;
		cout<<"Digite la nota de la Primera Fase de "<<alumno[i].Nombre<<" :"; cin>>alumno[i].fase1;
		cout<<"Digite la nota de la Segunda Fase de "<<alumno[i].Nombre<<" :"; cin>>alumno[i].fase2;
		cout<<"Digite  la nota de la Tercera Fase de "<<alumno[i].Nombre<<" :"; cin>>alumno[i].fase3;
		cout<<"Digite la nota del Proyecto Final de "<<alumno[i].Nombre<<" :"; cin>>alumno[i].proyecto_final;
		
	}
	
	
	for(int i=0;i<n; i++){
		float n_final1=0, n_final2=0;
		n_final1=(alumno[i].fase1*(15/100.0))+(alumno[i].fase2*(20/100.0));
		n_final2=(alumno[i].fase3*(25/100.0))+(alumno[i].proyecto_final*(40/100.0));
		cout<<" El alumno(a) "<<alumno[i].Nombre<<" del grupo "<<alumno[i].Grupo<<" tiene las siguientes notas: "<<endl;
		cout<<"  Fase 1: "<<alumno[i].fase1<<endl;
		cout<<"  Fase 2: "<<alumno[i].fase2<<endl;
		cout<<"  Fase 3: "<<alumno[i].fase3<<endl;
		cout<<"  Proyecto Final: "<<alumno[i].proyecto_final<<endl;
		cout<<"  Nota Final : "<<n_final1+n_final2<<endl;
	}
	return 0;
}
