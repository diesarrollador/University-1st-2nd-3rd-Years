#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<stdio.h>
#include<string>
using namespace std;
int main(int argc, char *argv[])
{
	int nota=0;
	char d;
	do
	{
		cout<<"Ingrese la calificacion de un estudiante"<<endl;
	    cin>>nota;
	
	    if(nota>=91)
	    {
		    cout<<"equivale a una A"<<endl;
	    }
	    else
	    if(nota>=81)
	    {
		    cout<<"equivale a una B"<<endl;
	    }
	    else
	    if(nota>=71)
	    {
		    cout<<"equivale a una C"<<endl;
	    }
	    else
	    if(nota>=61)
	    {
		    cout<<"equivale a una D"<<endl;
	    }
	    else
		cout<<"equivale a una F"<<endl;
		do
		{
			cout<<"Desea continuar? (s/n):"<<" ";
			cin>>d;
		}while(d!='s'&&d!='S'&&d!='n'&&d!='N');
	}while(d=='s','S'&&d!='n'&&d!='N');
	
return 0;
}
	
	

