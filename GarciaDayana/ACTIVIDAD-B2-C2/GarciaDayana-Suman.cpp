//=================================================
//===>Nombre del programa:Suma de dos numeros
//===>Archivo:GarciaDayana-Suman.cpp
//===>Autor:Garcia Sanchez Dayana Mariby
//===>Fecha de creacion:29/04/2022
//===>Fecha de Actualizacion:18/05/2022
//=================================================

#include<iostream>
using namespace std;
int main()
{
cout<<"//=========================================="<<endl;
cout<<"//===> Nombre del programa:Suman de dos numeros"<<endl;
cout<<"//===> Archivo:GarciaDayana-Suman.cpp"<<endl;
cout<<"//===> Autor:Garcia Sanchez Dayana Mariby"<<endl;
cout<<"//===> Fecha de creacion:29/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/05/2022"<<endl;
cout<<"//=========================================="<<endl<<endl;
	int Ds_c=0,Ds_a;
	float Ds_s=0,Ds_y;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>Ds_a;
	do{
		cout<<"Ingrese un numero: ";
		cin>>Ds_y;
		Ds_c=Ds_c+1;
		Ds_s=Ds_s+Ds_y;
	}while(Ds_c<Ds_a);
	cout<<"La suma total es: "<<Ds_s<<endl;
	return 0;
}
