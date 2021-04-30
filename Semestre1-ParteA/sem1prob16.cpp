#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int u=0,c=0,d=0,v=0,q=0;
	cout<<"cuantos billetes de uno tiene";
	cin>>u;
	cout<<"cuantos billetes de cinco tiene";
	cin>>c;
	cout<<"cuanto billetes de diez tiene";
	cin>>d;
	cout<<"cuantos billetes de veinte tiene";
	cin>>v;
	q=(u*1)+(c*5)+(d*10)+(v*20);
	cout<<"El total es:"<<q<<endl;
	system("pause");
	return 0;
}
