#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;

class Matriz {
private:
	int matriz[3][3];
	int num;
public:
	Matriz();

	void Buscar(int);
};

Matriz::Matriz() {
	srand(time(NULL));
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			matriz[i][j]=1+rand()%(9-1);
		}
	}
	cout<<"-------MATRIZ-------"<<endl;
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}
void Matriz::Buscar(int _num){
	num=_num;
	int contador=0;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(matriz[i][j]==num){
				cout<<"El numero "<<num<<" se hallo en la posicion ["<<i<<"]["<<j<<"]"<<endl;
				contador=contador+1;
			}
		}
	}
	if(contador==0){
		cout<<"El nuemro  "<<num<<" no se pudo encontrar" <<endl;
	}

}


int main (int argc, char *argv[]) {
	Matriz matriz = Matriz();
	matriz.Buscar(5);
	return 0;
}



