#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
	int hab=0;
	cout<<"elija una habitaci�n a trav�s de un n�mero"<<endl;
	cout<<"1)habitaciones sencillas"<<endl;
	cout<<"2)habitaciones matrimoniales"<<endl;
	cout<<"3)habitaciones dobles"<<endl;
	cout<<"4)habitaciones triples"<<endl;
	cin>>hab;
	switch(hab){
		case 1:cout<<"su habitaci�n se encuentra en el piso 5 y cuenta con una cama"<<endl;break;
		case 2:cout<<"su habitaci�n se encuentra en el piso 10 y cuenta con una cama King size"<<endl;break;
		case 3:cout<<"su habitaci�n se encuentra en  el piso 7 y cuenta con dos camas"<<endl;break;
		case 4:cout<<"su habitaci�n se necuentra en el piso 6 y cuenta con tres camas"<<endl;break;
		default:cout<<"ERROR:" <<hab<<":no est� asociado a ninguna habitaci�n."<<endl;break;
	}
	system("pause");
	return 0;
}
