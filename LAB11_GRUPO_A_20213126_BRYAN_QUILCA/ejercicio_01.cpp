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
	int elemento, op;
	do {
		
		cout<<"Digite  el elemento "<<i+1<<" de la Pila."<<endl;
		cin>>elemento;
		Pila.push_back(elemento);
		cout<<"Quiere agregar otro elemento?"<<endl;
		cout<<" 1-->si"<<endl<<" 2-->no"<<endl;
		cin>>op;
		i++;
	} while (op==1);
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
    
	return 0;
}