#include<iostream>
#include<list>
#include<cmath>

using namespace std;

template <class T>
T val_min(T num1[5]) {
    T min = num1[0];
    for (int i = 0; i < 5; i++) {
        if (num1[i] <= min)
            min = num1[i];
    }
    return min;
}
template <class T>
T val_max(T num1[5]) {
    T max = num1[0];
    for (int i = 0; i < 5; i++) {
        if (num1[i] >= max)
            max = num1[i];
    }
    return max;
}
int main() {
    int ArrayEntero[5] = { 10,7,2, 8, 6 };
    float ArrayFloat[5] = { 12.1, 8.7, 5.6, 8.4, 1.2 };
    cout <<"ArrayEntero[5] = { 10,7,2, 8, 6 };"<<endl;
    cout << "\nNumero menor del arreglo: " <<val_min<int>(ArrayEntero) << endl;
    cout << "Numero mayor del arreglo: " <<val_max<int>(ArrayEntero) << endl;
    cout << endl;
    cout <<"ArrayFloat[5] = { 12.1, 8.7, 5.6, 8.4, 1.2 };"<<endl;
    cout << "\nNumero menor del arreglo: " <<val_min<float>(ArrayFloat) << endl;
    cout << "Numero mayor del arreglo: " <<val_max<float>(ArrayFloat) << endl;
    return 0;
}
