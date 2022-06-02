#include<iostream>
#include<list>
#include<cmath>

using namespace std;

template <class P>
void operaciones(P num, P num2){
    cout << "\tLa suma es: " << num + num2 << endl;
    cout << "\tLa resta es: " << num - num2 << endl;
    cout << "\tLa multiplicacion es: " << num * num2 << endl;
    cout << "\tLa division es: " << num / num2 << endl;
}
int main() {
while (true) {
    string opcion;

    cout << "Escoja el tipo de numero: ";
    cout << "\n\t1.Numeros enteros \n\t2.Numeros decimales: " << endl; cin >> opcion;
    if (opcion == "1") {
        int a, b;
        cout << "Numero 1: " <<endl;
        cin >> a;
        cout << "Numero 2: " <<endl;
        cin >> b;
        operaciones<int>(a, b);
        break;
    }
    else if (opcion == "2") {
        float a, b;
        cout << "Numero 1: " <<endl; cin >> a;
        cout << "Numero 2: "<< endl; cin >> b;
        operaciones<float>(a, b);
        break;
    }
    else {
        cout << "Valor incorrecto. Vuelva a intentarlo." << endl;
        }
    }
    return 0;
}
