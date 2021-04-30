#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float horas=0,cal=0,cal2=0,cal3;
	cout<<"ingrese cuantas horas trabajo a la semana";
	cin>>horas;
	if (horas<=40)
	{cal=horas*16;
	cout<<"Su pago es de:"<<cal<<endl;
	}
	else
	if (horas>40)
	{cal2=horas*16;
	cal3=((horas-40)*20)+cal2;
	cout<<"Su pago es de:"<<cal3<<endl;
	}
	system("pause");
	return 0;
}
