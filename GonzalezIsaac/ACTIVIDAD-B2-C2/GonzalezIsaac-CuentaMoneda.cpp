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
	int IS_n,IS_c=0,IS_c1=0,IS_c2=0,IS_c3=0;
	float IS_x,IS_a=0,IS_a1=0,IS_a2=0,IS_a3=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>IS_n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10,0.25,0.50): ";
	   cin>>IS_x;
	   IS_c=IS_c+1;
	   IS_a=IS_a+IS_x;
	   if(IS_x==(float)0.10){
	   IS_c1=IS_c1+1;
	   IS_a1=IS_a1+IS_x;
	   }else if(IS_x==(float)0.25){
	   IS_c2=IS_c2+1;
	   IS_a2=IS_a2+IS_x;
	   }else {
	   IS_c3=IS_c3+1;
	   IS_a3=IS_a3+IS_x;}
	}while(IS_c<IS_n);
	cout<<"//================================================"<<endl;
cout<<"//==> Nombre de programa: Contador de monedas"<<endl;
cout<<"//==> Archivo: GonzalezIsaac-CuentaMoneda.cpp"<<endl;
cout<<"//==> Autor: Gonzalez Isaac"<<endl;
cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//==> Fecha de ultima actualizacion: 18-05-2022"<<endl;
cout<<"//================================================="<<endl;
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<IS_c<<endl;
	cout<<"Cantidad total en dinero contado: $ "<<IS_a<<endl;
	cout<<"Cantidad de monedas de 0.10ctv ingresadas: "<<IS_c1<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.10: $"<<IS_a1<<endl;
	cout<<"Cantidad de monedas de 0.25ctv ingresadas: "<<IS_c2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25: $"<<IS_a2<<endl;
	cout<<"Cantidad de monedas de 0.50ctv ingresadas: "<<IS_c3<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.50: $"<<IS_a3<<endl;
	return 0;
}
