#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float uno=0,dos=0,tres=0,prom=0;
	cout<<"ingrese la primera calificacion"<<endl;
	cin>>uno;
	cout<<"ingrese la segunda calificacion"<<endl;
	cin>>dos;
	cout<<"ingrese la tercera calificacion"<<endl;
	cin>>tres;
	prom=(uno+dos+tres)/3;
	if (prom>=71)
	{cout<<"Estudiante aprobado con:"<<prom<<endl;
	}
	else
	if (prom<71)
	{cout<<"estudiante reprobado con:"<<prom<<endl;
	}
	system("pause");
	return 0;
}
