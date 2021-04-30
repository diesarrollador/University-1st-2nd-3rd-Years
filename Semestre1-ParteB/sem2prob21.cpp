#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
	int dia=0;
	cout<<"elija un día de la semana a través de un número"<<endl;
	cout<<"1)lunes"<<endl;
	cout<<"2)martes"<<endl;
	cout<<"3)miercoles"<<endl;
	cout<<"4)jueves"<<endl;
	cout<<"5)viernes"<<endl;
	cout<<"6)sabado"<<endl;
	cout<<"7)domingo"<<endl;
	cin>>dia;
	switch(dia){
		case 1:cout<<"usted escogio el día lunes"<<endl;break;
		case 2:cout<<"usted escogi	o el día martes"<<endl;break;
		case 3:cout<<"usted escogio el día miercoles"<<endl;break;
		case 4:cout<<"usted escogio el día jueves"<<endl;break;
		case 5:cout<<"usted escogio el día viernes"<<endl;break;
		case 6:cout<<"usted escogio el día sabado"<<endl;break;
		case 7:cout<<"usted escogio el día domingo"<<endl;break;
			if (dia<1&&dia>7)
	    default:cout<<"ERROR:Día incorrecto"<<endl;
	}

	system("pause");
	return 0;
}
