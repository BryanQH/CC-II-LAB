
#include <iostream>
#include <vector>
using namespace std;

class Stack{
private:
	vector<int>Pila;
	int indexTop;
	int maxSize;
public:
	Stack();
	int top();
	void push(int);
	void pop();
	void imprimir_pila();
	void Buscar(int);
	
};

Stack::Stack(){
	indexTop=-1;
	
}

void Stack::push(int elemento)
{
	Pila.push_back(elemento);
}

void Stack::pop()
{
	if(Pila.size()==0){
		cout<<"La pila no tiene elementos"<<endl;
	}
	else{
		Pila.pop_back();
		cout<<"Elemento Eliminado."<<endl;
	}
}

void Stack::imprimir_pila(){
	if(Pila.size()==0){
		cout<<"La pila no tiene elementos"<<endl;
	}
	else{
		cout<<"**********Los Elementos de la Pila son**********"<<endl;
		for(int i=Pila.size()-1; i>=0;i--){
			cout<<Pila[i]<<endl;
		}
	}
}
void Stack::Buscar(int num){
	int numero,j=0;
	if(Pila.size()==0){
		cout<<"La pila no tiene elementos"<<endl;
	}
	else{
	
		for(int i=0; i<Pila.size();i++){
			if(Pila[i]==num){
				cout<<endl<<"El numero "<<num<<" se encontro en la ubicacion "<<i+1<<endl;
				j++;
			}
		}
		if(j<1){
			cout<<endl<<"No se encontro el numero ingresado"<<endl;
		}
	}
}
int main(int argc, char *argv[]) {
	vector<int>Pila;
	Stack pila;
	string op;
	
	while(true){

		cout<<"------------OPCIONES----------"<<endl;
		cout<<"1. Agregar elemento a la Pila"<<endl;
		cout<<"2. Eliminar elemento de la Pila"<<endl;
		cout<<"3. Buscar elemento en la Pila"<<endl;
		cout<<"4. Mostrar elemento de la Pila"<<endl;
		cout<<"5. Salir"<<endl;
		cout << "Opcion: ";
		cin>>op;
		string numero;
		int _num;
		if(op=="1"){
			cout<<"Digite un numero para insertar en la Pila" <<endl;
			cin>>numero;
			sscanf(numero.data(), "%d", &_num);
			pila.push(_num);
		}
		else if(op=="2"){
			pila.pop();
		}
		else if(op=="3"){
			cout<<"Digite el numero que desee buscar en la Pila" <<endl;
			cin>>numero;
			sscanf(numero.data(), "%d", &_num);
			pila.Buscar(_num);
		}
		else if(op=="4"){
			pila.imprimir_pila();
		}
		else if(op=="5"){
			break;
		}
		else{
			cout<<"Opcion inválida. Vuelva a ingresar la opción."<<endl;
		}	
	}
	
	return 0;
}
