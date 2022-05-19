//=================================================
//===> Nombre del programa:PuntoVenta
//===> Archivo:GarciaDayana-PuntoVenta.cpp
//==> Autor:Garcia Sanchez Dayana Mariby
//==> Fecha de creacion:29/04/2022
//==> Fecha de Actualizacion:18/05/2022
//=================================================

#include<iostream>
using namespace std;
int main()
{
cout<<"//=========================================="<<endl;
cout<<"//===> Nombre del programa:PuntoVenta"<<endl;
cout<<"//===> Archivo:GarciaDayana-PuntoVenta.cpp"<<endl;
cout<<"//===> Autor:Garcia Sanchez Dayana Mariby"<<endl;
cout<<"//===> Fecha de creacion:29/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/05/2022"<<endl;
cout<<"//========================================="<<endl<<endl;
	int Ds_C=0,Ds_P;
	float Ds_A=0,Ds_x,Ds_Tb,Ds_PIVA,Ds_Pdsc,Ds_IVA=0.12,Ds_dsc=0.25,Ds_VT;
	cout<<"Ingrese la cantidad de Productos Comprados: ";
	cin>>Ds_P;
	do{
	cout<<"Ingrese el precio del Producto: $ ";
	cin>>Ds_x;
	Ds_C=Ds_C+1;
	Ds_A=Ds_A+Ds_x;
	Ds_PIVA=Ds_A*Ds_IVA;
	cout<<"El valor del IVA de su compra es: $ "<<Ds_PIVA<<endl;
	Ds_Pdsc=Ds_A*Ds_dsc;
	cout<<"El valor del Descuento a su compra es: $ ";
	Ds_Tb=Ds_PIVA+Ds_Pdsc;
	}while(Ds_C<Ds_P);
	if(Ds_Tb==Ds_A){
	cout<<"Su compra no aplica a un Descuento "<<Ds_Tb<<endl;
	Ds_IVA=Ds_Tb*Ds_PIVA/100;
	Ds_dsc=Ds_Tb*Ds_Pdsc/100;
	cout<<"Su valor con Descuento es: $ "<<Ds_Pdsc<<endl;
	Ds_Tb=Ds_PIVA+Ds_Pdsc;
	}else{
		Ds_VT=Ds_A+Ds_PIVA-Ds_Pdsc;
		cout<<"El valor total de su compra es: $ "<<Ds_VT<<endl;
	}
	return 0;
}


