// ===> Funciones implementadas por:
// GARCIA SANCHEZ DAYANA MARIBY.
//
//
//
//
//

int DG_laedad()
{
cout<<"//=========================================="<<endl;
cout<<"//===> Nombre del programa:la edad"<<endl;
cout<<"//===> Archivo:GarciaDayana-laedad.cpp"<<endl;
cout<<"//===> Autor:Garcia Sanchez Dayana Mariby"<<endl;
cout<<"//===> Fecha de creacion:29/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/05/2022"<<endl;
cout<<"//=========================================="<<endl<<endl;

	int Ds_kk,Ds_jj,Ds_yy,Ds_cc1,Ds_pp1,Ds_yy1,Ds_da,Ds_la,Ds_ca;
	cout<<"Escriba la fecha actual (dia/mes/año): "<<endl;
	cin>>Ds_kk>>Ds_jj>>Ds_yy;
	cout<<"Escriba su fecha de nacimiento (dia/mes/año): "<<endl;
	cin>>Ds_cc1>>Ds_pp1>>Ds_yy1;
	if (Ds_kk<<Ds_cc1){
		Ds_kk=Ds_kk+30;
		Ds_jj=Ds_jj-1;
		Ds_da=Ds_kk-Ds_cc1;
	}

	else{
		Ds_da=Ds_kk-Ds_cc1;
	}
	if (Ds_jj<<Ds_pp1){
		Ds_jj=Ds_jj+12;
		Ds_yy=Ds_yy-1;
		Ds_la=Ds_jj-Ds_pp1;
	}
	Ds_ca=Ds_yy-Ds_yy1;
	cout<<"Tienes"<<Ds_ca<<" años, "<<Ds_la<<" meses "<<" y "<<Ds_da<<" dias. "<<endl;
	return 0;
}


int DG_Suman ()
{
cout<<"//=========================================="<<endl;
cout<<"//===> Nombre del programa:Suman de dos numeros"<<endl;
cout<<"//===> Archivo:GarciaDayana-Suman.cpp"<<endl;
cout<<"//===> Autor:Garcia Sanchez Dayana Mariby"<<endl;
cout<<"//===> Fecha de creacion:29/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/05/2022"<<endl;
cout<<"//=========================================="<<endl<<endl;
	int Ds_c=0,Ds_a;
	float Ds_s=0,Ds_y;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>Ds_a;
	do{
		cout<<"Ingrese un numero: ";
		cin>>Ds_y;
		Ds_c=Ds_c+1;
		Ds_s=Ds_s+Ds_y;
	}while(Ds_c<Ds_a);
	cout<<"La suma total es: "<<Ds_s<<endl;
	return 0;
}


int DG_PuntoVenta()
{
cout<<"//=========================================="<<endl;
cout<<"//===> Nombre del programa:PuntoVenta"<<endl;
cout<<"//===> Archivo:GarciaDayana-PuntoVenta.cpp"<<endl;
cout<<"//===> Autor:Garcia Sanchez Dayana Mariby"<<endl;
cout<<"//===> Fecha de creacion:29/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/05/2022"<<endl;
cout<<"//========================================="<<endl<<endl;
	int Ds_C=0,Ds_P;
	float Ds_A=0,Ds_x,Ds_Tb,Ds_PIVA,Ds_Pdsc,Ds_IVA=0.12,Ds_dsc=0.25,Ds_VT;
	cout<<"Ingrese la cantidad de Productos Comprados: ";
	cin>>Ds_P;
	do{
	cout<<"Ingrese el precio del Producto: $ ";
	cin>>Ds_x;
	Ds_C=Ds_C+1;
	Ds_A=Ds_A+Ds_x;
	Ds_PIVA=Ds_A*Ds_IVA;
	cout<<"El valor del IVA de su compra es: $ "<<Ds_PIVA<<endl;
	Ds_Pdsc=Ds_A*Ds_dsc;
	cout<<"El valor del Descuento a su compra es: $ ";
	Ds_Tb=Ds_PIVA+Ds_Pdsc;
	}while(Ds_C<Ds_P);
	if(Ds_Tb==Ds_A){
	cout<<"Su compra no aplica a un Descuento "<<Ds_Tb<<endl;
	Ds_IVA=Ds_Tb*Ds_PIVA/100;
	Ds_dsc=Ds_Tb*Ds_Pdsc/100;
	cout<<"Su valor con Descuento es: $ "<<Ds_Pdsc<<endl;
	Ds_Tb=Ds_PIVA+Ds_Pdsc;
	}else{
		Ds_VT=Ds_A+Ds_PIVA-Ds_Pdsc;
		cout<<"El valor total de su compra es: $ "<<Ds_VT<<endl;
	}
	return 0;
}


