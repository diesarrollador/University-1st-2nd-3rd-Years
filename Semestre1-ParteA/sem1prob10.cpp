#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
	float a=0.0,o=0.0,h=0.0;
	cout<<"ingrese el lado adyacente del tri�ngulo";
	cin>>a;
	cout<<"ingrese el lado opuesto del tri�ngulo";
	cin>>o;
	h=(a*a+o*o);
	cout<<"la hipotenusa del triangulo es:"<<h<<endl;
	system("pause");
	return 0;
}
