#include<iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main(){
 cout<<"Suma de flores vendidas por trimestre: "<<endl;
 cout<<"***************************************"<<endl;
 int mat1[3][3], mat2[3][3], mat3[3][3];
 
 //primera floristeria
 cout<<"Llenando la primera floristeria"<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<"Ingrese la cantidad de flores de la fila " << i+1
   <<" columna " << j+1 << ": ";
   cin>>mat1[i][j];
  }
 }
 cout<<"\n";
 cout<<"*****************"<<endl;
 //segunda floristeria
 cout<<"Llenando la segunda floristeria"<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<"Ingrese la cantidad de flores de la fila " << i+1
   <<" columna " << j+1 << ": ";
   cin>>mat2[i][j];
  }
 }
 cout<<"\n";
 cout<<"******************"<<endl;
 //tercera floristeria
 cout<<"Llenando la tercera floristeria"<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<"Ingrese la cantidad de flores de la fila " << i+1
   <<" columna " << j+1 << ": ";
   cin>>mat3[i][j];
  }
 }
 //Mostrando matriz 0 (Floristeria 1)
 cout<<"Cantidad de flores en la primera floristeria: "<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<mat1[i][j]<<" ";
   
  }
  cout<<endl;
  
 }
 cout<<"\n";
 //Mostrando matriz 1 (Floristeria 2)
 cout<<"Cantidad de flores en la segunda floristeria: "<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<mat2[i][j]<<" ";
   
  }
  cout<<endl;
  
 }
 //Mostrando matriz 2 (Floristeria 3)
  cout<<"Cantidad de flores en la tercera floristeria: "<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<mat3[i][j]<<" ";
   
  }
  cout<<endl;
  
 }
 cout<<"\n";
 //Suma de las tres matrices y mostrando
 cout<<"Total de flores vendidas por trimestre:"<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<mat1[i][j]+mat2[i][j]+mat3[i][j]<<" ";
   
  }
  cout<<endl;
  
 }
 return 0; 
}
