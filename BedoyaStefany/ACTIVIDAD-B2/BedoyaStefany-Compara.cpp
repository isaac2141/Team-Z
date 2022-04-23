#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<"Ingrese el valor de X: ";
	cin>>x;;
	cout<<"Ingrese valor de Y: ";
	cin>>y;
	if(x==y){
	cout<<"El valor de X: "<<x<<" es igual a Y: "<<y<<endl;
	}else{
	if(x<y){
	cout<<"El valor de X:"<<x<<"Es menor a Y: "<<y<<endl;
	}else{
	cout<<"El valor de Y:"<<y<<"Es menor a X: "<<x<<endl;
	}
	}
	return 0;
}

