#include <iostream>

using namespace std;


/*Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando los dos anteriores a él.*/

int main(){
	int n,a=0,b=1,c=1;

	do{
		cout<<"Digite la cantidad de digitos de la serie: ";
		cin>>n;
	}while(n<=0);

	cout<<"1 ";
	for(int i=1;i<n;i++){
		c = a + b;
		cout<<c<<" ";
		a = b;
		b = c;
	}

	cout<<"\n";
	return 0;
}

