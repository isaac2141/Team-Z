//=======Nombre de programa: Suma de dos numeros//====Archivo:GonzalezIsaac-SumaN.cpp
//====Autor: Gonzalez Isaac
//====Fecha de elaboracion: 02-05-2022
//====Fecha de ultima actualizacion: 12-05-2022
#include<iostream>
using namespace std;
int main()
{
	int GI_C=0,GI_b;
	float GI_S=0,GI_x;
	cout<<"Ingrese la cantidad de numeros a sumar  ";
	cin>>GI_b;
	do{
		cout<<"Ingrese un numero:  ";
		cin>>GI_x;
		GI_C=GI_C+1;
		GI_S=GI_S+GI_x;
	}while(GI_C<GI_b);
	
cout<<"//=======Nombre de programa: Suma de dos numeros"<<endl;
cout<<"//====Archivo:GonzalezIsaac-SumaN.cpp"<<endl;
cout<<"//====Autor: Gonzalez Isaac"<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//====Fecha de ultima actualizacion: 12-05-2022"<<endl;


	cout<<"La suma total es:  "<<GI_S<<endl;
	return 0;
}
