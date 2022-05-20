//================================================
//==> Nombre del programa: Cuenta moneda
//==> Archivo : BarreraKiara-CuentaMoneda.cpp
//==>Autor: Barrera Garcia Kiara Domenica
//==>Fecha de elaboración: 2022-04-20
//==>Fecha ultima actualización: 2022-05-19
//=================================================
#include <iostream>
using namespace std;
int main ()
{
	int kg_n, kg_i, kg_sum=0, kg_sum1=0, kg_sum25=0, kg_sum50=0;
	cout<<"Escriba la cantidad de monedas que desea ingresar: "<<endl;
	cin>>kg_n;
	int num [kg_n];
	cout<<"Escriba el valor de la moneda: "<<endl;
	for (int kg_i=0; kg_i<kg_n; kg_i++){
		cin>>num [kg_i];
		kg_sum=kg_sum+num [kg_i];
		if (num [kg_i]==10){
			kg_sum1=kg_sum1+(num[kg_i]==10);	
	}
		else if (num [kg_i]==25){
			kg_sum25=kg_sum25+(num[kg_i]==25);
	}
		else {
			kg_sum50=kg_sum50+(num[kg_i]==50);
	}
}
	cout<<"La cantidad de monedas de 50 ctvs que ingreso fueron: "<<kg_sum50<<endl;
	cout<<"La cantidad de monedas de 25 ctvs que ingreso fueron: "<<kg_sum25<<endl;
	cout<<"La cantidad de monedad de 10 ctvs que ingreso fueron: "<<kg_sum1<<endl;
	cout<<"El total de dinero es: "<<kg_sum<<endl;
	
	cout<<"//================================================"<<endl;
    cout<<"//==> Nombre del programa: Cuenta moneda"<< endl;
    cout<<"//==> Archivo : BarreraKiara-CuentaMoneda.cpp"<<endl;
    cout<<"//==>Autor: Barrera Garcia Kiara Domenica"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
    cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
    cout<<"//=================================================";
return 0;
}
