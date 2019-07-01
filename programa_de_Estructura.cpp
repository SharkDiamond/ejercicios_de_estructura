#include <iostream>

using namespace std;


int main(){


int t;
bool condicion=true;

while(condicion==true){

cout<<"Cantidad de vehiculos=";
cin>>t;

int vehiculos[t];

for(int i=0; i<t; i++){


int contador=i+1;



cout<<"Por favor introduzca la cantidad de litros del vehiculo numero:"<<contador<<"=";
cin>>vehiculos[i];




}

int cantidad_de_litros=0;

for(int y=0; y<t; y++){


cantidad_de_litros+=vehiculos[y];



}



cout<<"la cantidad de litros totales es de="<<cantidad_de_litros<<endl;

}

}








