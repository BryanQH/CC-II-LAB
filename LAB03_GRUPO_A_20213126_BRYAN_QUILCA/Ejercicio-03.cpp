#include <iostream>

using namespace std;

/*Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de
una persona y por medio de una función calcule su edad en años, meses y días.
*/

int cal_anho(int a,int b);
int  cal_mes(int a, int b,int c,int d);
int cal_dia(int a, int b,int c,int d,int e,int f);

int main(){

    int a,b,c,d,e,f;
    cout<<"Ingrese el anho actual :"; cin>>a;
    cout<<"Ingrese el mes actual :"; cin>>c;
    cout<<"Ingrese el dia actual :"; cin>>e;
    cout<<"Ingrese el anho de nacimiento :"; cin>>b;
    cout<<"Ingrese el mes de nacimiento :"; cin>>d;
    cout<<"Ingrese el dia de nacimineto :"; cin>>f;

    cout<<"\n Su edad es "<<cal_anho(a,b)<< " con "<<cal_mes(a,b,c,d)<<" meses y "<<cal_dia(a,b,c,d,e,f)<<" dias ";

    return 0;
}

int cal_anho(int a,int b){
     int A;
     A = (a-b)-1;
     return A;



}
int  cal_mes(int a, int b,int c,int d){
    int Z,C;

    Z= ((a*12)+c)-((b*12)+d);
    C= Z%12;
    return C;

}
int cal_dia(int a, int b,int c,int d,int e,int f){
    int V,M;
    V=(((a*365)+(c*30)+e) -((b*365)+(d*30)+f));

    M= V%365;
    return M;

}


