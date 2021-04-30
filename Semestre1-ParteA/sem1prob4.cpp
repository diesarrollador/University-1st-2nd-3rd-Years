#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float p1=0,p2=0,p3=0,precio=0;
	cout<<"ingrese tres valores";
	cin>>p1,p2,p3;
	precio=(p1+p2+p3)/3;
	cout<<"el precio medio es:"<<precio<<endl;
	system("pause");
	return 0;
}
