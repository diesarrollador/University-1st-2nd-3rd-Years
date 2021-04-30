#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
	float uno=0,dos=0,resul=0;
	int ele=0;
	cout<<"ingrese un número"<<endl;
	cin>>uno;
	cout<<"ingrese otro número"<<endl;
	cin>>dos;
	cout<<"elija una operación a través de un número"<<endl;
	cout<<"1)suma"<<endl;
	cout<<"2)multiplicación"<<endl;
	cout<<"3)división"<<endl;
	cout<<"4)resta"<<endl;
	cin>>ele;
	switch(ele){
		case 1:resul=uno+dos;
		cout<<"el resultado de la suma es:"<<resul<<endl;break;
		case 2:resul=uno*dos;
		cout<<"el resultado de la multiplicación es:"<<resul<<endl;break;
		case 3:resul=uno/dos;
		cout<<"el resultado de la división es:"<<resul<<endl;break;
		case 4:resul=uno-dos;
		cout<<"el resultado de la resta es:"<<resul<<endl;break;
		default:cout<<"numero ingresado incorrecto"<<endl;break;
	}
	system("pause");
	return 0;
}
