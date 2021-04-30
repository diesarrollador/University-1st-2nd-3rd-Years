#include <iostream> 
#include <stdlib.h>
using namespace std;

int descuento(int a);

int main(){
	
	int a=0;
	
	cout<<"introduzca la cantidad de compras:";
	cin>>a;
	
	descuento(a);
	
	system("pause");
	return 0;	
}
int descuento(int a){
	float precio=0,suma=0,desc=0,suma2=0,paga=0;
	
	for(int i=0;i<a;i++)
	{
		cout<<"ingrese precio ["<<i+1<<"]:";
		cin>>precio;
		if (precio>=5)
		{
			suma=suma+precio;
			desc=suma-(suma*0.25);
		}
		else
		if (precio<5)
		{
			suma2=suma2+precio;
		}
	}
	paga=desc+suma2;
	cout<<"Precio a pagar:"<<paga<<endl;
}
