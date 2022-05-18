#include<iostream>
using namespace std;
int main()
{
	int C=0,b;
	float S=0,x;
	cout<<"Ingrese la cantidad de numeros a sumar:  ";
	cin>>b;
	do{
		cout<<"Ingrese un numero:  ";
		cin>>x;
		C=C+1;
		S=S+x;
	}while(C<b);
	cout<<"La suma total es:  "<<S<<endl;
	return 0;
}
