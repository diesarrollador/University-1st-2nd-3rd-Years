#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
	int dia=0;
	cout<<"elija un d�a de la semana a trav�s de un n�mero"<<endl;
	cout<<"1)lunes"<<endl;
	cout<<"2)martes"<<endl;
	cout<<"3)miercoles"<<endl;
	cout<<"4)jueves"<<endl;
	cout<<"5)viernes"<<endl;
	cout<<"6)sabado"<<endl;
	cout<<"7)domingo"<<endl;
	cin>>dia;
	switch(dia){
		case 1:cout<<"usted escogio el d�a lunes"<<endl;break;
		case 2:cout<<"usted escogi	o el d�a martes"<<endl;break;
		case 3:cout<<"usted escogio el d�a miercoles"<<endl;break;
		case 4:cout<<"usted escogio el d�a jueves"<<endl;break;
		case 5:cout<<"usted escogio el d�a viernes"<<endl;break;
		case 6:cout<<"usted escogio el d�a sabado"<<endl;break;
		case 7:cout<<"usted escogio el d�a domingo"<<endl;break;
			if (dia<1&&dia>7)
	    default:cout<<"ERROR:D�a incorrecto"<<endl;
	}

	system("pause");
	return 0;
}
