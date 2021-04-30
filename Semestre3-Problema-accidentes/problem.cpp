#include<iostream>
using namespace std;
int main (int argc, char *argv[]){
	
	int array[3][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	int var, tem;
	int calle, avenida, accidente;
	int fila, columna, mayor;
	
	cout<<"Cuantos accidentes va a ingresar: ";
	cin>>var;
	for (int i=0; i<var; i++){
		cout<<(i+1)<<"- Cantidad de accidentes: ";
		cin>>accidente;
		cout<<"Indique la calle: ";
		cin>>fila;
		cout<<"Indique la avenida: ";
		cin>>columna;
		tem = accidente;
		
		for (int i=0; i<3; i++){
			
			for (int k=0; k<4; k++){
				array[fila][columna] = accidente;	
				
				if(array[i][k] > mayor){
					mayor = array[i][k];
					
				}
			}
		}
	}
	cout<<"\n";
	for (int i=0; i<3; i++){
			
		for (int k=0; k<4; k++){
			cout<<array[i][k] <<"\t";
			if(mayor == array[i][k]){
				calle = i;
				avenida = k;
			}		
		}
		cout<<"\n";
	}
	cout<<"La mayor cantidad de accidentes acurrio en la calle: "<<calle<<", avenida: "<<avenida;
return 0;
}
