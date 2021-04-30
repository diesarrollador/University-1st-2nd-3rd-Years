#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<stdio.h>
#include<string>
using namespace std;
int main (int argc, char *argv[])
{
	float venta[5],aux;
	int i,j;
	char r;
	do
	{
		for(i=0;i<=4;i++)
	    {
		    system("color 2b");
		    system("cls");
		    cout<<"\n\n"<<"Introduzca el numero"<<" "<<i+1<<": ";
		    cin>>venta[i];
	    }
	    for(i=0;i<=3;i++)
	    {
		    for(j=i+1;j<=4;j++)
		    {
			    if(venta[i]<venta[j])
			    {
				    aux=venta[j];
				    venta[j]=venta[i];
				    venta[i]=aux;
			    }
		    }
	    }
        system("cls");
        cout<<"\n\n"<<"Numeros"<<"\n\n"<<"\n\n";
        for(i=0;i<=4;i++)
        cout<<venta[i]<<"\n\n";
        do
        {
		    cout<<"Desea continuar? (s/n):"<<" ";
			cin>>r;
		}while (r!='s' && r!='S'&&r!='n'&&r!='N');
	}while (r=='s','S'&&r!='n'&&r!='N');	
return 0;
}
