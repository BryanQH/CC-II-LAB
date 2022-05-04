#include <iostream>

using namespace std;

/*Hacer un programa que desarrolle una función, que genere en pantalla el listado de
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).
*/

int primos(int a,int b);

int main ()
{
	int x =1,y;
	cout<<"ingrese un numero : "<<endl;
	cin>>y;
	cout<<"Los primeros  numeros primos son: "<<primos(x,y);

}
int primos(int a,int b){
    int i=0,j=0,result=0,c=0;
    for(i=a;i<=b;i++)
	{
		for(j=1;j<=i;j++)
		{
			result=i%j;
			if(result==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			cout<<" "<<i;
		}
		c=0;
	}
	return c;

}
