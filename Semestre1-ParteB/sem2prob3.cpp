#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float peso=0,esta=0,imc=0;
	cout<<"Ingrese su estatura en centimetros"<<endl;
	cin>>esta;
	cout<<"Ingrese su peso en kg"<<endl;
	cin>>peso;
	imc=peso/esta;
	cout<<"Su indice de masa corporal es de:"<<imc<<endl;
	if (imc<=16)
	{cout<<"Criterio de ingreso al hospital"<<endl;}
	else
	if (imc>16&&imc<=17)
	{cout<<"Infrapeso"<<endl;}
	
	if (imc>17&&imc<=18)
	{cout<<"Bajo peso"<<endl;}
	
	if (imc>18&&imc<=25)
	{cout<<"Peso normal saludable"<<endl;}
	
	if (imc>25&&imc<=30)
	{cout<<"Sobrepeso obesidad tipo 1"<<endl;}
	 
	if (imc>30&&imc<=35)
	{cout<<"Sobrepeso crónico obesidad tipo 2"<<endl;}
	
	if (imc>35&&imc<=40)
	{cout<<"Obesidad pre mórbida tipo 3"<<endl;}
	
	if (imc>40)
	{cout<<"Obesidad mórbida tipo 4"<<endl;}
	
	system("pause");
	return 0;
	
}
