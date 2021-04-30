#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float tot=0,ope=0;
	cout<<"ingrese el total de ventas de un mes"<<endl;
	cin>>tot;
	if (tot>=0&&tot<=100)
	{cout<<"0% de bonificacion"<<endl;}
	else
	if (tot>=1001&&tot<=5000)
	{cout<<"3% de bonificacion"<<endl;
	ope=(tot*3)/100;
	cout<<"El monto a recibir es de:"<<ope<<endl;
	}
	else
	if (tot>=5001&&tot<=20000)
	{cout<<"5% de bonificacion"<<endl;
	ope=(tot*5)/100;
	cout<<"El monto a recibir es de:"<<ope<<endl;
	}
	else
	if (tot>20000)
	{cout<<"8% de bonificación"<<endl;
	ope=(tot*8)/100;
	cout<<"El monto a recibir es de:"<<ope<<endl;
	}
	system("pause");
	return 0;
}
