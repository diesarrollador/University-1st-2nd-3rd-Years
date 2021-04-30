#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int num1=0,num2=0,num3=0,suma=0,resta=0,mult=0;
	cout<<"Los tres valores son:";
	cin>> num1,num2,num3;
	suma=num1+num2+num3;
    resta=num1-num2-num3;
	mult=num1*num2*num3;
	cout<<"el resultado de la suma es: "<<suma<<endl;
	cout<<"el resultado de la resta es: "<<resta<<endl;
	cout<<"el resultado de la multiplicacion es: "<<mult<<endl;
	system ("pause");
	return 0;
}
