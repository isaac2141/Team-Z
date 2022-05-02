#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<"Ingrese valor de x:  ";
	cin>>x;
	cout<<"Ingrese valor de y:  ";
	cin>>y;
	if(x==y){
	cout<<"El valor de x:  "<<x<<"Es igual a y:  "<<y<<endl;
	}else{
	if(x<y){
	cout<<"El valor de y:  "<<y<<"Es mayor a x:  "<<x<<endl;
	}else{
	cout<<"El valor de x:  "<<x<<"Es mayor a y:  "<<y<<endl;
	}
	}
	return 0;
}
