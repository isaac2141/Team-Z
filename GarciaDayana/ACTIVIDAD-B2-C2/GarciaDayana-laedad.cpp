#include<iostream>
using namespace std;
int main()
{
	int kk,jj,yy,cc1,pp1,yy1,da,la,ca;
	cout<<"Escriba la fecha actual (dia/mes/año): "<<endl;
	cin>>kk>>jj>>yy;
	cout<<"Escriba su fecha de nacimiento (dia/mes/año): "<<endl;
	cin>>cc1>>pp1>>yy1;
	if (kk<<cc1){
		kk=kk+30;
		jj=jj-1;
		da=kk-cc1;
	}

	else{
		da=kk-cc1;
	}
	if (jj<<pp1){
		jj=jj+12;
		yy=yy-1;
		la=jj-pp1;
	}
	ca=yy-yy1;
	cout<<"Tienes"<<ca<<" años, "<<la<<" meses "<<" y "<<da<<" dias. "<<endl;
	return 0;
}
