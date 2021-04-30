#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
	int num;
	
	cout<<"ingrese un numero"<<endl;
	cin>>num;
	
	if(num>0)
	{
		cout<<"Es un numero positivo"<<endl;
	}
	else
	if(num<0)
	{
		cout<<"Es un numero negativo"<<endl;
	}
	else
	{
		cout<<"Es un numero neutro"<<endl;
	}
	system("pause");
	return 0;
}
