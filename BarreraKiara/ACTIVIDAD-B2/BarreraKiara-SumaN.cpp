#include <iostream>
using namespace std;

int main ()
{
	int k=0, v;
	float p, j=0;
	cout<<"Escriba la cantidad de numeros que quiere sumar: "<<endl;
	cin>>v;
	do {
		cout<<"Digite el numero: "<<endl;
		cin>>p;
		k=k+1; 
		j=j+p;
	}while (k<v);
	cout<<"Usted ingreso "<<v<<"numeros"<<endl;
	cout<<"Suma total: "<<j<<endl;
	return 0;
}
