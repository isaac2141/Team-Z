//==============================================//===>Nombre del Programa:Contador de Moneda
//===>Archivo: CuentaMoneda.cpp
//===>Autor:Granja Jaramillo Estefania Lizbeth
//===>Fecha de Creacion:23/04/2022
//===>Fecha de Actualizacion:19/05/2022
//==============================================
#include<iostream>
using namespace std;
int main()
{

cout<<"//=============================================="<<endl;
cout<<"//===>Nombre del Programa:Contador de Moneda"<<endl;
cout<<"//===>Archivo: CuentaMoneda.cpp"<<endl;
cout<<"//===>Autor:Granja Jaramillo Estefania Lizbeth"<<endl;
cout<<"//===>Fecha de Creacion:23/04/2022"<<endl;
cout<<"//===>Fecha de Actualizacion:19/05/2022"<<endl;
cout<<"//============================================="<<endl<<endl;
	int JE_n,JE_c=0,JE_c1=0,JE_c2=0,JE_c3=0;
	float JE_x,JE_a=0,JE_a1=0,JE_a2=0,JE_a3=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>JE_n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10,0.25,0.50): ";
	   cin>>JE_x;
	   JE_c=JE_c+1;
	   JE_a=JE_a+JE_x;
	   if(JE_x==(float)0.10){
	   JE_c1=JE_c1+1;
	   JE_a1=JE_a1+JE_x;
	   }else if(JE_x==(float)0.25){
	   JE_c2=JE_c2+1;
	   JE_a2=JE_a2+JE_x;
	   }else {
	   JE_c3=JE_c3+1;
	   JE_a3=JE_a3+JE_x;}
	}while(JE_c<JE_n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<JE_c<<endl;
	cout<<"Cantidad total en dinero contado: $ "<<JE_a<<endl;
	cout<<"Cantidad de monedas de 0.10ctv ingresadas: "<<JE_c1<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.10: $"<<JE_a1<<endl;
	cout<<"Cantidad de monedas de 0.25ctv ingresadas: "<<JE_c2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25: $"<<JE_a2<<endl;
	cout<<"Cantidad de monedas de 0.50ctv ingresadas: "<<JE_c3<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.50: $"<<JE_a3<<endl;
	return 0;
}
