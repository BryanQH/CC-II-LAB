#include<iostream>
#include<list>
#include<cmath>

using namespace std;

template <typename R>

void descendente(R li[5]) {
    R num;
    for (int i = 0; i<= 4; i ++) {
        for (int j = i; j <= 4; j += 1) {
            if (li[i] > li[j]) {
                num = li[i];
                li[i] = li[j];
                li[j] = num;
            }
        }
    }
    R li2[5];
    int aux = 0;
    for (int i = 4; i >= 0; i--) {
        li2[aux]= li[i];
        aux++;
    }
    for (int i = 0; i < 5;i ++) {
        cout << li2[i] << " ";
    }
}

template <class R>
void ascendente(R li[5]) {
    R num;
    for (int i = 0; i <= 4; i ++) {
        for (int j = i; j <= 4; j += 1) {
            if (li[i] > li[j]) {
                num = li[i];
                li[i] = li[j];
                li[j] = num;
            }
        }
    }
    for (int i = 0; i < 5; i ++) {
        cout << li[i] << " ";
    }
}


int main() {
    int numero_enteros[5] = { 5,7,2,8,6};
    float numeros_float[5] = { 10.1, 8.4, 3.6, 4.4, 11.2 };

    cout << "El arreglo numero_enteros[5] = { 5,7,2,8,6}: " << endl;
    cout<<"\nOrdenado de Forma ascendente: ";
    ascendente<int>(numero_enteros);
    cout << endl;
    cout<<" Ordenado de Forma descendente: ";
    descendente<int>(numero_enteros);
    cout << endl;

    cout << "\nEl arreglo numeros_float[5] = { 10.1, 8.4, 3.6, 4.4, 11.2 } " << endl;
    cout<<"\nOrdenado de Forma ascendente: ";
    ascendente<float>(numeros_float);
    cout << endl;
    cout<<"Ordenado de Forma descendente: ";
    descendente<float>(numeros_float);
    cout<<"\n";
    return 0;
}
