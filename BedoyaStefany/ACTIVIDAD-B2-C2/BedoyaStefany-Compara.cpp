//===================================================
// ===> Nombre del Programa:Comparación de 2 números
// ===> Archivo:BedoyaStefany-Compara.cpp
// ===> Autor:Bedoya Napa Stefany Mishelle
// ===> Fecha de Elaboración:30/04/2022
// ===> Fecha de Actualización:18/05/2022
//===================================================


#include<iostream>
using namespace std;
int main()
{
cout<<"//========================================"<<endl;
cout<<"// Nombre del Programa:Comparación de 2 números"<<endl;
cout<<"// Archivo:BedoyaStefany-Compara.cpp"<<endl;
cout<<"// Autor: Bedoya Napa Stefany Mishelle"<<endl;
cout<<"// Fecha de elaboración:30/04/2022"<<endl;
cout<<"// Fecha de Actualización:18/05/2022"<<endl;
cout<<"//========================================="<<endl;
	float SN_x,SN_y;
	cout<<"Ingrese el valor de X: ";
	cin>>SN_x;
	cout<<"Ingrese valor de Y: ";
	cin>>SN_y;
	if(SN_x==SN_y){
	cout<<"El valor de X: "<<SN_x<<" es igual a Y: "<<SN_y<<endl;
	}else{
	if(SN_x<SN_y){
	cout<<"El valor de X:"<<SN_x<<"Es menor a Y: "<<SN_y<<endl;
	}else{
	cout<<"El valor de Y:"<<SN_y<<"Es menor a X: "<<SN_x<<endl;
	}
	}
	return 0;
}

