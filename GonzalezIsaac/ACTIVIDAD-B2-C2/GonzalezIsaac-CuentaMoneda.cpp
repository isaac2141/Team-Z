#include<iostream>
using namespace std;
int main()
{
	int n,c=0,c1=0,c2=0,c3=0;
	float x,a=0,a1=0,a2=0,a3=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10,0.25,0.50): ";
	   cin>>x;
	   c=c+1;
	   a=a+x;
	   if(x==(float)0.10){
	   c1=c1+1;
	   a1=a1+x;
	   }else if(x==(float)0.25){
	   c2=c2+1;
	   a2=a2+x;
	   }else {
	   c3=c3+1;
	   a3=a3+x;}
	}while(c<n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<c<<endl;
	cout<<"Cantidad total en dinero contado: $ "<<a<<endl;
	cout<<"Cantidad de monedas de 0.10ctv ingresadas: "<<c1<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.10: $"<<a1<<endl;
	cout<<"Cantidad de monedas de 0.25ctv ingresadas: "<<c2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25: $"<<a2<<endl;
	cout<<"Cantidad de monedas de 0.50ctv ingresadas: "<<c3<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.50: $"<<a3<<endl;
	return 0;
}
