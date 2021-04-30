#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void suma (int a, int b);   /*Declaracion de la funcion*/
void mayor (int a, int b);  /*Tipo de dato, nombre de la funci¢n y el tipo y nombre de los argumentos*/

int main()

   {
       int a, b;

       cout<<"Ingrese el valor de a: ";
	   cin>>a;
       cout<<"Ingrese el valor de b: ";
       cin >>b;

       suma(a,b);  /*Llamado de la funci¢n*/
       mayor(a,b); /*Unicamente el nombre de la funci¢n y de los par metros*/

       system("pause");
       return 0;   }

   void suma(int a, int b) /*Definici¢n de la funci¢n*/
   {                     
      int sum;            /*Declaraci¢n de las variables locales*/
      sum=a+b;
      cout<<"El valor de la suma es: "<<sum<<endl;
   }                     /*Fin de la funci¢n suma*/

   void mayor(int a, int b)
   {
      if(a==b)
      cout<<"Son iguales"<<endl;
      else
      {
             if(a>b)
               cout<<"El valor de a es mayor que el de b"<<endl;
             else
               cout<<"El valor de b es mayor que el de a"<<endl;
      }
   }
