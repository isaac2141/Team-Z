// ===> Funciones implementadas por:
// Barrera Garcia Kiara Domenica.
//
//
//
//
//

int BK_sumaN()
{
	int kg_k=0, kg_v;
	float kg_p, kg_j=0;
	cout<<"Escriba la cantidad de numeros que quiere sumar: "<<endl;
	cin>>kg_v;
	do {
		cout<<"Digite el numero: "<<endl;
		cin>>kg_p;
		kg_k=kg_k+1; 
		kg_j=kg_j+kg_p;
	}while (kg_k<kg_v);
	cout<<"Usted ingreso "<<kg_v<<" numeros"<<endl;
	cout<<"Suma total: "<<kg_j<<endl;
	
	cout<<"//================================================"<<endl;
    cout<<"//==> Nombre del programa: SumaN"<< endl;
    cout<<"//==> Archivo : BarreraKiara-SumaN.cpp"<<endl;
    cout<<"//==>Autor: Barrera Garcia Kiara Domenica"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
    cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
    cout<<"//=================================================";
	return 0;
}




int BK_compara()
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
		cout<<"El resutado es "<<kg_num1<<" es mayor que "<<kg_num2<<endl;
	}
	else{
		cout<<"El resutado es "<<kg_num2<<" es mayor que "<<kg_num1<<endl;
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



int BK_PuntoVenta()
{
	int kg_j=0, kg_p;
	float kg_b=0, kg_k, kg_c, kg_t, kg_t1, kg_y, kg_l;
	cout<<"Escriba la cantidad de productos que va a ingresar"<<endl;
	cin>>kg_p;
	do{
		cout<<"Ingrese el monto de la compra: "<<kg_j+1<<endl;
		cin>>kg_k;
		kg_j=kg_j+1;
		kg_b=kg_b+kg_k;
	}while (kg_j<kg_p);
	cout<<"Escriba el descuento deseado: "<<endl;
	cin>>kg_c;
	cout<<"Valor bruto: "<<kg_b<<endl;
	kg_t=(kg_b*kg_c)/100;
	cout<<"Descuento: "<<kg_t<<endl;
	kg_t1=kg_b-kg_t;
    kg_y=kg_t1*0.12;
	cout<<"IVA: "<<kg_y<<endl;
	kg_l=(kg_b-kg_t)+kg_y;
	cout<<"Valor TOTAL: "<<kg_l<<endl;

	cout<<"//================================================"<<endl;
    cout<<"//==> Nombre del programa: Punto Venta"<< endl;
    cout<<"//==> Archivo : BarreraKiara-PuntoVenta.cpp"<<endl;
    cout<<"//==>Autor: Barrera Garcia Kiara Domenica"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
    cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
    cout<<"//=================================================";
return 0;
}




int BK_laedad()
{
	int kg_kk, kg_jj, kg_yy, kg_cc1, kg_pp1, kg_yy1, kg_da, kg_la, kg_ca;
	cout<<"Escriba la fecha actual (dia/mes/ano): "<<endl;
	cin>>kg_kk>>kg_jj>>kg_yy;
	cout<<"Escriba su fecha de nacimiento (dia/mes/ano): "<<endl;
	cin>>kg_cc1>>kg_pp1>>kg_yy1;
	if (kg_kk<kg_cc1){
		kg_kk=kg_kk+30;
		kg_jj=kg_jj-1;
		kg_da=kg_kk-kg_cc1;
	}
		else {
			kg_da=kg_kk-kg_cc1;
		}
	if (kg_jj<kg_pp1){
		kg_jj=kg_jj+12;
		kg_yy=kg_yy-1;
		kg_la=kg_jj-kg_pp1;
	}
		else {
			kg_la=kg_jj-kg_pp1;
		}
	kg_ca=kg_yy-kg_yy1;
	cout<<"Tienes "<<kg_ca<<" anos, "<<kg_la<<" meses "<<"y "<<kg_da<<" dias."<<endl;

	cout<<"//================================================"<<endl;
    cout<<"//==> Nombre del programa: La Edad"<< endl;
    cout<<"//==> Archivo : BarreraKiara-laedad.cpp"<<endl;
    cout<<"//==>Autor: Barrera Garcia Kiara Domenica"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
    cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
    cout<<"//=================================================";
	return 0;
}
int BK_CuentaMoneda()
{
	int kg_n, kg_i, kg_sum=0, kg_sum1=0, kg_sum25=0, kg_sum50=0;
	cout<<"Escriba la cantidad de monedas que desea ingresar: "<<endl;
	cin>>kg_n;
	int num [kg_n];
	cout<<"Escriba el valor de la moneda: "<<endl;
	for (int kg_i=0; kg_i<kg_n; kg_i++){
		cin>>num [kg_i];
		kg_sum=kg_sum+num [kg_i];
		if (num [kg_i]==10){
			kg_sum1=kg_sum1+(num[kg_i]==10);
	}
		else if (num [kg_i]==25){
			kg_sum25=kg_sum25+(num[kg_i]==25);
	}
		else {
			kg_sum50=kg_sum50+(num[kg_i]==50);
	}
}
	cout<<"La cantidad de monedas de 50 ctvs que ingreso fueron: "<<kg_sum50<<endl;
	cout<<"La cantidad de monedas de 25 ctvs que ingreso fueron: "<<kg_sum25<<endl;
	cout<<"La cantidad de monedad de 10 ctvs que ingreso fueron: "<<kg_sum1<<endl;
	cout<<"El total de dinero es: "<<kg_sum<<endl;

	cout<<"//================================================"<<endl;
    cout<<"//==> Nombre del programa: Cuenta moneda"<< endl;
    cout<<"//==> Archivo : BarreraKiara-CuentaMoneda.cpp"<<endl;
    cout<<"//==>Autor: Barrera Garcia Kiara Domenica"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
    cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
    cout<<"//=================================================";
return 0;
}





int BK_menu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE BARRERA KIARA**************"<<endl<<endl;
			cout<<"1.- SUMA DE NUMEROS \n";
			cout<<"2.- COMPARACIÓN DE DOS NÚMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n";
			cout<<"4.- CALCULAR LA EDAD. \n";
			cout<<"5.- CONTADOR DE MONEDAS.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					 BK_sumaN();
					break;
				case 2:
					system("clear");
					BK_compara();
					break;
				case 3:
					system("clear");
					BK_PuntoVenta();
					break;
				case 4:
					system("clear");
					BK_laedad();
					break;
				case 5:
					system("clear");
					BK_CuentaMoneda();
					break;

				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   cout<<flag;
	}while(op!=0);


	return(0);

}

