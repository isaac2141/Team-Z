#include <iostream>
using namespace std;
int main ()
{
	int j=0, p;
	float b=0, k, c, t, t1, y, l;
	cout<<"Escriba la cantidad de productos que va a ingresar"<<endl;
	cin>>p;
	do{
		cout<<"Ingrese el monto de la compra: "<<j+1<<endl;
		cin>>k;
		j=j+1;
		b=b+k;
	}while (j<p);
	cout<<"Escriba el descuento deseado: "<<endl;
	cin>>c;
	cout<<"Valor bruto: "<<b<<endl;
	t=(b*c)/100;
	cout<<"Descuento: "<<t<<endl;
	t1=b-t;
	y=t1*0.12;
	cout<<"IVA: "<<y<<endl;
	l=(b-t)+y;
	cout<<"Valor TOTAL: "<<l<<endl;
return 0;
}
