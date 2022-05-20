//================================================
//==> Nombre del programa: Punto Venta
//==> Archivo : BarreraKiara-PuntoVenta.cpp
//==>Autor: Barrera Garcia Kiara Domenica
//==>Fecha de elaboración: 2022-04-20
//==>Fecha ultima actualización: 2022-05-19
//=================================================
#include <iostream>
using namespace std;
int main ()
{
	int kg_j=0, kg_p;
	float kg_b=0, kg_k, kg_c, kg_t, kg_t1, kg_y, kg_l;
	cout<<"Escriba la cantidad de productos que va a ingresar"<<endl;
	cin>>kg_p;
	do{
		cout<<"Ingrese el monto de la compra: "<<kg_j+1<<endl;
		cin>>kg_k;
		kg_j=kg_j+1;
		kg_b=kg_b+kg_k;
	}while (kg_j<kg_p);
	cout<<"Escriba el descuento deseado: "<<endl;
	cin>>kg_c;
	cout<<"Valor bruto: "<<kg_b<<endl;
	kg_t=(kg_b*kg_c)/100;
	cout<<"Descuento: "<<kg_t<<endl;
	kg_t1=kg_b-kg_t;
    kg_y=kg_t1*0.12;
	cout<<"IVA: "<<kg_y<<endl;
	kg_l=(kg_b-kg_t)+kg_y;
	cout<<"Valor TOTAL: "<<kg_l<<endl;
	
	cout<<"//================================================"<<endl;
    cout<<"//==> Nombre del programa: Punto Venta"<< endl;
    cout<<"//==> Archivo : BarreraKiara-PuntoVenta.cpp"<<endl;
    cout<<"//==>Autor: Barrera Garcia Kiara Domenica"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
    cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
    cout<<"//=================================================";
return 0;
}
