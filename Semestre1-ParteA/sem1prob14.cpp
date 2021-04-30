#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int v=0,d=0,t=0;
	float p=0,p2=0;
	cout<<"Ingrese la cantidad varones";
	cin>>v;
	cout<<"ingrese la cantidad de damas";
	cin>>d;
	t=v+d;
	p=(v*100)/t;
	p2=(d*100)/t;
	cout<<"El porcentaje de varones es:"<<p<<"%"<<endl;
	cout<<"el porcentaje de damas es:"<<p2<<"%"<<endl;
	system("pause");
	return 0;
}
