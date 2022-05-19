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
	float IS_x,IS_y;
	cout<<"Ingrese valor de x:  ";
	cin>>IS_x;
	cout<<"Ingrese valor de y:  ";
	cin>>IS_y;
	cout<<"//================================================"<<endl;                       cout<<"//==> Nombre de programa: Comparacion de dos números"<<endl;                             cout<<"//==> Archivo: GonzalezIsaac-Compara.cpp"<<endl;                                         cout<<"//==> Autor: Gonzalez Isaac"<<endl;      cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;                                           cout<<"//==> Fecha de ultima actualizacion: 18-05-2022"<<endl;                                  cout<<"//================================================="<<endl;
	if(IS_x==IS_y){

	cout<<"El valor de x:  "<<IS_x<<"Es igual a y:  "<<IS_y<<endl;
	}else{
	if(IS_x<IS_y){
	cout<<"El valor de y:  "<<IS_y<<"Es mayor a x:  "<<IS_x<<endl;
	}else{
	cout<<"El valor de x:  "<<IS_x<<"Es mayor a y:  "<<IS_y<<endl;
	}
	}
	return 0;
}
