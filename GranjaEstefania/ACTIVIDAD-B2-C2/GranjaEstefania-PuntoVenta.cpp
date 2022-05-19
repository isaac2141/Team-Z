//==============================================//===>Nombre del Programa: Punto y venta de varios articulos
//===>Archivo:PuntoVenta.cpp
//===>Autor: Granja Jaramillo Estefania Lizbeth
//===>Fecha de Creacion:23/04/2022
//===>Fecha de Actualizacion:19/05/2022
//=============================================
#include<iostream>
using namespace std;
int main()
{

cout<<"//=============================================="<<endl;
cout<<"//===>Nombre del Programa: Punto y venta de varios articulos"<<endl;
cout<<"//===>Archivo:PuntoVenta.cpp"<<endl;
cout<<"//===>Autor: Granja Jaramillo Estefania Lizbeth"<<endl;
cout<<"//===>Fecha de Creacion:23/04/2022"<<endl;
cout<<"//===>Fecha de Actualizacion:19/05/2022"<<endl;
cout<<"//============================================="<<endl<<endl;
	int JE_C=0,JE_P;
	float JE_A=0,JE_x,JE_Tb,JE_PIVA,JE_Pdsc,JE_IVA=0.12,JE_dsc=0.25,JE_VT;
	cout<<"Ingrese la cantidad de Productos Comprados:  ";
	cin>>JE_P;
	do{
	cout<<"Ingrese el Precio del Producto:  $  ";
	cin>>JE_x;
	JE_C=JE_C+1;
	JE_A=JE_A+JE_x;
	JE_PIVA=JE_A*JE_IVA;
	cout<<"El valor del IVA de su compra es:  $ "<<JE_PIVA<<endl;
	JE_Pdsc=JE_A*JE_dsc;
	cout<<"El valor del Descuento a su compra es:  $ "<<JE_Pdsc<<endl;
	JE_Tb=JE_PIVA+JE_Pdsc;
       }while(JE_C<JE_P);
	if(JE_Tb==JE_A){
	cout<<"Su compra no aplica a un Descuento  "<<JE_Tb<<endl;
        JE_IVA=JE_Tb*JE_PIVA/100;
        JE_dsc=JE_Tb*JE_Pdsc/100;
	cout<<"Su valor con Descuento es:  $  "<<JE_Pdsc<<endl;
	JE_Tb=JE_PIVA+JE_Pdsc;
	}else{
	JE_VT=JE_A+JE_PIVA-JE_Pdsc;
	cout<<"El valor Total de su Compra es:  $"<<JE_VT<<endl;
	}
	return 0;
}
	

