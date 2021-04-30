#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float c1=0, c5=0, c10=0, c25=0, c50=0, m=0.0;
	cout<<"cuantas monedas de un centavo tiene";
	cin>>c1;
	cout<<"cuantas monedas de cinco centavo tiene";
	cin>>c5;
	cout<<"cuantas monedas de diez centavos tiene";
	cin>>c10;
	cout<<"cuantas monedas de veinticinco centavos tiene";
	cin>>c25;
	cout<<"cuantas monedas de cincuenta centavos tiene";
	cin>>c50;
	m=(c1*0.01)+(c5*0.05)+(c10*0.10)+(c25*0.25)+(c50*0.50);
	cout<<"el total es:"<<m<<endl;
	system("pause");
	return 0;
}
