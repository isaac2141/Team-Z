//======================================================
// ===> Nombre del Programa: Calculo de Edad de uma persona
// ===> Archivo: BedoyaStefany-laedad.cpp
// ===> Autor: Bedoya Napa Stefany Mishelle
// ===> Fecha de Elaboracion: 30/04/2022
// ===> Fecha de Actualizacion: 18/05/2022
// =====================================================

#include<iostream>
using namespace std;
int main()
{
cout<<"//=============================================="<<endl;
cout<<"//===> Nombre del Programa:Calculo de la edad de una persona"<<endl;
cout<<"//===> Archivo:BedoyaStefany-laedad.cpp"<<endl;
cout<<"//===> Autor: Bedoya Napa Stefany Mishelle"<<endl;
cout<<"//===> Fecha de elaboracion:30/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/04/2022"<<endl;
cout<<"//=============================================="<<endl<<endl;
	int SN_dd,SN_mm,SN_yy,SN_dd1,SN_mm1,SN_yy1,SN_da,SN_ma,SN_ya;
	cout<<"Ingrese la Fecha Actual: Dia Mes Año "<<endl;
	cin>>SN_dd>>SN_mm>>SN_yy;
	cout<<"Ingrese la Fecha de Nacimiento: Dia Mes Año "<<endl;
	cin>>SN_dd1>>SN_mm1>>SN_yy1;
	if(SN_dd<SN_dd1){
		SN_dd=SN_dd+30;
		SN_mm=SN_mm-1;
		SN_da=SN_dd-SN_dd1;
	}
	else{
		SN_da=SN_dd-SN_dd1;
	}
	if(SN_mm<SN_mm1){
		SN_mm=SN_mm+12;
		SN_yy=SN_yy-1;
		SN_ma=SN_mm-SN_mm1;
	}
	else{
		SN_ma=SN_mm-SN_mm1;
	}
	SN_ya=SN_yy-SN_yy1;
	cout<<"Usted Tiene: "<<SN_ya<<" años "<<SN_ma<<" meses "<<" y "<<SN_da<<" dias "<<endl;
	return 0;
}

	
