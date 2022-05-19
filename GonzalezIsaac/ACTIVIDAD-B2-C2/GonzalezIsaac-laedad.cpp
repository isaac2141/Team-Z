//======================================================
//==> Nombre del programa: Descifrar la edad
//==> Archivo: GonzalezIsaac-laedad.cpp
//==> Autor: Gonzalez Isaac
//==> Fecha de elaboracion: 02-05-2022
//==> Fecha de ultima actualizacion: 18-05-2022
//======================================================
#include<iostream>
using namespace std;
int main()
{
	int GI_dd,GI_mm,GI_yy,GI_dd1,GI_mm1,GI_yy1,GI_da,GI_ma,GI_ya;
	cout<<"Ingrese la Fecha Actual: Dia Mes Año "<<endl;
	cin>>GI_dd>>GI_mm>>GI_yy;
	cout<<"Ingrese la Fecha de Nacimiento: Dia Mes Año "<<endl;
	cin>>GI_dd1>>GI_mm1>>GI_yy1;
	if(GI_dd<GI_dd1){

		GI_dd=GI_dd+30;
		GI_mm=GI_mm-1;
		GI_da=GI_dd-GI_dd1;
	}
	else{
		GI_da=GI_dd-GI_dd1;
	}
	if(GI_mm<GI_mm1){
		GI_mm=GI_mm+12;
		GI_yy=GI_yy-1;
		GI_ma=GI_mm-GI_mm1;
	}
	else{
		GI_ma=GI_mm-GI_mm1;
	}
	cout<<"//================================================"<<endl;                       cout<<"//==> Nombre de programa: Descrifrar la edad"<<endl;                                     cout<<"//==> Archivo: GonzalezIsaac-laedad.cpp"<<endl;                                          cout<<"//==> Autor: Gonzalez Isaac"<<endl;      cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;                                           cout<<"//==> Fecha de ultima actualizacion: 18-05-2022"<<endl;                                  cout<<"//================================================="<<endl;
	GI_ya=GI_yy-GI_yy1;
	cout<<"Usted Tiene: "<<GI_ya<<" años "<<GI_ma<<" meses "<<" y "<<GI_da<<" dias "<<endl;
	return 0;
}
