#include<iostream>
#include<conio.h>
using namespace std;
int main(int argc,char *argv[])
{
	int m[5][5], cont=0;
	
	//2 ciclos FOR para rellenar la matriz de 3 filas y dos columnas
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			cout<<endl;
			system("cls");
			cout<<"Ingrese el numero de la fila "<<i+1<<", columna "<<j+1<<": ";
			cin>> m[i][j];
			
			// Se van a sumar los numeros que sus indices sean iguales
			if (i == j){
			cont = cont + m[i][j];
			}
		}
	}
	

	//Titulo
	system("cls");	
	cout<<"\t MATRIZ";
	cout<<"\n";
	
	//2 ciclos FOR para mostrar la matriz
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<< "\t"<< "|"<< m[i][j] <<"|";
		}
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"EL resultado de la suma de la diagonal es: "<<cont<<endl;
return 0;
}

