#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]){
	float totalt,itbms,totalf;
	// Estructura de cuatro filas y dos columnas
	struct factura{
		char descripcion[30];
		int cantidad;
		float precio;
		float total;
	}linea[2]; // Columnas de la estructura
	
	for (int i=0; i<2; i++){
		system ("color 2b");
		cout<<"Introduzca la descripcion: ";
		cin>>linea[i].descripcion;
		cout<<"Introduzca la cantidada: ";
		cin>>linea[i].cantidad;
		cout<<"Introduzca el precio: ";
		cin>>linea[i].precio;
		
		linea[i].total = linea[i].cantidad*linea[i].precio;
		totalt = totalt+linea[i].total;
		itbms = totalt*0.07;
		totalf = totalt+itbms;
	}
	system ("cls");
	cout<<"\n";
	cout<<"\t\t\t"<<"FACTURA"<<endl;
	cout<<"CANTIDAD"<<"\t"<<"DESCRIPCION"<<"\t"<<"PRECIO"<<"\t"<<"TOTAL"<<endl;
	for (int i=0; i<2; i++){
		cout<< linea[i].cantidad<< "\t\t"<< linea[i].descripcion<< "\t"<< linea[i].precio<< "\t"<< linea[i].total<<"\n";
	}
	cout<< "----------------------------------------------"<<"\n";
	cout<< "\t\t\t\t"<< "TOTAL.:  " <<totalt<< "\n";
	cout<< "\t\t\t\t"<< "ITBMS.:  " <<itbms<< "\n";
	cout<< "\t\t\t\t"<< "T.FINAL: " <<totalf<< "\n";
return 0;	
}
