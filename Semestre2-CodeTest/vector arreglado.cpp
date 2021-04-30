#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	float suma1=0,suma2=0,prom1=0,prom2=0;
	int cuan1=0,i,de=0,cuan2=0;
	double ventas1[cuan1],ventas2[cuan2],debajo[cuan2],sumavectore=0;
	//INGRESANDO VALORES EN VECTOR A
	cout<<"Cuantas ventas se hicieron en la empresa 1"<<endl;
	cin>>cuan1;
	for(int i=0;i<cuan1;i++)
	{
		cout<<"Ingrese dia ["<<i+1<<"]:";
		cin>>ventas1[i];
		suma1=suma1+ventas1[i];
	}
	//PROMEDIO VENTAS VECTOR A
	prom1=suma1/cuan1;
	//INGRESANDO VALORES EN VECTOR B
	cout<<"Cuantas ventas se hicieron en la empresa 2"<<endl;
	cin>>cuan2;
	for(int i=0;i<cuan2;i++)
	{
		cout<<"Ingrese dia ["<<i+1<<"]:";
		cin>>ventas2[i];
		suma2=suma2+ventas2[i];
	}
	//PROMEDIO VENTAS VECTOR B
	prom2=suma2/cuan2;
	cout<<endl;
	//SUMA DEL VECTOR A Y B
	sumavectore=suma1+suma2;
	//MOSTRANDO RESULTADOS
	cout<<"La suma de ventas del local 1 y local 2 es:"<<sumavectore<<endl;
	cout<<endl;
	cout<<"el promedio de ventas del local 1 es:"<<prom1<<endl;
	cout<<"el promedio de ventas del local 2 es:"<<prom2<<endl;
	cout<<endl;
	//MOSTRANDO VENTAS POR DEBAJO DEL PROMEDIO DEL VECTOS B 
	for(int i=0; i<cuan2; i=i+1)
	{
		if (ventas2[i]<prom2)
		{
			debajo[de]=ventas2[i];de++;
		}
	}
	cout<<endl;
	cout<<"Ventas que estan por debajo del promedio del local 2"<<endl;
	for (int i=0; i<de; i++)
	{
		cout<<"venta por debajo:"<<debajo[i]<<endl;
	}
	
	system("pause");
	return 0;
}	

