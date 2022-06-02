
#include<iostream>
#include<list>
#include<cmath>
using namespace std;

template <class P>
P menor(P num1, P num2, P num3) {
    P min=num1;
    P alt[3] = { num1, num2, num3 };
    for (int i = 0; i < 3; i++) {
        if (alt[i] <= min)
            min = alt[i];
    }
        return min;
    }
template <class P>
P mayor(P num_1, P num_2, P num_3) {
    P max = num_1;
    P alt[3] = { num_1, num_2, num_3 };
    for (int i = 0; i < 3; i++) {
        if (alt[i] >= max)
        max = alt[i];
    }
    return max;
}
int main() {
    cout << "Numeros 10,15,20 "<<endl;
    cout <<"Menor -> "<< menor<int>(10,15,20)<< " Mayor : " << mayor<int>(10, 15, 20)<< endl;
    cout << "Numeros : 15.6, 17.8, 18.9"<<endl;
    cout<< "Menor ->"<< menor<float>(15.6, 17.8, 18.9) << " Mayor: " << mayor<float>(15.6, 17.8, 18.9)<< endl;
    cout << "Numeros : 3.567, 7.3573, 10.234"<<endl;
    cout<< "Menor -> "<< menor<double>(3.567, 7.3573, 10.234) << " Mayor: " <<mayor<double>(3.567, 7.3573, 10.234)<< endl;
    return 0;
}
