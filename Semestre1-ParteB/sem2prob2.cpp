#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int pro=0;
	cout<<"Ingese la produccion semanal";
	cin>>pro;
	if (pro>=100)
	{cout<<"El colaborador encargado recibira un incentivo";}
	else
	if (pro<=100)
	{cout<<"Mejore para la proxima";}
	system("pause");
	return 0;
}
