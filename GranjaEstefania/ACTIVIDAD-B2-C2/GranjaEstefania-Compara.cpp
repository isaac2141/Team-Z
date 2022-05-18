//=============================================
//===> Nombre del Programa:Comparación de 2 numeros
//===> Archivo:Compara.cpp
//===>Autor: Granja Jaramillo Estefania Lizbeth
//===> Fecha de Creacion: 23/04/2022
//===> Fecha de Actualización: 17/05/2022
//==============================================
#include<iostream>
using namespace std;
int main()
{

cout<<"//============================================="<<endl;
cout<<"//===> Nombre del Programa:Comparación de 2 numeros"<<endl;
cout<<"//===> Archivo:Compara.cpp"<<endl;
cout<<"//===>Autor: Granja Jaramillo Estefania Lizbeth"<<endl;
cout<<"//===> Fecha de Creacion: 23/04/2022"<<endl;
cout<<"//===> Fecha de Actualización: 17/05/2022"<<endl<<endl;
cout<<"//=============================================="<<endl<<endl;

	float JE_x,JE_y;
	cout<<"Ingrese valor de X:  ";
	cin>>JE_x;
	cout<<"Ingrese valor de Y:  ";
	cin>>JE_y;
	if(JE_x==JE_y){
	cout<<"El valor de X:  "<<JE_x<<"Es igual aY:  "<<JE_y<<endl;
	}else{
	if(JE_x<JE_y){
	cout<<"El valor de X:  "<<JE_x<<" Es menor a Y:  "<<JE_y<<endl;
	}else{
	cout<<"El valor de Y:  "<<JE_y<<" Es menor a X:  "<<JE_x<<endl;
	}
	}
	return 0;
}
