#include <iostream> //librerías
#include <stdlib.h>
using namespace std; // espacio trabajo

int voto( int e); //declaracion de la funcion para los menores de 18

int main (){ // inicio del programa
int person = 0; // definicion de la variable que almacena el numero de personas a evaluar

cout<<"introduzca la cantidad de personas a evaluar "; 
cin>>person; // solicitud de la cantidad de personas

cout<<"pueden votar: "<<voto(person)<<endl; // cantidad de menores de 18

system ("pause");  
return 0;
}

int voto(int e){ //funcion que determina la cantidad de personas menores de edad.
  int edad=0, m18=0;  //definicion de las variables a utilizar dentro del ciclo

   for (int x=0; x<e; x=x+1)
   { cout<<"la edad de la persona es "; 
     cin>>edad; 
    
     	 if (edad > 18)
	        {
			m18 = m18 + 1;
			}
   } 
return m18;
} 
