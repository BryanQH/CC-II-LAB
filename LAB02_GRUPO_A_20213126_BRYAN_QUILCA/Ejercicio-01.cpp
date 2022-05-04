#include <iostream>

using namespace std;

/*1. Sumar todos los enteros pares desde 2 hasta 100.
*/

int main()
{
    int suma = 0;
    for(int i = 0;i <= 100;i += 2){
        suma = suma + i;
    }
    cout<<"La suma es "<<suma;
    return 0;
}
