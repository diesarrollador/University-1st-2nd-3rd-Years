#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
	int ele=0;
	float sal=0,resul=0,resul2=0;
	cout<<"indique cuantoas años lleva trabajando"<<endl;
	cout<<"1)si lleva 5 años trabajando"<<endl;
	cout<<"2)si lleva 6 años trabajando"<<endl;
	cout<<"3)si lleva 7 años trabajando"<<endl;
	cout<<"4)si lleva 8 años trabajando"<<endl;
	cin>>ele;
	switch(ele){
		case 1:cout<<"ingrese su salario actual"<<endl;
		cin>>sal;
		resul=sal*0.35;
		resul2=sal+resul;
		cout<<"su salario actual es de:"<<sal<<endl;
		cout<<"su nuevo salario es de:"<<resul2<<endl;
		cout<<"su aumento es de:"<<resul<<endl;break;
		case 2:cout<<"ingrese su salario actual"<<endl;
		cin>>sal;
		resul=sal*0.41;
		resul2=sal+resul;
		cout<<"su salario actual es de:"<<sal<<endl;
		cout<<"su nuevo salario es de:"<<resul2<<endl;
		cout<<"su aumento es de:"<<resul<<endl;break;
		case 3:cout<<"ingrese su salario actual"<<endl;
		cin>>sal;
		resul=sal*0.48;
		resul2=sal+resul;
		cout<<"su salario actual es de:"<<sal<<endl;
		cout<<"su nuevo salario es de:"<<resul2<<endl;
		cout<<"su aumento es de:"<<resul<<endl;break;
		case 4:cout<<"ingrese su salario actual"<<endl;
		cin>>sal;
		resul=sal*0.53;
		resul2=sal+resul;
		cout<<"su salario actual es de:"<<sal<<endl;
		cout<<"su nuevo salario es de:"<<resul2<<endl;
		cout<<"su aumento es de:"<<resul<<endl;break;
		default:cout<<"número ingresado no es correcto"<<endl;break;
	}
	system("pause");
	return 0;
}
