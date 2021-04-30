#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void bonificacion (int e);   
int main()
   {
       int e;
    	cout<<"Ingrese la cantidad de colaboradores:";
	   	cin>>e;
	   	
       bonificacion(e);  
       
       system("pause");
       return 0;   
	}
       
void bonificacion(int e){  
   int a=0,d1=0,d2=0,d3=0,d4=0,d5=0;
	   for(int i=0; i<e; i++){
	   	cout<<"Ingrese la venta del colaborador ["<<i+1<<"]:";
	   	cin>>a;
	   	if (a<1000)
		   {
		   	d1=d1+1;
		   }
		   else
		   if (a>=1000 && a<=2500)
		   {
		   	d2=d2+1;
		   }
		   else
		   if (a>=2501 && a<=3500)
		   {
		   	d3=d3+1;
		   }
		   else
		   if (a>=3501 && a<=5000)
		   {
		   	d4=d4+1;
		   }
		   else
		   if (a>5000)
		   {
		   	d5=d5+1;
		   }	   	
  }
  cout<<endl;
  cout<<"menos de 1000 reciben (5 porciento) de bonificacion:"<<d1<<endl;
  cout<<endl;
  cout<<"entre 1000 y 2500 reciben (10 porciento) de bonificacion+botella de vino:"<<d2<<endl;
  cout<<endl;
  cout<<"entre 2501 y 3500 reciben (15 porciento) de bonificacion+un jamon:"<<d3<<endl;
  cout<<endl;
  cout<<"entre 3501 y 5000 eciben (20 porciento) bonificacion+canasta navidena:"<<d4<<endl;
  cout<<endl;
  cout<<"mas de 5000 reciben (25 porciento) de bonificacion+certificado de (500):"<<d5<<endl;
  cout<<endl;
}
