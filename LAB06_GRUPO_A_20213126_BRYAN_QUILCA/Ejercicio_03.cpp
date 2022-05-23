#include <iostream>
#include <stdlib.h>
using namespace std;


class persona{
    private:
        string nombre;
        int d_ac,m_ac,an_ac;
        int d_nc,m_nc,an_nc;
    public:
        persona(string,int,int,int,int,int,int);//constructor
        void cal_edad();
};

persona::persona(string _nombre,int _d_ac,int _m_ac,int _an_ac,int _d_nc,int _m_nc,int _an_nc){
    nombre = _nombre;
    d_ac = _d_ac;
    m_ac = _m_ac;
    an_ac = _an_ac;
    d_nc = _d_nc;
    m_nc = _m_nc;
    an_nc = _an_nc;
}
void persona::cal_edad(){
    int E;

    E = an_ac - an_nc;
    if(m_ac>m_nc){
        cout<<"Su edad --> "<<E<<endl;
    }
    else if(m_ac == m_nc){
        if(d_ac>=d_nc){
            cout<<"Su edad --> "<<E<<endl;
        }
        else{
            cout<<"Su edad --> "<<E-1<<endl;
        }
    }
    else{
        cout<<"Su edad --> "<<E-1<<endl;
    }
}

int main(){
    string name;
    int d,m,a;
    int d0,m0,a0;

    cout<<"Ingrese su nombre: "; cin>>name;
    cout<<"****INGRESE LA FECHA ACTUAL****"<<endl;
    cout<<" DIA: "; cin>>d;
    cout<<" MES: "; cin>>m;
    cout<<" ANIO: "; cin>>a;
    cout<<"****INGRESE SU AÑO DE NACIMIENTO****"<<endl;
    cout<<" DIA: "; cin>>d0;
    cout<<" MES: "; cin>>m0;
    cout<<" ANIO: "; cin>>a0;

    persona n1(name,d,m,a,d0,m0,a0);
    n1.cal_edad();

    system("pause");
    return 0;
}
