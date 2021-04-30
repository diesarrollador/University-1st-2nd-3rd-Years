#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void promedio (int a, int b);   /*Declaracion de la funcion
void mayor (int a, int b);  /*Tipo de dato, nombre de la funci¢n y el tipo y nombre de los argumentos*/

int main()

   {
       int a, b;

       cout<<"Ingrese primer numero: ";
	   cin>>a;
       cout<<"Ingrese segundo numero: ";
       cin >>b;

       promedio (a,b);  /*Llamado de la funci¢n*/

       system("pause");
       return 0;   }

   void promedio (int a, int b) /*Definici¢n de la funci¢n*/
   {                     
      float prom;
	            
      prom=(a+b)/2;
      cout<<"El promedio es: "<<prom<<endl;
   }                    

   
