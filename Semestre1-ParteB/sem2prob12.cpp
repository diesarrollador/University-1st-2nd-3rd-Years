#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float pagar=0,art=0;
	cout<<"cuantos articulos compro"<<endl;
	cin>>art;
	if (art>=25)
	{pagar=art*15;
	cout<<"el precio a pagar es de:"<<pagar<<endl;
	}
	else
	if (art<25)
	{pagar=art*20;
	cout<<"el precio a pagar es de:"<<pagar<<endl;
	}
	system("pause");
	return 0;
}
