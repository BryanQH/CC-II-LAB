#include <iostream>
#include<stdlib.h>

using namespace std;


#include <iostream>
#include <string.h>
using namespace std;


int main () {
    int Matriz[3][3];
    int f,c, sum_fil=0, n_fila=0, mayor_fil=0;

    for (f=0;f<3;f++) {
        for (c=0;c<3;c++) {
            printf ("Introduce el valor de [%i][%i] : ",f,c);
            scanf ("%i",&Matriz[f][c]);
        } printf ("\n Fila [%i] completada\n",f+1);
    }

    for (f=0;f<3;f++) {
        sum_fil=0;
        n_fila=f+1;
        for (c=0;c<3;c++) {
            sum_fil+=Matriz[f][c];
            if (sum_fil > mayor_fil) {
                mayor_fil=sum_fil;
            }
        }
    }

    printf ("\n");
    printf ("La fila con suma mayor es: %i con resultado %i",n_fila,mayor_fil);

    return 0;
}
