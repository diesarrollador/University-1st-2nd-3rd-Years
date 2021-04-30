#include<iostream>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
int main()
{
	int n1,n2,n3,n4,n5,n6,n7,numero;
	char r;
	do 
	{
		system("color 1b");
		cout<<"Digite un numero de Cero a Un Millon (numero): ";
		cin>>numero;
		n1 = numero / 1000000;
		n2 = (numero / 100000) % 10;
		n3 = (numero / 10000) % 10;
		n4 = (numero / 1000) % 10;
		n5 = (numero / 100) % 10;
		n6 = (numero / 10) % 10;
		n7 = (numero % 10);
		cout<<"\n";
		if(numero>1000000)
		{
			cout<<"Ups... Valor fuera del rango, intente de nuevo";
		}
		//////// Establecer la UNIDAD DE MILLON
		else
		if(n1==1)
		{
			cout<<"Un Millon ";
		}
		//////// Establecer la CENTENA DE MIL
		if(n2>0)
		{
			if(n2==1&&n3==0)
			{
				cout<<"Cien Mil ";
			}
			else if(n2==1&&n3>0)
			{
				cout<<"Cien ";
			}
			else if(n2==2&&n3==0)
			{
				cout<<"Docientos Mil ";
			}
			else if(n2==2&&n3>0)
			{
				cout<<"Docientos ";
			}
			else if(n2==3&&n3==0)
			{
				cout<<"Trecientos Mil ";
			}
			else if(n2==3&&n3>0)
			{
				cout<<"Trecientos ";
			}
			else if(n2==4&&n3==0)
			{
				cout<<"Cuatrocientos Mil ";
			}
			else if(n2==4&&n3>0)
			{
				cout<<"Cuatrocientos ";
			}
			else if(n2==5&&n3==0)
			{
				cout<<"Quinientos Mil ";
			}
			else if(n2==5&&n3>0)
			{
				cout<<"Quinientos ";
			}
			else if(n2==6&&n3==0)
			{
				cout<<"Seiscientos Mil ";
			}
			else if(n2==6&&n3>0)
			{
				cout<<"Seiscientos ";
			}
			else if(n2==7&&n3==0)
			{
				cout<<"Setecientos Mil ";
			}
			else if(n2==7&&n3>0)
			{
				cout<<"Setecientos ";
			}
			else if(n2==8&&n3==0)
			{
				cout<<"Ochocientos Mil ";
			}
			else if(n2==8&&n3>0)
			{
				cout<<"Ochocientos ";
			}
			else if(n2==9&&n3==0)
			{
				cout<<"Novecientos Mil ";
			}
			else if(n2==9&&n3>0)
			{
				cout<<"Novecientos ";
			}
		}
		///////// Establecer la DECENA DE MIL
		if(n3>0)
		{
			if(n3==1&&n4==0)
			{
				cout<<"Diez Mil ";
			}
			else if(n3==1&&n4==1)
			{
				cout<<"Once Mil ";
			}
			else if (n3==1&&n4==2)
			{
				cout<<"Doce Mil ";
			}
			else if(n3==1&&n4==3)
			{
				cout<<"Trece Mil ";
			}
			else if(n3==1&&n4==4)
			{
				cout<<"Catorce Mil ";
			}
			else if(n3==1&&n4==5)
			{
				cout<<"Quince Mil ";
			}
			else if(n3==1)
			{
				cout<<"Dieci";
			}
			else if(n3==2&&n4==0)
			{
				cout<<"Veinte Mil ";
			}
			else if(n3==2&&n4==1)
			{
				cout<<"Veintiun Mil ";
			}
			else if(n3==2)
			{
				cout<<"Veinti";
			}
			else if(n3==3&&n4==0)
			{
				cout<<"Treinta Mil ";
			}
			else if(n3==3&&n4==1)
			{
				cout<<"Treinta y Un Mil ";
			}
			else if(n3==3&&n4>1)
			{
				cout<<"Treinta y ";
			}
			else if(n3==4&&n4==0)
			{
				cout<<"Cuarenta Mil ";
			}
			else if(n3==4&&n4==1)
			{
				cout<<"Cuarenta y Un Mil ";
			}
			else if(n3==4&&n4>1)
			{
				cout<<"Cuarenta y ";
			}
			else if(n3==5&&n4==0)
			{
				cout<<"Cincuenta Mil ";
			}
			else if(n3==5&&n4==1)
			{
				cout<<"Cincuenta y Un Mil ";
			}
			else if(n3==5&&n4>1)
			{
				cout<<"Cincuenta y ";
			}
			else if(n3==6&&n4==0)
			{
				cout<<"Sesenta Mil ";
			}
			else if(n3==6&&n4==1)
			{
				cout<<"Sesenta y Un Mil ";
			}
			else if(n3==6&&n4>1)
			{
				cout<<"Sesenta y ";
			}
			else if(n3==7&&n4==0)
			{
				cout<<"Setenta Mil ";
			}
			else if(n3==7&&n4==1)
			{
				cout<<"Setenta y Un Mil ";
			}
			else if(n3==7&&n4>1)
			{
				cout<<"Setenta y ";
			}
			else if(n3==8&&n4==0)
			{
				cout<<"Ochenta Mil ";
			}
			else if(n3==8&&n4==1)
			{
				cout<<"Ochenta y Un Mil ";
			}
			else if(n3==8&&n4>1)
			{
				cout<<"Ochenta y ";
			}
			else if(n3==9&&n4==0)
			{
				cout<<"Noventa Mil ";
			}
			else if(n3==9&&n4==1)
			{
				cout<<"Noventa y Un Mil ";
			}
			else if(n3==9&&n4>1)
			{
				cout<<"Noventa y ";
			}
		///////////// Establecer la UNIDAD DE MIL
		}
		if(n4>0)
		{
			if(n3==0&&n4==1)
			{
				cout<<"Mil ";
			}
			else if(n3==0&&n4==2)
			{
				cout<<"Dos Mil ";
			}
			else if(n4==2&&n3>1)
			{
				cout<<"dos Mil ";
			}
			else if(n3==0&&n4==3)
			{
				cout<<"Tres Mil ";
			}
			else if(n4==3&&n3>1)
			{
				cout<<"tres Mil ";
			}
			else if(n3==0&&n4==4)
			{
				cout<<"Cuatro Mil ";
			}
			else if(n4==4&&n3>1)
			{
				cout<<"cuatro Mil ";
			}
			else if(n3==0&&n4==5)
			{
				cout<<"Cinco Mil ";
			}
			else if(n4==5&&n3>1)
		    {
				cout<<"cinco Mil ";
			}
			else if(n4==6)
			{
				cout<<"seis Mil ";
			}
			else if(n4==7)
			{
				cout<<"siete Mil ";
			}
			else if(n4==8)
			{
				cout<<"ocho Mil ";
			}
			else if(n4==9)
			{
				cout<<"nueve Mil ";
			}
		}
		///////////// Establecer la CENTENA
		if(n5>0)
		{
			if(n5==1&&n6==0)
			{
				cout<<"Cien ";
			}
			else if(n5==1&&n6>0)
			{
				cout<<"Ciento ";
			}
			else if(n5==2)
			{
				cout<<"Doscientos ";
			}
			else if(n5==3)
			{
				cout<<"Trescientos ";
			}
			else if(n5==4)
			{
				cout<<"Cuatrocientos ";
			}
			else if(n5==5)
			{
				cout<<"Quinientos ";
			}
			else if(n5==6)
			{
				cout<<"Seiscientos ";
			}
			else if(n5==7)
			{
				cout<<"Setecientos ";
			}
			else if(n5==8)
			{
				cout<<"Ochocientos ";
			}
			else if(n5==9)
			{
				cout<<"Novecientos ";
			}
		}
		////////// Establecer la DECENA
		if(n6>0)
		{
			if(n6==1&n7==0)
			{
				cout<<"Diez";
			}
			else
			if(n6==1&&n7==1)
			{
				cout<<"Once";
			}
			else if(n6==1&&n7==2)
			{
				cout<<"Doce";
			}
			else if(n6==1&&n7==3)
			{
				cout<<"Trece";
			}
			else if(n6==1&&n7==4)
			{
				cout<<"Catorce";
			}
			else if(n6==1&&n7==5)
			{
				cout<<"Quince";
			}
			else if(n6==1)
			{
				cout<<"Dieci";
			}
			else if(n6==2&&n7==0)
			{
				cout<<"Veinte";
			}
			else if(n6==2)
			{
				cout<<"Veinti";
			}
			else if(n6==3&&n7==0)
			{
				cout<<"Treinta";
			}
			else if(n6==3)
			{
				cout<<"Treinta y ";
			}
			else if(n6==4&&n7==0)
			{
				cout<<"Cuarenta";
			}
			else if(n6==4)
			{
				cout<<"Cuarenta y ";
			}
			else if(n6==5&&n7==0)
			{
				cout<<"Cincuenta";
			}
			else if(n6==5)
			{
				cout<<"Cincuenta y ";
			}
			else if(n6==6&&n7==0)
			{
				cout<<"Sesenta";
			}
			else if(n6==6)
			{
				cout<<"Sesenta y ";
			}
			else if(n6==7&&n7==0)
			{
				cout<<"Setenta";
			}
			else if(n6==7)
			{
				cout<<"Setenta y ";
			}
			else if(n6==8&&n7==0)
			{
				cout<<"Ochenta";
			}
			else if(n6==8)
			{
				cout<<"Ochenta y ";
			}
			else if(n6==9&&n7==0)
			{
				cout<<"Noventa";
			}
			else if(n6==9)
			{
				cout<<"Noventa y ";
			}
		}
		///////////////// Establecer la UNIDAD
		if(n7>0)
		{
			if(n7==1&&n6>1)
			{
				cout<<"uno";
			}
			else if(n7==1&&n6==0)
			{
				cout<<"Uno";
			}
			else if(n7==2&&n6>1)
			{
				cout<<"dos";
			}
			else if(n7==2&&n6==0)
			{
				cout<<"Dos";
			}
			else if(n7==3&&n6>1)
			{
				cout<<"tres";
			}
			else if(n7==3&&n6==0)
			{
				cout<<"Tres";
			}
			else if(n7==4&&n6>1)
			{
				cout<<"cuatro";
			}
			else if(n7==4&&n6==0)
			{
				cout<<"Cuatro";
			}
			else if(n7==5&&n6>1)
			{
				cout<<"cinco";
			}
			else if(n7==5&&n6==0)
			{
				cout<<"Cinco";
			}
			else if(n7==6)
			{
				cout<<"seis";
			}
			else if(n7==7)
			{
				cout<<"siete";
			}
			else if(n7==8)
			{
				cout<<"ocho";
			}
			else if(n7==9)
			{
				cout<<"nueve";
			}
		}
		else if(n1==0&&n2==0&&n3==0&&n4==0&&n5==0&&n6==0&&n7==0)
		{
			cout<<"Cero";
		}
		do
		{
			cout<<"\n";
			cout<<"Continuar...? (s/n): ";
			cin>>r;
			cout<<"\n";
		}while(r!='s'&&r!='S'&&r!='n'&&r!='N');
	}while(r=='s','S'&&r!='n'&&r!='N');
}
