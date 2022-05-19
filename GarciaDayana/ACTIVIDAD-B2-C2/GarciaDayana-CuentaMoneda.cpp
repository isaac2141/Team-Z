//=================================================
//===> Nombre del Programa:CuentaMoneda
//===> Archivo:GarciaDayana-CuentaMoneda.cpp
//===> Autor:Garcia Sanchez Dayana Mariby
//===> Fecha de creacion:29/04/2022
//===> Fecha de Actualizacin:18/05/2022
//=================================================

#include<iostream>
using namespace std;
int main()
{
cout<<"//=========================================="<<endl;
cout<<"//===> Nombre del Programa:CuentaMoneda"<<endl;
cout<<"//===> Archivo:GarciaDayana-CuentaMoneda.cpp"<<endl;
cout<<"//===> Autor:Garcia Sanchez Dayana Mariby"<<endl;
cout<<"//===> Fecha de creacion:29/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/05/2022"<<endl;
cout<<"//=========================================="<<endl<<endl;
	int Ds_n,Ds_c=0,Ds_c1=0,Ds_c2=0;
	float Ds_x,Ds_a=0,Ds_a1=0,Ds_a2=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>Ds_n;
	do{
		 cout<<"Ingrese el valor de la moneda (0.10,0.25): ";
		 cin>>Ds_x;
		 Ds_c=Ds_c+1;
		 Ds_a=Ds_a+Ds_x;
		 if(Ds_x==(float)0.10){
		Ds_c1=Ds_c1+1;
		Ds_a1=Ds_a1+Ds_x;
		 }else{
		Ds_c2=Ds_c2+1;
		Ds_a2=Ds_a2+Ds_x;
		 }
	}while(Ds_c<Ds_n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<Ds_c<<endl;
	cout<<"Cantidad total en dinero contado: "<<Ds_a<<endl;
	cout<<"Cantidad de monedas de 0.10 ctv ingresadas: "<<Ds_c1<<endl;
	cout<<"Cantidad total en dinero en monedas 0.10: "<<Ds_a1<<endl;
	cout<<"Cantidad de monedas de 0.25ctv ingresadas: "<<Ds_c2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25: "<<Ds_a2<<endl;
	return 0;
}
