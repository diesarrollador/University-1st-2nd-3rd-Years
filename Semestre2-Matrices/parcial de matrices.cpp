#include<iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main(){
 cout<<"Suma de mascotas atendidas por trimestre: "<<endl;
 cout<<"***************************************"<<endl;
 int mat1[3][3], mat2[3][3], mat3[3][3];
 
 //primera veterinaria
 cout<<"Llenando la primera veterinaria"<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<"Ingrese la cantidad de mascotas de la fila " << i+1
   <<" columna " << j+1 << ": ";
   cin>>mat1[i][j];
  }
 }
 cout<<"\n";
 cout<<"*****************"<<endl;
 //segunda veterinaria
 cout<<"Llenando la segunda veterinaria"<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<"Ingrese la cantidad de mascotas de la fila " << i+1
   <<" columna " << j+1 << ": ";
   cin>>mat2[i][j];
  }
 }
 cout<<"\n";
 cout<<"******************"<<endl;
 //tercera veterinaria
 cout<<"Llenando la tercera veterinaria"<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<"Ingrese la cantidad de mascotas de la fila " << i+1
   <<" columna " << j+1 << ": ";
   cin>>mat3[i][j];
  }
 }
 cout<<"Cantidad de mascotas en la primera veterinaria: "<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<mat1[i][j]<<" ";
   
  }
  cout<<endl;
  
 }
 cout<<"\n";
 cout<<"Cantidad de mascotas en la segunda veterinaria: "<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<mat2[i][j]<<" ";
   
  }
  cout<<endl;
  
 }
  cout<<"Cantidad de mascotas en la tercera veterinaria: "<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<mat3[i][j]<<" ";
   
  }
  cout<<endl;
  
 }
 cout<<"\n";
 cout<<"Total de mascotas atendidas por trimestre:"<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   cout<<mat1[i][j]+mat2[i][j]+mat3[i][j]<<" ";
   
  }
  cout<<endl;
  
 }
 return 0; 
}
