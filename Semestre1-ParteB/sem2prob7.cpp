#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float cant=0,cant1=0,cant2=0,cant3=0,cant4=0,cant5=0,precio=0,sub=0,desc=0,total=0,itbms=0;
	cout<<"ingrese la cantidad de unidades que compro";
	cin>>cant;
	
	if (cant<=3)
	{cout<<"ingrese los precios";
	cin>>cant1;
	cin>>cant2;
	cin>>cant3;
	precio=cant1+cant2+cant3;
	sub=precio*0.15;
	desc=precio-sub;
	itbms=desc*0.07;
	total=desc+itbms;
	cout<<"El subtotal es:"<<desc<<endl;
	cout<<"El ITBMS es:"<<itbms<<endl;
	cout<<"El precio a pagar es:"<<total<<endl;}
	
	else
	
	if (cant>=5)
	{cout<<"ingrese los precios";
	cin>>cant1;
	cin>>cant2;
	cin>>cant3;
	cin>>cant4;
	cin>>cant5;
	precio=cant1+cant2+cant3,cant4,cant5;
	sub=precio*0.20;
	desc=precio-sub;
	itbms=desc*0.07;
	total=desc+itbms;
	cout<<"El subtotal es:"<<desc<<endl;
	cout<<"El ITBMS es:"<<itbms<<endl;
	cout<<"El precio a pagar es:"<<total<<endl;}
	
	system("pause");
	return 0;
}
