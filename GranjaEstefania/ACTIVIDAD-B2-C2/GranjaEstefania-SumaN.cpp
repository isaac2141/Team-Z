//==============================================//===>Nombre del Programa:Suma de Varios Numeros//===>Archivo: SumaN.cpp
//===>Autor: Granja Jaramillo Estefania Lizbeth
//===>Fecha de creacion:23/04/2022
//===>Fecha de Actualizacion:17/05/2022
//==============================================
#include<iostream>
using namespace std;
int main()
{

cout<<"//============================================="<<endl;
cout<<"//===>Nombre del Programa:Suma de Varios Numeros"<<endl;
cout<<"//===>Archivo: SumaN.cpp"<<endl;
cout<<"//===>Autor: Granja Jaramillo Estefania Lizbeth"<<endl;
cout<<"//===>Fecha de creacion:23/04/2022"<<endl;
cout<<"//===>Fecha de Actualizacion:17/05/2022"<<endl;
cout<<"//=============================================="<<endl<<endl;

	int JE_C=0,JE_b;
	float JE_S=0,JE_x;
	cout<<"Ingrese la cantidad de números a sumar:  ";
	cin>>JE_b;
	do{
		cout<<"Ingrese un número:  ";
		cin>>JE_x;
		JE_C=JE_C+1;
		JE_S=JE_S+JE_x;
	}while(JE_C<JE_b);
	cout<<"La suma total es:  "<<JE_S<<endl;
	return 0;
}
