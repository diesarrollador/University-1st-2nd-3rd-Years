#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main (int argc, char *argv[]){

	float ventas[5][6],sumafilas[5],sumacolumnas[6],sumasuma=0; 
	for (int i=0; i<5; i++){ 	
		system("color 2b");  
		sumafilas[i]=0;
		sumasuma=0;
		for (int j=0; j<6; j++){
			cout<<"Introduzca la venta de la sucursal "<<(i+1)<<", "<<"Mes "<<(j+1)<<": ";
			cin>>ventas[i][j]; 
			sumafilas[i] = sumafilas[i] + ventas[i][j]; 
			sumacolumnas[j] = sumacolumnas[j] + ventas[i][j]; 
			sumasuma = sumasuma + sumacolumnas[j]; 
		}	
	}
	system("cls");
	cout<<"\n";
	cout<<"\t\t\t"<<"CEREZO COMPANY"<<"\t\t"<<endl;
	cout<<"\t\t"<<"INFORME SEMESTRAL DE CUENTAS"<<"\t"<<"\n"<<endl;
	cout<<"SUCURSAL #"<<"\t"<<"\t" <<"ENE"<<"\t" <<"FEB"<<"\t" <<"MAR"<<"\t" <<"ABR"<<"\t" <<"MAY"<<"\t" <<"JUN"<<"\t" <<"TOT/S";
	for (int i=0; i<5; i++){  	
		cout<<"\n";
		cout<<"Sucursal "<<(i+1);  
		for (int j=0; j<6; j++){
			cout<< "\t"<<"|"<< ventas[i][j]<<"|";
		}
		cout<< "\t"<<"|"<<sumafilas[i]<<"|"; 
	}
	cout<<"\n";
	cout<<"-----------------------------------------------------------------------"<<"\n";
	cout<<"TOTAL/M"<<"\t";
	for (int k=0; k<6; k++){ 
		cout<< "\t"<<"|"<<sumacolumnas[k]<<"|"; 
	}
	cout<<"\t"<<"|"<<sumasuma<<"|"<<"\n"; 

return 0;
}
