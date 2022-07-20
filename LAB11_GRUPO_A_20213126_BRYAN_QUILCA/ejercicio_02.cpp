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
	bool empty();
	int top();
	void fun_push();
	void fun_pop();
	void imprimir_pila();
	
};

Stack::Stack(){
	indexTop=-1;
	
}

bool Stack::empty()
{ 
	if(indexTop==-1){
		return true;
	}
	return false;
}

void Stack::fun_push(){
    
	int i=0;
	int n, a;
	do {
		
		cout<<"Ingrese elemento "<<i+1<<" en la Pila."<<endl;
		cin>>n;
		Pila.push_back(n);
		cout<<"Quiere agregar otro elemento en la pila?"<<endl;
		cout<<" 1-->Si"<<endl<<" 2-->No"<<endl;
		cin>>a;
		i++;
	} while (a==1);
}


void Stack::fun_pop(){
    

	Pila.pop_back();
	cout<<"Elemento Eliminado."<<endl;
}

void Stack::imprimir_pila(){
	cout<<"------------Elementos de la Pila------------"<<endl;
	for(int i=Pila.size()-1; i>=0;i--){
		cout<<Pila[i]<<endl;
	}
}
int main(int argc, char *argv[]) {
	vector<int>Pila;
	Stack pila;
	pila.fun_push();
	pila.imprimir_pila();
	pila.fun_pop();
	pila.imprimir_pila();
    
	return 0;
}