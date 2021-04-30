#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void descuento (float precio);   
int main()

   {
       float precio;
       int cuan;
        

       cout<<"ingrese precio:"<<endl;
       cin>>precio;
       
       descuento(precio); 
	    
       system("pause");
       return 0;   }

   void descuento (float precio) 
   {                     
      float desc,desc1;
	  if (precio<7)
	  {
	  	cout<<"no valido para descuento"<<endl;
	  	cout<<"Precio a pagar:"<<precio<<endl;
	  }
	  else
	  if (precio>=7)
	  {
	  	desc=precio*0.10;
	  	desc1=precio-desc;
	  	cout<<"precio a pagar:"<<desc1<<endl;
	  }
   }  
