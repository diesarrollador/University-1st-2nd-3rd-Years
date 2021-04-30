#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"spanish");
	
	int dia,mes,anno;
	
	cout<<"ingrese el dia:";
	cin>>dia;
	cout<<"ingrese el mes:";
	cin>>mes;
	cout<<"ingrese el año:";
	cin>>anno;
	
	if(dia<30)
	{
		dia=dia+1;
	}
	else
	{
		dia=1;
		if(mes<12)
		{
			mes=mes+1;
		}
		else
		{
			mes=1;
			{
				anno=anno+1;
			}
		}
	}
	
	
	cout<<dia<<"/"<<mes<<"/"<<anno<<endl;
system("pause");
return 0;
}
