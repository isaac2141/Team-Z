//======================================================
//==> Nombre del programa: Calcular la edad
//==> Archivo: GonzalezIsaac-laedad.cpp
//==> Autor: Gonzalez Isaac
//==> Fecha de elaboracion: 02-05-2022
//==> Fecha de ultima actualizacion: 18-05-2022
//======================================================
#include<iostream>
using namespace std;
int main()
{
	int IS_dd,IS_mm,IS_yy,IS_dd1,IS_mm1,IS_yy1,IS_da,IS_ma,IS_ya;
	cout<<"Ingrese la Fecha Actual: Dia Mes Año "<<endl;
	cin>>IS_dd>>IS_mm>>IS_yy;
	cout<<"Ingrese la Fecha de Nacimiento: Dia Mes Año "<<endl;
	cin>>IS_dd1>>IS_mm1>>IS_yy1;
	if(IS_dd<IS_dd1){

		IS_dd=IS_dd+30;
		IS_mm=IS_mm-1;
		IS_da=IS_dd-IS_dd1;
	}
	else{
		IS_da=IS_dd-IS_dd1;
	}
	if(IS_mm<IS_mm1){
		IS_mm=IS_mm+12;
		IS_yy=IS_yy-1;
		IS_ma=IS_mm-IS_mm1;
	}
	else{
		IS_ma=IS_mm-IS_mm1;
	}
	cout<<"//================================================"<<endl;                       cout<<"//==> Nombre de programa: Calcular la edad"<<endl;                                     cout<<"//==> Archivo: GonzalezIsaac-laedad.cpp"<<endl;                                          cout<<"//==> Autor: Gonzalez Isaac"<<endl;      cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;                                           cout<<"//==> Fecha de ultima actualizacion: 18-05-2022"<<endl;                                  cout<<"//================================================="<<endl;
	IS_ya=IS_yy-IS_yy1;
	cout<<"Usted Tiene: "<<IS_ya<<" años "<<IS_ma<<" meses "<<" y "<<IS_da<<" dias "<<endl;
	return 0;
}
