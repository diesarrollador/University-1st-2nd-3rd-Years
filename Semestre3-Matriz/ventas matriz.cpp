#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main(int argc, char *argv[]){
	float ventas[5][6],sumafilas[5],sumacolumnas[6],sumasuma=0;  
	string sucursal[5];
	for (int i=0; i<5; i++){ 	// Dos ciclos for para introducir datos y realiza las sumas de las filas y columnas
		system("color 2b");
		cout<<"Introduzca el nombre de la sucursal "<<(i+1)<<": "; 
		cin>> sucursal[i];  
		sumafilas[i]=0;
		sumasuma=0;
		for (int j=0; j<6; j++){
			cout<<"Introduzca la venta de la sucursal de "<<sucursal[i]<<", "<<"Mes "<<(j+1)<<": ";
			cin>>ventas[i][j]; 
			sumafilas[i] = sumafilas[i] + ventas[i][j]; // Sumador que va calculado el total por filas
			sumacolumnas[j] = sumacolumnas[j] + ventas[i][j]; // Sumador que va calculando el total por columnas
			sumasuma = sumasuma + sumacolumnas[j]; //sumador que va calculando el total de total
		}	
	}
	system("cls");	// Encabezado principal
	cout<<"\n";
	cout<<"\t\t\t"<<"CEREZO COMPANY"<<"\t\t"<<endl;
	cout<<"\t\t"<<"INFORME SEMESTRAL DE CUENTAS"<<"\t"<<"\n"<<endl;
	cout<<"SUCUR."<<"\t"<<"\t" <<"ENE"<<"\t" <<"FEB"<<"\t" <<"MAR"<<"\t" <<"ABR"<<"\t" <<"MAY"<<"\t" <<"JUN"<<"\t" <<"TOT/S";
	for (int i=0; i<5; i++){  	// Dos for para mostrar las sucursales ingresadas, las ventas ingresadas y el total por filas en forma de matriz 
		cout<<"\n";
		cout<<sucursal[i];  // Nombre de las sucursales ingresadas
		for (int j=0; j<6; j++){
			cout<< "\t"<<"|"<< ventas[i][j]<<"|"; // Datos de las ventas ingresados
		}
		cout<< "\t"<<"|"<<sumafilas[i]<<"|";  //total por filas o total por sucursal
	}
	cout<<"\n"; // Subtitulo para indicar los totales de cada columna o total por mes
	cout<<"-----------------------------------------------------------------------"<<"\n";
	cout<<"TOTAL/M"<<"\t";
	for (int k=0; k<6; k++){  // Un for para acomodar los totales de cada columna o total por mes
		cout<< "\t"<<"|"<<sumacolumnas[k]<<"|";  // Totales por columnas o total por mes
	}
	cout<<"\t"<<"|"<<sumasuma<<"|"<<"\n"; // Total de totales 
return 0;
}
