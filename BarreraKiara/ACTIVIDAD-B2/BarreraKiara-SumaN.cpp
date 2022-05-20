//================================================
//==> Nombre del programa: SumaN
//==> Archivo : BarreraKiara-SumaN.cpp
//==>Autor: Barrera Garcia Kiara Domenica
//==>Fecha de elaboración: 2022-04-20
//==>Fecha ultima actualización: 2022-05-19
//=================================================	
#include <iostream>
using namespace std;

int main ()
{
	int kg_k=0, kg_v;
	float kg_p, kg_j=0;
	cout<<"Escriba la cantidad de numeros que quiere sumar: "<<endl;
	cin>>kg_v;
	do {
		cout<<"Digite el numero: "<<endl;
		cin>>kg_p;
		kg_k=kg_k+1; 
		kg_j=kg_j+kg_p;
	}while (kg_k<kg_v);
	cout<<"Usted ingreso "<<kg_v<<" numeros"<<endl;
	cout<<"Suma total: "<<kg_j<<endl;
	
    cout<<"//================================================"<<endl;
    cout<<"//==> Nombre del programa: SumaN"<< endl;
    cout<<"//==> Archivo : BarreraKiara-SumaN.cpp"<<endl;
    cout<<"//==>Autor: Barrera Garcia Kiara Domenica"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
    cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
    cout<<"//=================================================";
	return 0;
}
