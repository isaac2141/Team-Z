//================================================
// ===> Nombre del Programa:calculo de Iva y Descuento
// ===> Archivo:BedoyaStefany-PuntoVenta.cpp
// ===> Autor:Bedoya Napa Stefany Mishelle 
// ===> Fecha de elaboración:30/04/2022
// ===> Fecha de actualizacion:18/05/2022
//=====================================================
#include<iostream>
using namespace std;
int main()
{
cout<<"//=========================================="<<endl;
cout<<"// Nombre del Programa:Calculo de Iva y Descuento"<<endl;
cout<<"// Archivo:BedoyaStefany-PuntoVenta.cpp"<<endl;
cout<<"// Autor:BedoyaNapaStefanyMishelle"<<endl;
cout<<"// Fecha de elaboracion:30/04/2022"<<endl;
cout<<"//=========================================="<<endl;
	int SN_C=0,SN_P;
	float SN_A=0,SN_x,SN_Tb,SN_PIVA,SN_Pdsc,SN_IVA=0.12,SN_dsc=0.25,SN_VT;
	cout<<"Ingrese la cantidad de Productos Comprados: ";
	cin>>SN_P;
	do{
		cout<<"Ingrese el Precio del Producto: $ ";
		cin>>SN_x;
		SN_C=SN_C+1;
		SN_A=SN_A+SN_x;
		SN_PIVA=SN_A*SN_IVA;
		cout<<"El valor del IVA de su compra es: $ "<<SN_PIVA<<endl;
		SN_Pdsc=SN_A*SN_dsc;
		cout<<"El valor del Descuento a su compra es: $ "<<SN_Pdsc<<endl;
		SN_Tb=SN_PIVA+SN_Pdsc;
	}while(SN_C<SN_P);
	if(SN_Tb==SN_A){
		cout<<"Su compra no aplica a un Descuento: "<<SN_Tb<<endl;
		SN_IVA=SN_Tb*SN_PIVA/100;
		SN_dsc=SN_Tb*SN_Pdsc/100;
		cout<<"Su valor con Descuento es: $"<<SN_Pdsc<<endl;
		SN_Tb=SN_PIVA+SN_Pdsc;
	}else{
		SN_VT=SN_A+SN_PIVA-SN_Pdsc;
		cout<<"El valor Total de su Compra es: $"<<SN_VT<<endl;
	}
	return 0;
}
