#include <iostream>
#include<stdlib.h>

using namespace std;

#include <iostream>
using namespace std;
bool buscar(int x, int arrelglo[]){
	for(int i=0; i<8; i++){
		if(arrelglo[i]==x){
			return true;
		}

	}
	return false;
}
int main(int arrg, char *arrga[]) {
	int arreglo[8];
	int x;
	cout<<"Ingrese 8 números: "<<endl;
	for(int i=0; i<8;i++){
		cout<<"Numero "<<i+1<<": "; cin>>arreglo[i];
	}
	cout<<"Numero que desea comprobar: "<<endl;
	cin>>x;
	if(buscar(x,arreglo)==1){
		cout<<"True";
	}
	else{
		cout<<"False";
	}

	return 0;
}
