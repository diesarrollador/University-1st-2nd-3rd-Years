#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
	int dia=0;
	cout<<"Escoja un d�a de la semana a trav�s de un n�mero"<<endl;
	cout<<"1,lunes"<<endl;
	cout<<"2,martes"<<endl;
	cout<<"3,miercoles"<<endl;
	cout<<"4,jueves"<<endl;
	cout<<"5,viernes"<<endl;
	cout<<"6,sabado"<<endl;
	cout<<"7,domingo"<<endl;
	cin>>dia;
	switch(dia){
		case 1:cout<<"lunes comienza con el pie derecho"<<endl;break;
		case 2:cout<<"martes ten un d�a con mucho animo"<<endl;break;
		case 3:cout<<"miercoles de sorpresas buenas"<<endl;break;
		case 4:cout<<"jueves ya vas a la mitad de la semana"<<endl;break;
		case 5:cout<<"viernes �ltimo d�a de trabajo"<<endl;break;
		case 6:cout<<"sabado para descanzar"<<endl;break;
		case 7:cout<<"domingo para salir en familia"<<endl;break;
		default:cout<<"n�mero incorrecto"<<endl;break;
	}
	system("pause");
	return 0;
}
