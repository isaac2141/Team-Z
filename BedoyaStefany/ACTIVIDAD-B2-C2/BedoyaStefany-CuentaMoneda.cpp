#include<iostream>
using namespace std;
int main()
{
	int cmi,cmds=0,cmdci=0,cmdvi=0;
	float x,ctdc=0,ctdmd=0,ctdmv=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>cmi;
	do{
		cout<<"Ingresar el valor sea moneda (0.10,0.25): ";
		cin>>x;
		cmds=cmds+1;
		ctdc=ctdc+x;
		if(x==(float)0.1){
			cmdci=cmdci+1;
			ctdmd=ctdmd+x;
		}else{
			cmdvi=cmdvi+1;
			ctdmv=ctdmv+x;
		}
	}while(cmds<cmi);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<cmds<<endl;
	cout<<"Cantidad total en dinero contado: "<<ctdc<<endl;
	cout<<"Cantidad de monedas de 0.10ctv ingresadas: "<<cmdci<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.10: "<<ctdmd<<endl;
	cout<<"Cantidad de monedas de 0.25ctv ingresadas: "<<cmdvi<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25: "<<ctdmv<<endl;
	return 0;
}
