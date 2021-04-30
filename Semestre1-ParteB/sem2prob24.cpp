#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
	int ele=0,uno=0;
	float resul=0;
	cout<<"ingrese un número entero"<<endl;
	cin>>uno;
	cout<<"1)calcula el doble de un número entero"<<endl;
	cout<<"2)calcula la mitad de un número entero"<<endl;
	cout<<"3)calcula el cuadrado de un número entero"<<endl;
	cout<<"4)para salir"<<endl;
	cin>>ele;
	switch(ele){
		case 1:resul=uno+uno;
		cout<<"el doble del:"<<uno<<",es:"<<resul<<endl;break;
		case 2:resul=uno/2;
		cout<<"la mitad del:"<<uno<<",es:"<<resul<<endl;break;
		case 3:resul=uno*uno;
		cout<<"el cuadrado del:"<<uno<<",es:"<<resul<<endl;break;
		case 4:break;
		default:cout<<"número ingresado incorrecto"<<endl;break;
	}
	system("pause");
	return 0;
}
