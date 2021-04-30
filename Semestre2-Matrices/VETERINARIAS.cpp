#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float matriz[3][3][3];
	float matrizsuma[3][3];
	int m,fila,columna;
	//ingresar datos
	for(m=0;m<3;m++)
	{
		for(fila=0;fila<3;fila++)
		{
			for(columna=0;columna<3;columna++)
			{
				cout<<"Veterinaria " << m+1
				    <<", insertar total de animales atendidos fila " << fila+1 <<" columna " << columna+1<<":";
					cin>>matriz[m][fila][columna];
			}
		}
	}
	//suma de las tres matrices
		for(fila=0; fila<3; fila++)
	{
		for(columna=0; colunma<3; columna++)
		{
			matrizsuma[fila][columna]=matriz[0][fila][columna] + matriz[1][fila][columna] + matriz[2][fila][columna];
		}
	}
	//mostrar veterinaria 1
	cout<<"Veterinaria 1"<<endl;
	for(m=0;m<1;m++)
	{
		for(fila=0;fila<3;fila++)
		{
			for(columna=0;columna<3;columna++)
			cout<<matriz[0][fila][columna]<<"";
			cout<<endl;
		}
	}
	//mostrar veterinaria 2
	cout<<"veterinaria 2"<<endl;
	for(m=0;m<1;m++)
    {
      for (fila=0; fila<3; fila++)
    {
        for (columna=0; columna<3; columna++)
        cout<<matriz[1][fila][columna]<<"";
        cout << endl;
    }
}
    //mostrar veterinaria 3
    cout<<"Veterinaria 3"<<endl;
    for(m=0;m<1;m++)
    {
      for (fila=0; fila<3; fila++)
    {
        for (columna=0; columna<3; columna++)
        cout<<matriz[2][fila][columna]<<"";
        cout << endl;
    }
	}
	//mostrar la matriz suma
	cout<<"total de mascotas atendidas por trimestre:"<<endl;
	for(fila=0;fila<3;fila++)
	{
		for(columna=0;columna<3;columna++)
		{
			cout<<matrizsuma[fila][columna]<<"";
			cout<<endl;
		}
	}
	return 0;
}


