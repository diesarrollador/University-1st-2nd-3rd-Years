#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]){
	struct factura{
		char nombre[30];
		float venta;
	}linea[10]; 
	
	for (int i=0; i<10; i++){
		system ("color 2b");
		cout<<"Introduzca el nombre del vendedor "<<(i+1)<<": " ;
		cin>>linea[i].nombre;
		cout<<"Introduzca su la venta: ";
		cin>>linea[i].venta;	
	}
	system ("cls");
	cout<<"\n";
	cout<<"INFORME"<<endl;
	cout<<"NOMBRE"<<"\t"<<"VENTA"<<endl;
	for (int i=0; i<10; i++){
		cout<< linea[i].nombre<< "\t"<< linea[i].venta<<"\n";
	}
return 0;	
}
