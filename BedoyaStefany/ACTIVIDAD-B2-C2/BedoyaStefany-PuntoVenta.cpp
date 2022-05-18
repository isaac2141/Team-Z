#include<iostream>
using namespace std;
int main()
{
	int C=0,P;
	float A=0,x,Tb,PIVA,Pdsc,IVA=0.10,dsc=0.20,VT;
	cout<<"Ingrese la cantidad de Productos Comprados: ";
	cin>>P;
	do{
		cout<<"Ingrese el Precio del Producto: $ ";
		cin>>x;
		C=C+1;
		A=A+x;
		PIVA=A*IVA;
		cout<<"El valor del IVA de su compra es: $ "<<PIVA<<endl;
		Pdsc=A*dsc;
		cout<<"El valor del Descuento a su compra es: $ "<<Pdsc<<endl;
		Tb=PIVA+Pdsc;
	}while(C<P);
	if(Tb==A){
		cout<<"Su compra no aplica a un Descuento: "<<Tb<<endl;
		IVA=Tb*PIVA/100;
		dsc=Tb*Pdsc/100;
		cout<<"Su valor con Descuento es: $"<<Pdsc<<endl;
		Tb=PIVA+Pdsc;
	}else{
		VT=A+PIVA-Pdsc;
		cout<<"El valor Total de su Compra es: $"<<VT<<endl;
	}
	return 0;
}
