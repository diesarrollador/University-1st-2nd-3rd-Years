#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define F 6
#define C 4

void leer(float sucursales[F][C]);
void imprimeencabezado();
void imprime(float sucursales[F][C]);
void suma(float sucursales[F][C]);
void promedio(float sucursales[F][C]);
void sumames(float sucursales[F][C]);
void comision(float sucursales[F][C]);
void promes(float sucursales[F][C]);
void gotoxy(short x, short y);

int main ()
{
float matriz[F][C];

leer (matriz);
system("cls");
imprimeencabezado();
imprime(matriz);
suma(matriz);
promedio(matriz);
comision(matriz);
sumames(matriz);
promes(matriz);

system("pause");
}

//funcion de codigo para llenar las seis sucursales con cuatro datos c/u
void leer(float sucursales[F][C])
{ int f,c;
for (f=0;f<=3;f++)
{ printf("llene la informacion de la sucursal %d: \n",f+1);
for (c=0;c<=3;c++)
{
	 printf("introduzca la utilidad del mes(%d):",c+1);
	 scanf("%f",&sucursales[f][c]);
}
}
}
//Funcion para mostrar el encabezado en el ejecutable
void imprimeencabezado(){
	gotoxy(35, 2); printf("CORPORACION MANUFACTURERA S.A.");
	gotoxy(29, 3); printf("CONTROL DE PRODUCCION PRIMER CUATRIMESTRE");
	gotoxy(40, 4); printf("PRIMER CUATRIMESTRE");
	gotoxy(1, 6); printf("SUCURSAL    ENERO      FEBRERO       MARZO        ABRIL  TOTAL_UTIL  PROM_UTIL  COMISION");
	  
	gotoxy(1, 7); printf("sucursal 1");
	gotoxy(1, 8); printf("sucursal 2");
	gotoxy(1, 9); printf("sucursal 3");
	gotoxy(1, 10); printf("sucursal 4");
	gotoxy(1, 11); printf("sucursal 5");
	gotoxy(1, 12); printf("sucursal 6"); 
	gotoxy(1, 14); printf("TOT./MES   TOT.FIN   TOT.PROM  TOT.COMISION ");
	gotoxy(1, 15); printf("PROM./MES");
}
//
void imprime (float sucursales[F][C])
{ int f,c;
for(f=0;f<=3;f++)
{
	for(c=0;c<=3;c++)
	{gotoxy((c+1)*15,7+f);
	printf("%.2f",sucursales[f][c]);
	}
}
}
//Funcion para sumar todas las utilidades de los meses 
void suma(float sucursales[F][C])
{
	int f,c;
	float totalutilidad=0.0;
	for (f=0;f<=3;f++)
	{float suma=0;
	for(c=0;c<=3;c++)
	{suma=suma+sucursales[f][c];
	}
	gotoxy(754 ,7+f);printf("%.2f",suma);
	totalutilidad=totalutilidad+suma;
	}
	gotoxy(75, 15);printf("%.2f",totalutilidad);
}
//funcion que calcula el promedio de cada mes
void promedio(float sucursales[F][C])
{
	int f,c;
	float suma, prom, totalpromedio=0.0;
	for(f=0;f<=3;f++)
	{
		suma=0;
		for(c=0;c<=3;c++)
		{suma=suma+sucursales[f][c];
		}
		prom=suma/4.0;
		gotoxy(90, 7+f);printf("%.2f",prom);
		totalpromedio=totalpromedio+prom;
	}
	gotoxy(90, 15);printf("%.2f",totalpromedio);
	
}
//funcion que agrega la comision a la suma de cada mes
void comision(float sucursales[F][C])
{
	int f,c;
	float suma, comision, totalcomision=0.0;
	for(f=0;f<=3;f++)
	{
		suma=0;
		for(c=0;c<=3;c++)
		{suma=suma+sucursales[f][c];
		}
		
		if(suma<=10000){comision=suma*0.0;}
		else if(suma<=20000){comision=suma*0.02;}
		else if(suma<=30000){comision=suma*0.03;}
		else if(suma<=40000){comision=suma*0.04;}
		else if(suma>40000){comision=suma*0.05;}
		
		gotoxy(105, 7+f);printf("%.2f",comision);
		totalcomision=totalcomision+comision;
		}
		gotoxy(105, 15);printf("%.21",totalcomision);
	}
	//
	void sumames(float sucursales[F][C])
{
	int f,c;
	for(c=0;c<=3;c++)
	{float suma=0;
	for(f=0;f<=3;f++)
	{suma=suma+sucursales[f][c];
	}
	gotoxy((c+1)*15,14);printf("%.2f",suma);
}
}
//funcion para calcular el promedio a la suma
void promes(float sucursales[F][C])
{
	int f,c;
	float suma,prom;
	for(c=0;c<=3;c++)
{
suma=0;
for(f=0;f<=3;f++)
{suma=suma+sucursales[f][c];
}
prom=suma/6.0;
gotoxy((c+1)*15,15);printf("%.2f",prom);
}
printf("\n");
}
//codigo para poder usar la funcion gotoxy
void gotoxy (short x, short y){
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}



