//======================================================
//==> Nombre del programa: Precio de varios productos
//==> Archivo: GonzalezIsaac-PuntoVenta.cpp
//==> Autor: Gonzalez Isaac
//==> Fecha de elaboracion: 02-05-2022
//==> Fecha de ultima actualizacion: 18-05-2022
//======================================================
#include<iostream>
using namespace std;
int main()
{
	int IS_C=0,IS_P;
	float IS_A=0,IS_x,IS_Vf,IS_IVA=0.12,IS_dsc,IS_Vb,IS_Vi,IS_Vd;
	cout<<"Ingrese la cantidad de Productos Comprados:  ";
	cin>>IS_P;
	cout<<"Ingrese el % del descuento que se realizarà:  ";
	cin>>IS_dsc;
	do{
	cout<<"Ingrese el Precio del Producto:  $  ";
	cin>>IS_x;
	IS_C=IS_C+1;
	IS_A=IS_A+IS_x;
	}while(IS_C<IS_P);
	cout<<"//================================================"<<endl;
cout<<"//==> Nombre de programa: Precio de varios productos"<<endl;
cout<<"//==> Archivo: GonzalezIsaac-PuntoVenta.cpp"<<endl;
cout<<"//==> Autor: Gonzalez Isaac"<<endl;
cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//==> Fecha de ultima actualizacion: 18-05-2022"<<endl;
cout<<"//================================================="<<endl;
	IS_Vb=IS_A;
	IS_Vd=IS_A*IS_dsc/100;
	IS_Vi=IS_A*IS_IVA;
	IS_Vf=IS_A+IS_Vi-IS_Vd;

        cout<<"El valor bruto de su compra es de:  $ "<<IS_Vb<<endl;
	cout<<"El valor del IVA de su compra es de:  $ "<<IS_Vi<<endl;
	cout<<"El valor del Descuento de su compra es de:  $ "<<IS_Vd<<endl;
	cout<<"El valor final de su compra a pagar es de:  $"<<IS_Vf<<endl;
	return 0;
}
	

