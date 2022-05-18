#include<iostream>
using namespace std;
int main()
{
	int dctl,mctl,actl,dnac,mnac,anac,da,ma,ya;
	cout<<"Ingrese la Fecha Actual: Dia Mes Año "<<endl;
	cin>>dctl>>mctl>>actl;
	cout<<"Ingrese la Fecha de Nacimiento: Dia Mes Año "<<endl;
	cin>>dnac>>mnac>>anac;
	if(dctl<dnac){
		dctl=dctl+30;
		mctl=mctl-1;
		da=dctl-dnac;
	}
	else{
		da=dctl-dnac;
	}
	if(mctl<mnac){
		mctl=mctl+12;
		actl=actl-1;
		ma=mctl-mnac;
	}
	else{
		ma=mctl-mnac;
	}
	ya=actl-anac;
	cout<<"Usted Tiene: "<<ya<<" años "<<ma<<" meses "<<" y "<<da<<" dias "<<endl;
	return 0;
}

	
