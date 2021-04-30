#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
	float centi=0,libra=0,resul=0;
	int ele=0;
	cout<<"elija un número"<<endl;
	cout<<"1,de centimetros a pulgadas"<<endl;
	cout<<"2,de libras a kilogramos"<<endl;
	cin>>ele;
	switch(ele){
		case 1:cout<<"ingrese los centímetros a convertir"<<endl;
		cin>>centi;
		resul=centi/2.54;
		cout<<"el resultado es:"<<resul<<endl;break;
		case 2:cout<<"ingrese las libras a convertir"<<endl;
		cin>>libra;
		resul=libra/2.205;
		cout<<"el resultado es:"<<resul<<endl;break;
		default:cout<<"número incorrecto"<<endl;break;
	}
	system("pause");
	return 0;
}
