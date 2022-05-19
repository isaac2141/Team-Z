//======================================================
//==> Nombre del programa: Comparacion de dos números
//==> Archivo: GonzalezIsaac-Compara.cpp
//==> Autor: Gonzalez Isaac
//==> Fecha de elaboracion: 02-05-2022
//==> Fecha de ultima actualizacion: 18-05-2022
//======================================================
#include<iostream>
using namespace std;
int main()
{
	float GI_x,GI_y;
	cout<<"Ingrese valor de x:  ";
	cin>>GI_x;
	cout<<"Ingrese valor de y:  ";
	cin>>GI_y;
	cout<<"//================================================"<<endl;                       cout<<"//==> Nombre de programa: Comparacion de dos números"<<endl;                             cout<<"//==> Archivo: GonzalezIsaac-Compara.cpp"<<endl;                                         cout<<"//==> Autor: Gonzalez Isaac"<<endl;      cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;                                           cout<<"//==> Fecha de ultima actualizacion: 18-05-2022"<<endl;                                  cout<<"//================================================="<<endl;
	if(GI_x==GI_y){

	cout<<"El valor de x:  "<<GI_x<<"Es igual a y:  "<<GI_y<<endl;
	}else{
	if(GI_x<GI_y){
	cout<<"El valor de y:  "<<GI_y<<"Es mayor a x:  "<<GI_x<<endl;
	}else{
	cout<<"El valor de x:  "<<GI_x<<"Es mayor a y:  "<<GI_y<<endl;
	}
	}
	return 0;
}
