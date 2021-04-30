#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float comp=0,desc=0;
	cout<<"ingrese el total de su compra"<<endl;
	cin>>comp;
	
	if (comp>1000)
	{desc=comp-((15*comp)/100);
	cout<<"El precio a pagar con el descuento es de:"<<desc<<endl;}
	else
	if (comp<=1000)
	{cout<<"El precio a pagar es de:"<<comp<<endl;}
	
	system("pause");
	return 0;
}
