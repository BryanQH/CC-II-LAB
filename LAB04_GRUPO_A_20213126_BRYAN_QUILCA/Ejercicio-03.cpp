#include <iostream>
#include<stdlib.h>

using namespace std;


int main(int arra, char *arrb[]) {
	int Matriz[5][3];
	cout<<"Digite los datos de la matriz"<<endl;
	for(int i=0; i<5;i++){
		for(int j=0; j<3; j++){
			cout<<"Posicion "<<i<<","<<j<<": ";
			cin>>Matriz[i][j];
		}
	}
	for(int i=0; i<5;i++){
		for(int j=0; j<3; j++){
			cout<<Matriz[i][j];
		}
		cout<<endl;
	}
	int sum=0;
	for(int i=0; i<5;i++){
		if(i%2==0){
			for(int j=0; j<3; j++){
				sum=Matriz[i][j]+sum;
			}

		cout<<"la suma de la fila "<<i<<" es: "<<sum<<endl;
		sum=0;
		}
	}
	return 0;
}
