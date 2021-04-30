#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void futbol (int e);   
int main()
   {
       int e;
    	cout<<"A cuantas personas desea encuestar: "<<endl;
	   	cin>>e;
	   	
       futbol(e);  
       
       system("pause");
       return 0;   
	}
       
void futbol(int e){  
   int a=0,b=0,c=0,op=0;
	   for(int i=0; i<e; i++){
	   cout<<"Elige tu equipo de preferencia:"<<endl;
       cout<<"(1) San Francisco F.C"<<endl;
       cout<<"(2) Arabe Unido F.C"<<endl;
       cout<<"(3) Tauro F.C"<<endl;
       cin>>op;

     switch (op){
      
      case 1:
      		a=a+1;break;
      case 2: 
      		b=b+1;break;
      case 3: 
      		c=c+1;break;
}
  }
  cout<<"La cantidad de fanaticos del San Francisco F.C son: "<<a<<endl;
  cout<<"La cantidad de fanaticos del Arabe Unido F.C son: "<<b<<endl;
	cout<<"La cantidad de fanaticos del Tauro F.C son: "<<c<<endl;
}
  
