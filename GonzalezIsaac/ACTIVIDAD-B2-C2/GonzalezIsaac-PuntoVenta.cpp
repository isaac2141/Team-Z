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
	int GI_C=0,GI_P;
	float GI_A=0,GI_x,GI_Vf,GI_IVA=0.12,GI_dsc,GI_Vb,GI_Vi,GI_Vd;
	cout<<"Ingrese la cantidad de Productos Comprados:  ";
	cin>>GI_P;
	cout<<"Ingrese el % del descuento que se realizarà:  ";
	cin>>GI_dsc;
	do{
	cout<<"Ingrese el Precio del Producto:  $  ";
	cin>>GI_x;
	GI_C=GI_C+1;
	GI_A=GI_A+GI_x;
	}while(GI_C<GI_P);
	cout<<"//================================================"<<endl;
cout<<"//==> Nombre de programa: Precio de varios productos"<<endl;
cout<<"//==> Archivo: GonzalezIsaac-PuntoVenta.cpp"<<endl;
cout<<"//==> Autor: Gonzalez Isaac"<<endl;
cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//==> Fecha de ultima actualizacion: 18-05-2022"<<endl;
cout<<"//================================================="<<endl;
	GI_Vb=GI_A;
	GI_Vd=GI_A*GI_dsc/100;
	GI_Vi=GI_A*GI_IVA;
	GI_Vf=GI_A+GI_Vi-GI_Vd;

        cout<<"El valor bruto de su compra es de:  $ "<<GI_Vb<<endl;
	cout<<"El valor del IVA de su compra es de:  $ "<<GI_Vi<<endl;
	cout<<"El valor del Descuento de su compra es de:  $ "<<GI_Vd<<endl;
	cout<<"El valor final de su compra a pagar es de:  $"<<GI_Vf<<endl;
	return 0;
}
	

