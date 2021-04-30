#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE,"spanish");
	int esta=0;
	cout<<"¿En qué estación está?"<<endl;
	cout<<"elija un número"<<endl;
	cout<<"1,verano"<<endl;
	cout<<"2,invierno"<<endl;
	cout<<"3,otoño"<<endl;
	cout<<"4,primavera"<<endl;
	cin>>esta;
	switch (esta){
		case 1:cout<<"El verano es bueno para dar una vuelta por la playa"<<endl;break;
		case 2:cout<<"debe hacer mucho frio en tu casa"<<endl;break;
		case 3:cout<<"Las calles de tu barrio deben estar repletas de hojas"<<endl;break;
		case 4:cout<<"Sal y aprecia las hojas nuevas de los arboles"<<endl;break;
		default:cout<<"el numero ingresado esta fuera de rango"<<endl;
	}
	system("pause");
	return 0;
}
