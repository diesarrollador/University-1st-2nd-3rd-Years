#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float p=0,a=0,b=0,c=0;
	cout<<"ingrese el lado opuesto del triangulo";
	cin>>a;
	cout<<"ingrese le lado adyacente del triangulo";
	cin>>b;
	cout<<"ingrese la hipotenusa del triangulo";
	cin>>c;
	p=(a+b+c);
	cout<<"el perimetro del triangulo es:"<<p<<endl;
	system("pause");
	return 0;
}
