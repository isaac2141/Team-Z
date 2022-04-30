#include <iostream>
using namespace std;
int main()
{
	float num1,num2;
	cout<<"Escriba el primer numero: "<<endl;
	cin>>num1;
	cout<<"Escriba el segundo numero: "<<endl;
	cin>>num2;
	if (num1==num2){
	cout<<"Las dos cantidades son iguales"<<endl;
	}
	else if (num1>num2){
		cout<<num1<<" es mayor que "<<num2<<endl;
	}
	else{
		cout<<num2<<" es mayor "<<num1<<endl;
	} 
	return 0;
}
