#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float pro1=0,pro2=0,pro3=0,pro4=0,pro5=0,total=0,desc=0,pagar=0;
	cout<<"ingrese el precio de cincos productos"<<endl;
	cin>>pro1;
	cin>>pro2;
	cin>>pro3;
	cin>>pro4;
	cin>>pro5;
	total=pro1+pro2+pro3+pro4+pro5;
	if (total>100)
	{desc=total*0.10;
	pagar=total-desc;
	cout<<"el descuento es de:"<<desc<<endl;
	cout<<"el total a pagar es de:"<<pagar<<endl;
	}
	else 
	if (total<=100)
	{cout<<"el total a pagar es de:"<<total<<endl;
	}
	system("pause");
	return 0;
}
