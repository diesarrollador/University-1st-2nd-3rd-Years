#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float inte=0,bas=0,agu=0,luz=0,sal=0,gas=0,tot=0;
	cout<<"ingrese su salario mensual"<<endl;
	cin>>sal;
	cout<<"ingrese cuanto paga de internet"<<endl;
	cin>>inte;
	cout<<"ingrese cuanto paga de basura"<<endl;
	cin>>bas;
	cout<<"ingrese cuanto paga de agua"<<endl;
	cin>>agu;
	cout<<"ingrese cuanto paga de luz"<<endl;
	cin>>luz;
	gas=inte+bas+agu+luz;
	tot=sal-gas;
	cout<<"los gastos del hogar es de:"<<gas<<endl;
	if (tot>400)
	{cout<<"Felicidades puede irse de paseo"<<endl;
	}
	else
	if (tot<=400)
	{cout<<"debe contener los gastos"<<endl;
	}
	system("pause");
	return 0;
}
	
