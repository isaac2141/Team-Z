//======================================================
//==> Nombre del programa: Contador de monedas
//==> Archivo: GonzalezIsaac-CuentaMoneda.cpp
//==> Autor: Gonzalez Isaac
//==> Fecha de elaboracion: 02-05-2022
//==> Fecha de ultima actualizacion: 18-05-2022
//======================================================
#include<iostream>
using namespace std;
int main()
{
	int GI_n,GI_c=0,GI_c1=0,GI_c2=0,GI_c3=0;
	float GI_x,GI_a=0,GI_a1=0,GI_a2=0,GI_a3=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>GI_n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10,0.25,0.50): ";
	   cin>>GI_x;
	   GI_c=GI_c+1;
	   GI_a=GI_a+GI_x;
	   if(GI_x==(float)0.10){
	   GI_c1=GI_c1+1;
	   GI_a1=GI_a1+GI_x;
	   }else if(GI_x==(float)0.25){
	   GI_c2=GI_c2+1;
	   GI_a2=GI_a2+GI_x;
	   }else {
	   GI_c3=GI_c3+1;
	   GI_a3=GI_a3+GI_x;}
	}while(GI_c<GI_n);
	cout<<"//================================================"<<endl;
cout<<"//==> Nombre de programa: Contador de monedas"<<endl;
cout<<"//==> Archivo: GonzalezIsaac-CuentaMoneda.cpp"<<endl;
cout<<"//==> Autor: Gonzalez Isaac"<<endl;
cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//==> Fecha de ultima actualizacion: 18-05-2022"<<endl;
cout<<"//================================================="<<endl;
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<GI_c<<endl;
	cout<<"Cantidad total en dinero contado: $ "<<GI_a<<endl;
	cout<<"Cantidad de monedas de 0.10ctv ingresadas: "<<GI_c1<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.10: $"<<GI_a1<<endl;
	cout<<"Cantidad de monedas de 0.25ctv ingresadas: "<<GI_c2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25: $"<<GI_a2<<endl;
	cout<<"Cantidad de monedas de 0.50ctv ingresadas: "<<GI_c3<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.50: $"<<GI_a3<<endl;
	return 0;
}
