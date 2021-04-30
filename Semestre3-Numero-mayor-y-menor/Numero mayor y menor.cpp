#include<iostream>
using namespace std;
int main(){
	int mayor, menor, can, num;
	
	cout<<"ingrese la cantidad: ";
	cin>>can;
	for (int i=1; i<=can; i++){
		cout<<"ingrese numero: ";
		cin>>num;
		
		if(i == 1){
			mayor = menor = num;
		}
		if (num > mayor){
			mayor = num;
		}
		if (num < menor){
			menor = num;
		}
	}
	cout<<"mayor: "<<mayor<<"\n";
	cout<<"menor: "<<menor<<"\n";
return 0;	
}
