#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
   int numero, n1, n2, n3, n4, n5, n6, n7;
   char r;
   do
   {
   	system("color 1b");
   cout<<"UNO hasta NOVENTA Y NUEVE MIL NOVECIENTOS NOVENTA Y NUEVE (Numeros): "; 
   cin>>numero;
   n1 = numero / 1000000;
   n2 = numero / 100000;
   n3 = numero / 10000;
   n4 = (numero / 1000) % 10;
   n5 = (numero / 100) % 10;
   n6 = (numero / 10) % 10;
   n7 = (numero % 10);
   
   cout<<"\n";
   if(numero > 99999)
   {
      cout<<"Ups... fuera del rango, intente de nuevo...";
   }
   
	  else{
	  //determinar la decena de mil
	   if(n3==2&&n4==0){
      	cout<<"VEITE MIL ";
	  }else if(n3==2&&n4==1){
	  	cout<<"VEINTIUN MIL ";
	  }else if(n3==2){
	  	cout<<"VEINTI";
	  }else if(n3==3&&n4==0){
	  	cout<<"TREINTA MIL ";
	  }else if(n3==3&&n4==1){
	  	cout<<"TREINTA Y UN ";
	  }else if(n3==3){
	  	cout<<"TREINTA Y ";
	  }else if(n3==4&&n4==0){
	  	cout<<"CUARENTA MIL ";
	  }else if(n3==4&&n4==1){
	  	cout<<"CUARENTA Y UN ";
	  }else if(n3==4){
	  	cout<<"CUARENTA Y ";
	  }else if(n3==5&&n4==0){
	  	cout<<"CINCUENTA MIL ";
	  }else if(n3==5&&n4==1){
	  	cout<<"CINCUENTA Y UN ";
	  }else if(n3==5){
	  	cout<<"CINCUENTA Y ";
	  }else if(n3==6&&n4==0){
	  	cout<<"SESENTA MIL ";
	  }else if(n3==6&&n4==1){
	  	cout<<"SESENTA Y UN ";
	  }else if(n3==6){
	  	cout<<"SESENTA Y ";
	  }else if(n3==7&&n4==0){
	  	cout<<"SETENTA MIL ";
	  }else if(n3==7&&n4==1){
	  	cout<<"SETENTA Y UN ";
	  }else if(n3==7){
	  	cout<<"SETENTA Y ";
	  }else if (n3==8&&n4==0){
	  	cout<<"OCHENTA MIL ";
	  }else if (n3==8&&n4==1){
	  	cout<<"OCHENTA Y UN ";
	  }else if(n3==8){
	  	cout<<"OCHENTA Y ";
	  }else if(n3==9&&n4==0){
	  	cout<<"NOVENTA MIL ";
	  }else if(n3==9&&n4==1){
	  	cout<<"NOVENTA Y UN ";
	  }else if(n3==9){
	  	cout<<"NOVENTA Y ";
	  }
	  if(n3==1&&n4==0){
         cout<<"DIEZ MIL ";
      }else if(n3==1&&n4==1){
      	cout<<"ONCE MIL ";
	  }else if(n3==1&&n4==2){
	  	cout<<"DOCE MIL ";
	  }else if(n3==1&&n4==3){
	  	cout<<"TRECE MIL ";
	  }else if(n3==1&&n4==4){
	  	cout<<"CATORCE MIL ";
	  }else if(n3==1&&n4==5){
	  	cout<<"QUINCE MIL ";
	  }else if(n3==1){
	  	cout<<"DIESI";
      }
      //determinar las unidades de mil
      if(n3==0&&n4 == 1){
         cout<<"MIL ";
      }else if(n4 == 2&&n3>1){
         cout<<"DOS MIL ";
      }else if(n4==2&&n3==0){
      	cout<<"DOS MIL ";
	  }else if(n4 == 3 &&n3>1){
         cout<<"TRES MIL ";
      }else if(n4==3&&n3==0){
      	cout<<"TRES MIL ";
	  }else if(n4 == 4 &&n3>1){
         cout<<"CUATRO MIL ";
      }else if(n4==4&&n3==0){
      	cout<<"CUATRO MIL ";
	  }else if(n4 == 5 &&n3>1){
         cout<<"CINCO MIL ";
      }else if(n4==5&&n3==0){
      	cout<<"CINCO MIL ";
	  }else if(n4 == 6){
        cout<<"SEIS MIL ";
      }else if(n4 == 7){
         cout<<"SIETE MIL ";
      }else if(n4 == 8){
         cout<<"OCHO MIL ";
      }else if(n4 == 9){
         cout<<"NUEVE MIL ";
      }
      //determinar los centenas
      if(n5 == 1 && n6 == 0 && n7 == 0){
         cout<<"CIEN";
      }else if(n5 == 1){
         cout<<"CIENTO ";
      }else if(n5 == 2){
         cout<<"DOSCIENTOS ";
      }else if(n5 == 3){
         cout<<"TRESCIENTOS ";
      }else if(n5 == 4){
         cout<<"CUATROCIENTOS ";
      }else if(n5 == 5){
         cout<<"QUINIENTOS ";
      }else if(n5 == 6){
         cout<<"SEISCIENTOS ";
      }else if(n5 == 7){
         cout<<"SETECIENTOS ";
      }else if(n5 == 8){
         cout<<"OCHOCIENTOS ";
      }else if(n5 == 9){
         cout<<"NOVECIENTOS ";
      }
      //determinar las decenas
      if(n6 == 1 && n7 == 0){
         cout<<"DIEZ";
      }else if(n6 == 1 && n7 == 1){
         cout<<"ONCE";
      }else if(n6 == 1 && n7 == 2){
         cout<<"DOCE";
      }else if(n6 == 1 && n7 == 3){
         cout<<"TRECE";
      }else if(n6 == 1 && n7 == 4){
         cout<<"CATORCE";
      }else if(n6 == 1 && n7 == 5){
         cout<<"QUINCE";
      }else if(n6 == 1){
         cout<<"DIECI";
      }
	  if(n6 == 2 && n7 == 0){
         cout<<"VEINTE";
      }else if(n6 == 2){
         cout<<"VEINTI";
      }else if(n6 == 3 && n7 == 0){
         cout<<"TREINTA";
      }else if(n6 == 3){
         cout<<"TREINTA Y ";
      }else if(n6 == 4 && n7 == 0){
         cout<<"CUARENTA";
      }else if(n6 == 4){
         cout<<"CUARENTA Y ";
      }else if(n6 == 5 && n7 == 0){
         cout<<"CINCUENTA";
      }else if(n6 == 5){
         cout<<"CINCUENTA Y ";
      }else if(n6 == 6 && n7 == 0){
         cout<<"SESENTA";
      }else if(n6 == 6){
         cout<<"SESENTA Y ";
      }else if(n6 == 7 && n7 == 0){
         cout<<"SETENTA";
      }else if(n6 == 7){
         cout<<"SETENTA Y ";
      }else if(n6 == 8 && n7 == 0){
         cout<<"OCHENTA";
      }else if(n6 == 8){
         cout<<"OCHENTA Y ";
      }else if(n6 == 9 && n7 == 0){
         cout<<"NOVENTA";
      }else if(n6 == 9){
         cout<<"NOVENTA Y ";
      }
      //determinar las unidades 
      if(n7 == 1 && n6 > 1){
         cout<<"UNO";
      }else if(n7 == 1 && n6 == 0){
         cout<<"UNO"; 
      }else if(n7 == 2 && n6 > 1){
         cout<<"DOS";
      }else if(n7 == 2 && n6 == 0){
         cout<<"DOS";
      }else if(n7 == 3 && n6 > 1){
         cout<<"TRES";
      }else if(n7 == 3 && n6 == 0){
         cout<<"TRES"; 
      }else if(n7 == 4 && n6 > 1){
         cout<<"CUATRO";
      }else if(n7 == 4 && n6 == 0){
         cout<<"CUATRO"; 
      }else if(n7 == 5 && n6 > 1){
         cout<<"CINCO";
      }else if(n7 == 5 && n6 == 0){
         cout<<"CINCO";
      }else if(n7 == 6){
         cout<<"SEIS";
      }else if(n7 == 7){
         cout<<"SIETE";
      }else if(n7 == 8){
         cout<<"OCHO";
      }else if(n7 == 9){
         cout<<"NUEVE";
      }
   }
   do
   {
   	cout<<"\n";
   	cout<<"continuar (s/n): ";
   	cin>>r;
   	cout<<"\n";
   }while(r!='s'&&r!='S'&&r!='n'&&r!='N');
}while(r=='s','S'&&r!='n'&&r!='N');
}

