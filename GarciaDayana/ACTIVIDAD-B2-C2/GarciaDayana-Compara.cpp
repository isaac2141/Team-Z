//=================================================
//===> Nombre del programa:Comparacion de dos numeros
//===> Archivo:GarciaDayana-Compara.cpp
//===> Autor:Garcia Sanchez Dayana Mariby
//===> Fecha de creacion:29/04/2022
//===> Fecha de Actualizacion:18/05/2022
//=================================================

#include<iostream>
using namespace std;
int main()
{
cout<<"//========================================="<<endl;
cout<<"//===> Nombre del programa:Comparacion de dos numeros"<<endl;
cout<<"//===> Archivo:GarciaDayana-Compara.cpp"<<endl;
cout<<"//===> Autor:Garcia Sanchez Dayana Mariby"<<endl;
cout<<"//===> Fecha de Creacion:29/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/05/2022"<<endl;
cout<<"//=================================================="<<endl<<endl;
        float Ds_x,Ds_y;
	cout<<"Ingrese valor de X: ";
	cin>>Ds_x;
	cout<<"Ingrese valor de Y: ";
	cin>>Ds_y;
	if(Ds_x==Ds_y){
	cout<<"El valor de X: "<<Ds_x<<"es igual a Y: "<<Ds_y<<endl;
	}else{
	if(Ds_x<Ds_y){
	cout<<"El valor de X: "<<Ds_x<<"es menor a Y: "<<Ds_y<<endl;
	}else{
	cout<<"El valor de Y: "<<Ds_y<<"es menor a X: "<<Ds_x<<endl;
	}
	}
	return 0;
}
