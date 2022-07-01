#include <iostream>
using namespace std;
void Baja(string **&Mx){
	string op;
	string d;
	while (true){
		cout<<"1)Dar de baja por nombre"<<endl;
		cout<<"2)Dar de baja por codigo"<<endl;
		cout<<"3)Regresar al Menu principal"<<endl;
		cin>>op;
		if(op=="1"){
			cout<<"Digite el nombre del producto que desea dar de baja"<<endl;
			cin>>d;
			for(int i=0; i<5;i++){
				if(Mx[i][0]==d){
					Mx[i][3]="0";
				}
			}
		}
		else if(op=="2"){
			cout<<"Digite el codigo del producto que desea dar de baja"<<endl;
			cin>>d;
			for(int i=0; i<5;i++){
				if(Mx[i][1]==d){
					Mx[i][3]="0";
				}
			}
		}
		else if(op=="3"){
			break;
		}
		else{
			cout<<"El opcion elegida es invalida, vuela a intentar"<<endl;
		}
	}
	
}
void Alta(string **&Mx){
	string op;
	string d;
	string num;
	while (true){
		cout<<"1) Dar de alta por nombre"<<endl;
		cout<<"2) Dar de alta por codigo"<<endl;
		cout<<"3) Visualizar productos se dieron de baja"<<endl;
		cout<<"4) Regresar al Menu principal"<<endl;
		cin>>op;
		if(op=="1"){
			cout<<"Digite el nombre del producto que desea dar de alta"<<endl;
			cin>>d;
			for(int i=0; i<5;i++){
				if((Mx[i][0]==d)&&(Mx[i][3]=="0")){
					cout<<"Digite el stock del producto: "<<endl;
					cin>>num;
					Mx[i][3]=num;
				}
			}
		}
		else if(op=="2"){
			cout<<"Digite el codigo del producto que desea dar de alta"<<endl;
			cin>>d;
			for(int i=0; i<5;i++){
				if((Mx[i][1]==d)&&(Mx[i][3]=="0")){
					cout<<"Digite el stock del producto: "<<endl;
					cin>>num;
					Mx[i][3]=num;
				}
			}
		}
		else if(op=="3"){
			for(int i=0; i<5;i++){
				if(Mx[i][3]=="0"){
					cout<<"El producto "<<Mx[i][0]<<" con codigo "<<Mx[i][1]<<" esta dado de baja"<<endl;
				}
			}
		}
		else if(op=="4"){
			break;
		}
		else{
			cout<<"La opcion elegida es invalida, vuela a intentar"<<endl;
		}
	}
}
void Buscar(string **&Mx){
	string op;
	string d;
	cout<<"1)Buscar por nombre"<<endl;
	cout<<"2)Buscar por codigo"<<endl;
	cout<<"3)Regresar al Menu principal"<<endl;
	cin>>op;
	while(true){
		if(op=="1"){
			cout<<"Digite el nombre del producto que deseas buscar"<<endl;
			cin>>d;
			for(int i=0; i<5;i++){
				if((Mx[i][0]==d)&&(Mx[i][0]!="0")){
					cout<<"Nombre del producto: "<<Mx[i][0]<<endl;
					cout<<"Codigo del producto: "<<Mx[i][0]<<endl;
					cout<<"Precio del producto: "<<Mx[i][0]<<endl;
					cout<<"Stock del producto: "<<Mx[i][0]<<endl;
				}
				else{
					cout<<"No existe el producto que desea buscar"<<endl;
				}
			}
		}
		else if(op=="2"){
			cout<<"digite el codigo del producto que desea buscar"<<endl;
			cin>>d;
			for(int i=0; i<5;i++){
				if((Mx[i][1]==d)&&(Mx[i][0]!="0")){
					cout<<"Nombre del producto: "<<Mx[i][0]<<endl;
					cout<<"Codigo del producto: "<<Mx[i][0]<<endl;
					cout<<"Precio del producto: "<<Mx[i][0]<<endl;
					cout<<"Stock del producto: "<<Mx[i][0]<<endl;
				}
				else{
					cout<<"No existe el producto que desea buscar"<<endl;
				}
			}
		}
		else if(op=="3"){
			break;
		}
		else{
			cout<<"La opcion elegida es invalida, vuela a intentar"<<endl;
		}
	}
}
void Modificar(string **&Mx){
	int num;
	int num2;
	string op;
	string d;
	for(int i=0;i<5;i++){
		cout<<" "<<i+1<<") ";
		for(int j=0;j<4;j++){
			cout<<Mx[i][j]<<" ";
		}
		cout<<endl;
	}
	while(true){
		cout<<"Ingrese el numero del producto que deses modificar"<<endl;
		cin>>num;
		num2=num-1;
		cout<<"Que desea modificar"<<endl;
		cout<<"1) Modificar el nombre"<<endl;
		cout<<"2) Modificar el codigo"<<endl;
		cout<<"3) Modificar el precio"<<endl;
		cout<<"4) Modificar el stock"<<endl;
		cout<<"5) Regresar al Menu principal"<<endl;
		cin>>op;
		if(op=="1"){
			cout<<"Digite el nuevo nombre del producto "<<endl;
			cin>>d;
			Mx[num2][0]=d;
		}
		else if(op=="2"){
			cout<<"Digite el nuevo codigo del producto "<<endl;
			cin>>d;
			Mx[num2][1]=d;
		}
		else if(op=="3"){
			cout<<"Digite el nuevo precio del producto "<<endl;
			cin>>d;
			Mx[num2][2]=d;
		}
		else if(op=="4"){
			cout<<"Digite el nuevo stock del producto "<<endl;
			cin>>d;
			Mx[num2][3]=d;
		}
		else if(op=="5"){
			break;
		}
		else{
			cout<<"La opcion elegida es invalida, vuela a intentar"<<endl;
		}
	}
	
}
void insert_dato(string **&Mx){
	for(int j=0; j<5;j++){
		for(int k=0;k<4;k++){
			if(Mx[j][k]=="0"){
				for(int i=0; i<5;i++){
					cout<<"Nombre del producto " <<i+1<<" : ";
					cin>>Mx[i][0];
					cout<<"Codigo del producto " <<i+1<<" : ";
					cin>>Mx[i][1];
					cout<<"Precio del producto " <<i+1<<" : ";
					cin>>Mx[i][2];
					cout<<"Cantidad de stock del producto " <<i+1<<" : ";
					cin>>Mx[i][3];	
				}
			}	
		}
	}
}
void imprimir(string **Mx){
	for(int i=0;i<5;i++){
		for(int j=0; j<4; j++){
			if(Mx[i][3]!="0"){
				cout<<Mx[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
int main(int argc, char *argv[]) {
	string **producto = new string*  [5];
	for (int i = 0; i < 5; i++) {
		producto[i] = new string [4];
	}
	for(int i=0; i<5;i++){
		for(int j=0;j<4;j++){
			producto[i][j]="0";
		}
	}
	for(int i=0; i<5;i++)
	{
		for(int j=0;j<4;j++){
			cout<<producto[i][j];
		}
		cout<<endl;
	}
	string op;
	while(true){
		cout<<"**********Menu**********"<<endl<<endl;
		cout<<"1) Agregar productos"<<endl;
		cout<<"2) Dar de Alta un producto"<<endl;
		cout<<"3) Dar de Baja un producto "<<endl;
		cout<<"4) Modidificar"<<endl;
		cout<<"5) Imprimir"<<endl;
		cout<<"6) Salir"<<endl;
		cin>>op;
		if(op=="1"){
			insert_dato(producto);
		}
		else if(op=="2"){
			Alta(producto);
		}
		else if(op=="3")
		{
			Baja(producto);
		}
		else if (op=="4"){
			Modificar(producto);
		}
		else if(op=="5"){
			imprimir(producto);
		}
		else if(op=="6"){
			break;
		}
		else{
			cout<<"La opcion elegida es invalida, vuela a intentar"<<endl;
		}
		
	}
	return 0;
}
