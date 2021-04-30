#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float med=0,total=0,lun=0,mar=0,mie=0,jue=0,vie=0;
	cout<<"ingrese la produccion total por dia de lunes a viernes"<<endl;
	cin>>lun;
	cin>>mar;
	cin>>mie;
	cin>>jue;
	cin>>vie;
	total=lun+mar+mie+jue+vie;
	med=total/5;
	cout<<"La produccio total es de:"<<total<<endl;
	cout<<"La produccion media es de:"<<med<<endl;
	if (med<=50)
	{cout<<"el incentivo sera de 5%";}
	else 
	if (med>50&&med<75)
	{cout<<"El incentivo sera de 20%";}
	else
	if (med>75)
	{cout<<"el incentivo sera de 30%";}
system ("pause");
return 0;
}

