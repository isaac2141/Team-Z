//=================================================
//===> Nombre del programa:la edad
//===> Archivo:GarciaDayana-laedad.cpp
//===> Autor:Garcia Sanchez Dayana Mariby
//===> Fecha de creacion:29/04/2022
//===> Fecha de Actualizacion:18/05/2022
//=================================================

#include<iostream>
using namespace std;
int main()
{
cout<<"//=========================================="<<endl;
cout<<"//===> Nombre del programa:la edad"<<endl;
cout<<"//===> Archivo:GarciaDayana-laedad.cpp"<<endl;
cout<<"//===> Autor:Garcia Sanchez Dayana Mariby"<<endl;
cout<<"//===> Fecha de creacion:29/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/05/2022"<<endl;
cout<<"//=========================================="<<endl<<endl;

	int Ds_kk,Ds_jj,Ds_yy,Ds_cc1,Ds_pp1,Ds_yy1,Ds_da,Ds_la,Ds_ca;
	cout<<"Escriba la fecha actual (dia/mes/año): "<<endl;
	cin>>Ds_kk>>Ds_jj>>Ds_yy;
	cout<<"Escriba su fecha de nacimiento (dia/mes/año): "<<endl;
	cin>>Ds_cc1>>Ds_pp1>>Ds_yy1;
	if (Ds_kk<<Ds_cc1){
		Ds_kk=Ds_kk+30;
		Ds_jj=Ds_jj-1;
		Ds_da=Ds_kk-Ds_cc1;
	}

	else{
		Ds_da=Ds_kk-Ds_cc1;
	}
	if (Ds_jj<<Ds_pp1){
		Ds_jj=Ds_jj+12;
		Ds_yy=Ds_yy-1;
		Ds_la=Ds_jj-Ds_pp1;
	}
	Ds_ca=Ds_yy-Ds_yy1;
	cout<<"Tienes"<<Ds_ca<<" años, "<<Ds_la<<" meses "<<" y "<<Ds_da<<" dias. "<<endl;
	return 0;
}
