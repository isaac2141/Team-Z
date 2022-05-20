//================================================
//==> Nombre del programa: Comparar 2 numeros
//==> Archivo : BarreraKiara-Compara.cpp
//==>Autor: Barrera Garcia Kiara Domenica
//==>Fecha de elaboración: 2022-04-20
//==>Fecha ultima actualización: 2022-05-12
//=================================================
#include <iostream>
using namespace std;
int main()
{
	float kg_num1,kg_num2;
	cout<<"Escriba el primer numero: "<<endl;
	cin>>kg_num1;
	cout<<"Escriba el segundo numero: "<<endl;
	cin>>kg_num2;
	if (kg_num1==kg_num2){
	cout<<"Las dos cantidades son iguales"<<endl;
	}
	else if (kg_num1>kg_num2){
		cout<<kg_num1<<" es mayor que "<<kg_num2<<endl;
	}
	else{
		cout<<kg_num2<<" es mayor "<<kg_num1<<endl;
	} 
	cout<<"//================================================"<<endl;
    cout<<"//==> Nombre del programa: Comparar 2 numeros"<< endl;
    cout<<"//==> Archivo : BarreraKiara-Compara.cpp"<<endl;
    cout<<"//==>Autor: Barrera Garcia Kiara Domenica"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
    cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
    cout<<"//=================================================";
	return 0;
}
