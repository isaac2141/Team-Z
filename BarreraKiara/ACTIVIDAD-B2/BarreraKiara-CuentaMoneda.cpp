#include <iostream>
using namespace std;
int main ()
{
	int n, i, sum=0, sum1=0, sum25=0, sum50=0;
	cout<<"Escriba la cantidad de monedas que desea ingresar: "<<endl;
	cin>>n;
	int num [n];
	cout<<"Escriba el valor de la moneda: "<<endl;
	for (int i=0; i<n; i++){
		cin>>num [i];
		sum=sum+num [i];
		if (num [i]==10){
			sum1=sum1+(num[i]==10);	
	}
		else if (num [i]==25){
			sum25=sum25+(num[i]==25);
	}
		else {
			sum50=sum50+(num[i]==50);
	}
}
	cout<<"La cantidad de monedas de 50 ctvsque ingreso fueron: "<<sum50<<endl;
	cout<<"La cantidad de monedas de 25 ctvs que ingreso fueron: "<<sum25<<endl;
	cout<<"La cantidad de monedad de 10 ctvs que ingreso fueron: "<<sum1<<endl;
	cout<<"El total de dinero es: "<<sum<<endl;
return 0;
}
