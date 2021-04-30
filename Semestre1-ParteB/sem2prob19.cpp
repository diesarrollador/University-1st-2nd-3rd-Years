#include <iostream> 
#include<stdlib.h>
#include<locale.h>
using namespace std; 
int main (){ 
setlocale(LC_ALL,"spanish");
 float sal=0, aum=0;
 int con;
cout<<"indique su tipo de contrato"<<endl;
cout<<"1) De 0 a $9 000"<<endl;
cout<<"2) De $9 000 a $15 000"<<endl;
cout<<"3) $15 000 a $20 000"<<endl;
cout<<"4) Mas de $20 000"<<endl;
cin>>con;
cout<<"Ingrese su salario actual"<<endl;
cin>>sal;
 switch (con){
  case 1:
  aum = sal + (sal * 0.2);
  cout<<"Su nuevo salario sera: "<<aum<<endl;break;
  case 2: 
  aum = sal + (sal * 0.1);
  cout<<"Su nuevo salario sera: "<<aum<<endl;break;
  case 3: 
  aum= sal + (sal * 0.05);
  cout<<"Su nuevo salario sera: "<<aum<<endl;break;
  case 4: 
  aum = sal + (sal * 0.03);
  cout<<"Su nuevo salario sera: "<<aum<<endl;break;
  default:cout<<"Opcion no valida";
 }
system("pause");
return 0;
}
