#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int d=0;
	float m=0,g=0;
	cout<<"Cuantas horas trabajo?";
	cin>>d;
	cout<<"Valor monetario por hora";
	cin>>m;
	g=d*m;
	cout<<"Su pago total es:"<<g<<endl;
	system("pause");
	return 0;
}
