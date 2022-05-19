//====================================
//===> Nombre del Programa: Conteo de monedas 
//===> Archivo: BedoyaStefany-CuentaMoneda.cpp
//===> Autor: Bedoya Napa Stefany Mishelle
//===> Fecha de realización: 30/04/2022
//===> Fecha de actualización: 18/05/2022
//=====================================
#include<iostream>
using namespace std;
int main()
{
cout<<"//=========================================="<<endl;
cout<<"//===> Nombre del Programa:Conteo de monedas"<<endl;
cout<<"//===> Archivo:BedoyaStefany-CuentaMoneda.cpp"<<endl;
cout<<"//===> Autor:Bedoya Napa Stefany Mishelle"<<endl;
cout<<"//===> Fecha de realización:30/04/2022"<<endl;
cout<<"//===> Fecha de actualizacion:18/05/2022"<<endl<<endl;
cout<<"//==========================================="<<endl<<endl;
	int SN_n,SN_c=0,SN_c1=0,SN_c2=0,SN_c3=0;
	float SN_x,SN_a=0,SN_a1=0,SN_a2=0,SN_a3=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>SN_n;
	do{
		cout<<"Ingresar el valor sea moneda (0.10,0.25,0.50): ";
		cin>>SN_x;
		SN_c=SN_c+1;
		SN_a=SN_a+SN_x;
		if(SN_x==(float)0.10){
			SN_c1=SN_c1+1;
			SN_a1=SN_a1+SN_x;
		}else if(SN_x==(float)0.25){
			SN_c2=SN_c2+1;
			SN_a2=SN_a2+SN_x;
			
		}else{
			SN_c3=SN_c3+1;
			SN_a3=SN_a3+SN_x;
		}
	
	}while(SN_c<SN_n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<SN_c<<endl;
	cout<<"Cantidad total en dinero contado: $  "<<SN_a<<endl;
	cout<<"Cantidad de monedas de 0.10ctv ingresadas: "<<SN_c1<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.10: $ "<<SN_a1<<endl;
	cout<<"Cantidad de monedas de 0.25ctv ingresadas: "<<SN_c2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25: $"<<SN_a2<<endl;
	cout<<"Cantidad de monedas de 0.50ctv ingresadas: "<<SN_c3<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.50: $"<<SN_a3<<endl;
	return 0;
}
