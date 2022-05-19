//=============================================
//===>Nombre del Programa: Calcular La edad de una Persona
//===>Archivo:Laedad.cpp
//===>Autor: Granja Jaramillo Estefania Lizbeth
//===>Fecha de creacion:23/04/2022
//===>Fecha de Actualizacion:19/05/2022
//==============================================
#include<iostream>
using namespace std;
int main()
{

cout<<"//============================================="<<endl;
cout<<"//===>Nombre del Programa: Calcular La edad de una Persona"<<endl;
cout<<"//===>Archivo:Laedad.cpp"<<endl;
cout<<"//===>Autor: Granja Jaramillo Estefania Lizbeth"<<endl;
cout<<"//===>Fecha de creacion:23/04/2022"<<endl;
cout<<"//===>Fecha de Actualizacion:19/05/2022"<<endl;
cout<<"//=============================================="<<endl<<endl;
	int JE_dd,JE_mm,JE_yy,JE_dd1,JE_mm1,JE_yy1,JE_da,JE_ma,JE_ya;
	cout<<"Ingrese la Fecha Actual: Dia Mes Año "<<endl;
	cin>>JE_dd>>JE_mm>>JE_yy;
	cout<<"Ingrese la Fecha de Nacimiento: Dia Mes Año "<<endl;
	cin>>JE_dd1>>JE_mm1>>JE_yy1;
	if(JE_dd<JE_dd1){
		JE_dd=JE_dd+30;
		JE_mm=JE_mm-1;
		JE_da=JE_dd-JE_dd1;
	}
	else{
		JE_da=JE_dd-JE_dd1;
	}
	if(JE_mm<JE_mm1){
		JE_mm=JE_mm+12;
		JE_yy=JE_yy-1;
		JE_ma=JE_mm-JE_mm1;
	}
	else{
		JE_ma=JE_mm-JE_mm1;
	}
	JE_ya=JE_yy-JE_yy1;
	cout<<"Ustd Tiene: "<<JE_ya<<" años "<<JE_ma<<" meses "<<" y "<<JE_da<<" dias "<<endl;
	return 0;
}
