#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int t;

    cout<<"Ingrese tamaño del vector : "; cin>>t;

    for(int i = 0; i<=1000000 ; i++){
        float* array1 = new float[t];
        float* array2 = new float[t];
        float* array3 = new float[t];

        for(int i = 0; i<t ; i++){
            array1[i] = 1+rand()%(31-1);
            array2[i] = 1+rand()%(31-1);
            array3[i] = (array1[i]*array2[i]);
        }
        cout<<"\nLista 1: "<<endl;
        for(int i = 0; i<t ;i++){
            cout<<array1[i]<<" ";
        }
        cout<<endl;

        cout<<"\nLista 2: "<<endl;
        for(int i = 0; i<t ;i++){
            cout<<array2[i]<<" ";
        }
        cout<<endl;

        cout<<"\nProducto punto de lista [1,2]: "<<endl;
        for(int i = 0; i<t ;i++){
            cout<<array3[i]<<" ";
        }
        cout<<endl;
        cout<<"\n*****************"<<endl;

        delete[]array1;
        delete[]array2;
        delete[]array3;
    }
    system("pause");
    return 0;
}
