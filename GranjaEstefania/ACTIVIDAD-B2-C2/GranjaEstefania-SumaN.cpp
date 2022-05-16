//==============================================//==>Nombre del Programa: La Suma de  Numeros
////==>Archivo:Suma.cpp
//==>Autor:Granja Jaramillo Estefania Lizbeth
//==>Fecha de elaboracion:23/04/2022
//==>Fecha de Actualizacion:15/05/2022
//==============================================
#include<iostream>
using namespace std;
int main()
{
	int JE_C=0,JE_b;
	float JE_S=0,JE_x;
	cout<<"Ingrese la cantidad de numeros a sumar:  ";
	cin>>JE_b;
	do{
		cout<<"Ingrese un numero:  ";
		cin>>JE_x;
		JE_C=JE_C+1;
		JE_S=JE_S+JE_x;
	}while(JE_C<JE_b);

cout<<"//===================================="<<endl;
cout<<"========//==>Nombre del Programa: La Suma de  Numeros"<<endl;
cout<<"//==>Archivo:Suma.cpp"<<endl;
cout<<"//==>Autor:Granja Jaramillo Estefania Lizbeth"<<endl;
cout<<"//==>Fecha de elaboracion: 23/04/2022"<<endl;
cout<<"//==>Fecha de Actualizacion:15/05/2022"<<endl;
cout<<"//=============================================="<<endl;
	cout<<"La suma total es:  "<<JE_S<<endl;
	return 0;
}
