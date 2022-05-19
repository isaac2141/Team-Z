//==================================================
//===> Nombre del Programa:Suma de números
//===> Archivo:BedoyaStefany-SumaN.cpp
//===> Autor:Bedoya Napa Stefany Mishelle
//===> Fecha de Elaboracion: 30/04/2022
//===> Fecha de Actualización: 18/05/2022

#include<iostream>
using namespace std;
int main()
{
cout<<"//==============================================="<<endl;
cout<<"//===> Nombe del Programa:Suma de numeros"<<endl;
cout<<"//===> Archivo:BedoyaStefany-SumaN.cpp"<<endl;
cout<<"//===> Autor:Bedoya Napa Stefany Mishelle"<<endl;
cout<<"//===> Fecha de Elaboracion:30/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/05/2022"<<endl;
cout<<"//==============================================="<<endl<<endl;
	int SN_C=0,SN_b;
	float SN_S=0,SN_x;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>SN_b;
	do{
		cout<<"Ingrese un numero: ";
		cin>>SN_x;
		SN_C=SN_C+1;
		SN_S=SN_S+SN_x;
	} while (SN_C<SN_b);
	cout<<"La suma total es: "<<SN_S<<endl;
	return 0;
}
