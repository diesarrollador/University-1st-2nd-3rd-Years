#include<stdlib.h>
#include<iostream>

using namespace std;

void area (int a,int  b);
 int main (){
 	int a,b;
 	cout<<"ingrese la base del triangulo"<<endl;
 	cin>>a;
 	cout<<"ingrese la altura del triangulo"<<endl;
 	cin>>b;
 	
 	area (a,b);
 	system ("pause"); 
	return 0;
 	 }
 	 
void area (int a,int  b)
{

int area=0,perimetro=0;

area=(a+b)/2;
perimetro=a+a+a;
 
cout<<"El area del triangulo es:"<<area<<endl;
cout<<"El perimetro del triangulo es:"<<perimetro<<endl;
 }

