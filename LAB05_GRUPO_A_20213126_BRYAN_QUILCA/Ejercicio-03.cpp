#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void mostrar(float** array,int tamanio,int tamanio2);
void eliminar(float** array,int tamanio,int tamanio2);
void ordenar(float** array,int tamanio,int tamanio2);
void insertar(float** array,int tamanio,int tamanio2);

int main(){

    int tamanio ,tamanio2;
    cout<<"ingrese el numero de filas: "; cin>>tamanio;
     cout<<"ingrese el numero de columnas: "; cin>>tamanio2;


    float** array=new float*[tamanio];
    for(int i=0;i<tamanio;i++){
        array[i]=new float[tamanio2];
    }

    insertar(array,tamanio,tamanio2);
    ordenar(array,tamanio,tamanio2);
    mostrar(array,tamanio,tamanio2);
    eliminar(array,tamanio,tamanio2);

    for(int i=0;i<tamanio2;i++){
        delete[] array[i];
    }
    delete[]array;
}

void mostrar(float** array,int tamanio,int tamanio2){

    cout<<"\nVECTOR DE NUMEROS:"<<endl;
    for(int i=0;i<tamanio;i++){
        for(int j=0;j<tamanio2;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void eliminar(float** array,int tamanio,int tamanio2){

    int fila,columna;
    cout<<"Mostrar:"<<endl;
    cout<<"Fila: ";
    cin>>fila;
    cout<<"Columna: ";
    cin>>columna;
    array[fila-1][columna-1]=0;
    mostrar(array,tamanio,tamanio2);
}

void ordenar(float** array,int tamanio,int tamanio2){
    srand(time(NULL));
    for(int i=0;i<tamanio;i++){
        for(int j=0;j<tamanio2-1;j++){
            int aux=0;
            for(int h=0;h<tamanio2-1;h++){
                if(array[i][h]>array[i][h+1]){
                    aux=array[i][h+1];
                    array[i][h]=array[i][h+1];
                    array[i][h+1]=aux;
                }
            }
        }
    }
}

void insertar(float** array,int tamanio,int tamanio2){
    srand(time(NULL));
    for(int i=0;i<tamanio;i++){
        for(int j=0;j<tamanio2;j++){
            array[i][j]=1+rand()%(10000-1);
        }
    }
}
