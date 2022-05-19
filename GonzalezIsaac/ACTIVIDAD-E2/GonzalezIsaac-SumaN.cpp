//======================================================
//==> Nombre del programa: Suma de numeros
//==> Archivo: GonzalezIsaac-SumaN.cpp
//==> Autor: Gonzalez Isaac
//==> Fecha de elaboracion: 02-05-2022
//==> Fecha de ultima actualizacion: 12-05-2022
//======================================================
#include<iostream>
using namespace std;
int main()
{
	int IS_C=0,IS_b;
	float IS_S=0,IS_x;
	cout<<"Ingrese la cantidad de numeros a sumar  ";
	cin>>IS_b;
	do{
		cout<<"Ingrese un numero:  ";
		cin>>IS_x;
		IS_C=IS_C+1;
		IS_S=IS_S+IS_x;
	}while(IS_C<IS_b);
cout<<"//================================================"<<endl;	
cout<<"//==> Nombre de programa: Suma de numeros"<<endl;
cout<<"//==> Archivo: GonzalezIsaac-SumaN.cpp"<<endl;
cout<<"//==> Autor: Gonzalez Isaac"<<endl;
cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//==> Fecha de ultima actualizacion: 12-05-2022"<<endl;
cout<<"//================================================="<<endl;

	cout<<"La suma total es:  "<<IS_S<<endl;
	return 0;
}