int DG_CuentaMoneda()
{
cout<<"//=========================================="<<endl;
cout<<"//===> Nombre del Programa:CuentaMoneda"<<endl;
cout<<"//===> Archivo:GarciaDayana-CuentaMoneda.cpp"<<endl;
cout<<"//===> Autor:Garcia Sanchez Dayana Mariby"<<endl;
cout<<"//===> Fecha de creacion:29/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/05/2022"<<endl;
cout<<"//=========================================="<<endl<<endl;
	int Ds_n,Ds_c=0,Ds_c1=0,Ds_c2=0;
	float Ds_x,Ds_a=0,Ds_a1=0,Ds_a2=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>Ds_n;
	do{
		 cout<<"Ingrese el valor de la moneda (0.10,0.25): ";
		 cin>>Ds_x;
		 Ds_c=Ds_c+1;
		 Ds_a=Ds_a+Ds_x;
		 if(Ds_x==(float)0.10){
		Ds_c1=Ds_c1+1;
		Ds_a1=Ds_a1+Ds_x;
		 }else{
		Ds_c2=Ds_c2+1;
		Ds_a2=Ds_a2+Ds_x;
		 }
	}while(Ds_c<Ds_n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<Ds_c<<endl;
	cout<<"Cantidad total en dinero contado: "<<Ds_a<<endl;
	cout<<"Cantidad de monedas de 0.10 ctv ingresadas: "<<Ds_c1<<endl;
	cout<<"Cantidad total en dinero en monedas 0.10: "<<Ds_a1<<endl;
	cout<<"Cantidad de monedas de 0.25ctv ingresadas: "<<Ds_c2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25: "<<Ds_a2<<endl;
	return 0;
}


int DG_Compara()
{
cout<<"//========================================="<<endl;
cout<<"//===> Nombre del programa:Comparacion de dos numeros"<<endl;
cout<<"//===> Archivo:GarciaDayana-Compara.cpp"<<endl;
cout<<"//===> Autor:Garcia Sanchez Dayana Mariby"<<endl;
cout<<"//===> Fecha de Creacion:29/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/05/2022"<<endl;
cout<<"//=================================================="<<endl<<endl;
        float Ds_x,Ds_y;
	cout<<"Ingrese valor de X: ";
	cin>>Ds_x;
	cout<<"Ingrese valor de Y: ";
	cin>>Ds_y;
	if(Ds_x==Ds_y){
	cout<<"El valor de X: "<<Ds_x<<"es igual a Y: "<<Ds_y<<endl;
	}else{
	if(Ds_x<Ds_y){
	cout<<"El valor de X: "<<Ds_x<<"es menor a Y: "<<Ds_y<<endl;
	}else{
	cout<<"El valor de Y: "<<Ds_y<<"es menor a X: "<<Ds_x<<endl;
	}
	}
	return 0;
}


int DG_menu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE BEDOYA STEFANY**************"<<endl<<endl;
			cout<<"1.- CALCULAR LA EDAD. \n";
			cout<<"2.- SUMA DE NUMEROS.\n";
			cout<<"3.- PUNTO VENTA  \n"; 
			cout<<"4.- CONTADOR DE MONEDAS. \n";
			cout<<"5.- COMPARACION DE NUMEROS .\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					 DG_laedad();			
					break;
				case 2:
					system("clear");
					DG_Suman();
					break;
				case 3:
					system("clear");
					DG_PuntoVenta();
					break;
				case 4:
					system("clear");
					DG_CuentaMoneda();
					break;
				case 5:
					system("clear");
					DG_Compara();
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