#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main (int argc, char *argv[]){
	
	struct planilla{
		char nombre [10];
		float salario;
	}linea[5];
	
	double dinero [8] = {20, 10, 5, 1, 0.25, 0.10, 0.05, 0.01}, monedados [8]; 
	int monedauno [8] = {0, 0, 0, 0, 0, 0, 0, 0,}, desgloce[8]; 
	double salarios, acumsalario=0;
	
	// Ciclo para cargar los nombres y los salarios
	for (int i=0; i<5; i++){
		system("color 7d");
		cout<< "Nombre "<< (i+1)<< ": ";
		cin>> linea[i].nombre;
		cout<< "Salario "<< (i+1)<< ": ";
		cin>> linea[i].salario;	
		cout<<"\n";
	}
	
	// Encabezado
	system ("cls");
	cout<< "\n";
	cout<< "\t\t\t\t"<< "CEREZO COMPANY"<< "\n";
	cout<< "\t\t\t"<< "     DESGLOCE DE PLANILLA"<< "\n";
	cout<< "\n";
	cout<< "NOMBRE"<< "\t"<< "SAL."<< "\t"<< "B/20"<< "\t"<< "B/10"<< "\t"<< "B/5"<< "\t"<< "B/1"<<"\t"<< "B/0.25"<<"\t"<< "B/0.10"<< "\t"<< "B/0.05"<<"\t"<<"B/0.01"<<"\n";
	
	// Primer ciclo para imprimir los nombres y salarios ingresados, para sumar el total de los salarios y para asignar a una variable el salario a desglosar
	for (int i=0; i<5; i++){
		
		cout<<linea[i].nombre<<"\t";
		cout<<linea[i].salario<<"\t";
		acumsalario = acumsalario + linea[i].salario;
		salarios = linea[i].salario;
		/* 
		*  Segundo ciclo para sacar todos los desgloses de cada salario, sumar cada columna de cada moneda,
		*  calcular el total de billetes de cada moneda y para imprimir los desgloce respectivos
		*/
		for (int j=0; j<8; j++){
			desgloce[j] = salarios / dinero[j];
			salarios = salarios - (desgloce[j] * dinero[j]);
			monedauno[j] = monedauno[j] + desgloce[j];
			monedados[j] = dinero[j] * monedauno[j];
			cout<<desgloce[j]<<"\t";
		}
		cout<<"\n";	
		cout<<"---------------------------------------------------------------------------------"<<"\n";
	}
	
	// Imprimiendo el total de todos los salarios
	cout<<"Total"<<"\t"<<acumsalario<<"\t";
	
	// Ciclo para imprimir la suma de cada columna de cada moneda
	for (int k=0; k<8; k++){
		cout<<monedauno[k]<<"\t";
	}
	
	// Imprimiendo el total de todos los salarios
	cout<<"\n";
	cout<<"---------------------------------------------------------------------------------"<<"\n";
	cout<<"Tot.F"<<"\t"<<acumsalario<<"\t";
	
	// Ciclo para imprimir la cantidad total de billetes de cada moneda
	for (int k=0; k<8; k++){
		cout<<monedados[k]<<"\t";
	}
	cout<<"\n";
return 0;	
}
