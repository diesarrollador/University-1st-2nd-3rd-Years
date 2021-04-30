#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int peso=0;
	cout<<"ingrese su peso en libras"<<endl;
	cin>>peso;
	if (peso<=100)
	{cout<<"bajo peso"<<endl;}
	else 
	if (peso<=175)
	{cout<<"peso adecuado"endl;}
	else
	if (peso>175)
	{cout<<"sobrepeso"endl;}
	system("pause");
	return 0;
}
