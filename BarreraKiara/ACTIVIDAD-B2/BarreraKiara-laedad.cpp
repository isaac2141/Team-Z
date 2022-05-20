//================================================
//==> Nombre del programa: La Edad
//==> Archivo : BarreraKiara-laedad.cpp
//==>Autor: Barrera Garcia Kiara Domenica
//==>Fecha de elaboración: 2022-04-20
//==>Fecha ultima actualización: 2022-05-19
//=================================================
#include <iostream>
using namespace std;
int main ()
{
	int kg_kk, kg_jj, kg_yy, kg_cc1, kg_pp1, kg_yy1, kg_da, kg_la, kg_ca;
	cout<<"Escriba la fecha actual (dia/mes/ano): "<<endl;
	cin>>kg_kk>>kg_jj>>kg_yy;
	cout<<"Escriba su fecha de nacimiento (dia/mes/ano): "<<endl;
	cin>>kg_cc1>>kg_pp1>>kg_yy1;
	if (kg_kk<kg_cc1){
		kg_kk=kg_kk+30;
		kg_jj=kg_jj-1;
		kg_da=kg_kk-kg_cc1;
	}
		else {
			kg_da=kg_kk-kg_cc1;
		}
	if (kg_jj<kg_pp1){
		kg_jj=kg_jj+12;
		kg_yy=kg_yy-1;
		kg_la=kg_jj-kg_pp1;
	}
		else {
			kg_la=kg_jj-kg_pp1;
		}
	kg_ca=kg_yy-kg_yy1;
	cout<<"Tienes"<<kg_ca<<" años, "<<kg_la<<" meses "<<"y "<<kg_da<<" dias."<<endl;
	
	cout<<"//================================================"<<endl;
    cout<<"//==> Nombre del programa: La Edad"<< endl;
    cout<<"//==> Archivo : BarreraKiara-laedad.cpp"<<endl;
    cout<<"//==>Autor: Barrera Garcia Kiara Domenica"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
    cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
    cout<<"//=================================================";
	return 0;
}
