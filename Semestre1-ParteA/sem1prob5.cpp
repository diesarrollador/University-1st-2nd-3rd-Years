#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
	float a1=0.0,a2=0.0,a3=0.0,a4=0.0,a5=0.0,sum=0.0,mult=0.0,rest=0.0,mult2=0.0;
	cout<<"ingrese cinco precios";
	cin >>a1,a2,a3,a4,a5;
	sum=(a1+a2+a3+a4+a5);
	mult=sum*0.25;
	rest=sum-mult;
	mult2=rest*1.07;
	cout<<"el precio a pagar es:"<<mult2<<endl;
	system("pause");
	return 0;
}
