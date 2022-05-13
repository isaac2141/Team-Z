#include<iostream>
using namespace std;
int main()
{
	int C=0,P;
	float A=0,x,Vf,IVA=0.12,dsc,Vb,Vi,Vd;
	cout<<"Ingrese la cantidad de Productos Comprados:  ";
	cin>>P;
	cout<<"Ingrese el % del descuento que se realizarà:  ";
	cin>>dsc;
	do{
	cout<<"Ingrese el Precio del Producto:  $  ";
	cin>>x;
	C=C+1;
	A=A+x;
	}while(C<P);
	Vb=A;
	Vd=A*dsc/100;
	Vi=A*IVA;
	Vf=A+Vi-Vd;

        cout<<"El valor bruto de su compra es de:  $ "<<Vb<<endl;
	cout<<"El valor del IVA de su compra es de:  $ "<<Vi<<endl;
	cout<<"El valor del Descuento de su compra es de:  $ "<<Vd<<endl;
	cout<<"El valor final de su compra a pagar es de:  $"<<Vf<<endl;
	return 0;
}
	

