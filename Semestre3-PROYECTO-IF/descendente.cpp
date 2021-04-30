#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
	int uno,dos,tres;
	cout<<"ingrese un numero"<<endl;
	cin>>uno;
	cout<<"ingrese un numero"<<endl;
	cin>>dos;
	cout<<"ingrese un numero"<<endl;
	cin>>tres;
	
	if(uno>dos)
	{
		if(dos>tres)
		{
			cout<<"orden:"<<uno<<endl;
			cout<<"orden:"<<dos<<endl;
			cout<<"orden:"<<tres<<endl;
		}
		else
		if(uno>tres)
		{
			cout<<"orden:"<<uno<<endl;
			cout<<"orden:"<<tres<<endl;
			cout<<"orden:"<<dos<<endl;
		}
		else
		{
		    cout<<"orden:"<<tres<<endl;
			cout<<"orden:"<<uno<<endl;
			cout<<"orden:"<<dos<<endl;	
		}
    }
    
	else
	if(uno>tres)
	{
		cout<<"orden:"<<dos<<endl;
		cout<<"orden:"<<uno<<endl;
		cout<<"orden:"<<tres<<endl;
	}
	else
	if(dos>tres)
	{
		cout<<"orden:"<<dos<<endl;
		cout<<"orden:"<<tres<<endl;
        cout<<"orden:"<<uno<<endl;
	}
	else
	{
		cout<<"orden:"<<tres<<endl;
		cout<<"orden:"<<dos<<endl;
		cout<<"orden:"<<uno<<endl;
	}
   
	
system("pause");
return 0;
}	
