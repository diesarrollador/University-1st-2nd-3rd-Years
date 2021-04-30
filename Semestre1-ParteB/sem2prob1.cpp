#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int ed1=0;
	cout<<"ingrese su edad";
	cin>>ed1;
	if (ed1>=20&&ed1<=50)
	{cout<<"Es un adulto profecional";}
	else
	if (ed1>=15&&ed1<=20)
	{cout<<"Es un joven estudiante";}
	system("pause");
	return 0;
}
