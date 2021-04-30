#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void impuesto (int op);   
int main()

   {
       int op;

       cout<<"elija una opcion"<<endl;
       cout<<"(1) 2.99"<<endl;
       cout<<"(2) 3.99"<<endl;
       cout<<"(3) 4.99"<<endl;
       cin>>op;
       
       impuesto(op); 
	    
       system("pause");
       return 0;   }

   void impuesto(int op) 
   {                     
      float imp;
	  switch (op)
	  {
      case 1: imp=2.99*1.07;
      cout<<"El precio a pagar es:"<<imp<<endl;break;
      case 2: imp=3.99*1.07;
      cout<<"El precio a pagar es:"<<imp<<endl;break;
      case 3: imp=4.99*1.07;
      cout<<"El precio a pagar es:"<<imp<<endl;break;
	  }
   }    

