#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
	int horas,minutos,segundos;
	
	cout<<"ingrese la hora:";
	cin>>horas;
	cout<<"ingrese los minutos:";
	cin>>minutos;
	cout<<"ingrese los segundos:";
	cin>>segundos;
	

	if(segundos<59)
	{
		segundos=segundos+1;
	}
	else
	{
		segundos=0;
		
		if(minutos<59)
		{
		    minutos=minutos+1;	
	    }	
	    else
	    {
	     minutos=0;

		 if(horas<12)  
		 {
			horas=horas+1;
	     } 
	     else
	     {
	        horas=1; 
		 }
	    }
    }
	cout<<"La hora actualizada es>>"<<horas<<"::"<<minutos<<"::"<<segundos<<endl;
	
system("pause");
return 0;
	
}
