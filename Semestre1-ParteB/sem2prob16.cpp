#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
	float metros=0,resul=0;
	int ope=0;
	cout<<"ingrese los metros a convertir"<<endl;
	cin>>metros;
	cout<<"elija una opci�n a trav�s de un n�mero"<<endl;
	cout<<"1,de metros a cent�metros"<<endl;
	cout<<"2,de metros a kil�metros"<<endl;
	cout<<"3,de metros a pulgadas"<<endl;
	cin>>ope;
	switch(ope){ 
		case 1:resul=metros*100;
		cout<<"el resultado es:"<<resul<<"cent�metros"<<endl;break;
		case 2:resul=metros/1000;
		cout<<"el resultado es:"<<resul<<"kil�metros"<<endl;break;
		case 3:resul=metros*39.3;
		cout<<"el resultado es:"<<resul<<"pulgadas"<<endl;break;
		default:cout<<"el n�mero es incorrecto"<<endl;break;
	}
system("pause");
return 0;
}
