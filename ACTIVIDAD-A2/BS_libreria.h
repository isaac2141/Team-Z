// ===> Funciones implementadas por:
// Bedoya Napa Stefany Mishelle.
//
//
//
//
//

int BS_Compara()
{
cout<<"//========================================"<<endl;
cout<<"// Nombre del Programa:Comparación de 2 números"<<endl;
cout<<"// Archivo:BedoyaStefany-Compara.cpp"<<endl;
cout<<"// Autor: Bedoya Napa Stefany Mishelle"<<endl;
cout<<"// Fecha de elaboración:30/04/2022"<<endl;
cout<<"// Fecha de Actualización:18/05/2022"<<endl;
cout<<"//========================================="<<endl;
	float SN_x,SN_y;
	cout<<"Ingrese el valor de X: ";
	cin>>SN_x;
	cout<<"Ingrese valor de Y: ";
	cin>>SN_y;
	if(SN_x==SN_y){
	cout<<"El valor de X: "<<SN_x<<" es igual a Y: "<<SN_y<<endl;
	}else{
	if(SN_x<SN_y){
	cout<<"El valor de X:"<<SN_x<<"Es menor a Y: "<<SN_y<<endl;
	}else{
	cout<<"El valor de Y:"<<SN_y<<"Es menor a X: "<<SN_x<<endl;
	}
	}
	return 0;
}



int BS_SumaN()
{
cout<<"//==============================================="<<endl;
cout<<"//===> Nombe del Programa:Suma de numeros"<<endl;
cout<<"//===> Archivo:BedoyaStefany-SumaN.cpp"<<endl;
cout<<"//===> Autor:Bedoya Napa Stefany Mishelle"<<endl;
cout<<"//===> Fecha de Elaboracion:30/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/05/2022"<<endl;
cout<<"//==============================================="<<endl<<endl;
	int SN_C=0,SN_b;
	float SN_S=0,SN_x;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>SN_b;
	do{
		cout<<"Ingrese un numero: ";
		cin>>SN_x;
		SN_C=SN_C+1;
		SN_S=SN_S+SN_x;
	} while (SN_C<SN_b);
	cout<<"La suma total es: "<<SN_S<<endl;
	return 0;
}


int BS_PuntoVenta()
{
cout<<"//=========================================="<<endl;
cout<<"// Nombre del Programa:Calculo de Iva y Descuento"<<endl;
cout<<"// Archivo:BedoyaStefany-PuntoVenta.cpp"<<endl;
cout<<"// Autor:BedoyaNapaStefanyMishelle"<<endl;
cout<<"// Fecha de elaboracion:30/04/2022"<<endl;
cout<<"//=========================================="<<endl;
	int SN_C=0,SN_P;
	float SN_A=0,SN_x,SN_Tb,SN_PIVA,SN_Pdsc,SN_IVA=0.12,SN_dsc=0.25,SN_VT;
	cout<<"Ingrese la cantidad de Productos Comprados: ";
	cin>>SN_P;
	do{
		cout<<"Ingrese el Precio del Producto: $ ";
		cin>>SN_x;
		SN_C=SN_C+1;
		SN_A=SN_A+SN_x;
		SN_PIVA=SN_A*SN_IVA;
		cout<<"El valor del IVA de su compra es: $ "<<SN_PIVA<<endl;
		SN_Pdsc=SN_A*SN_dsc;
		cout<<"El valor del Descuento a su compra es: $ "<<SN_Pdsc<<endl;
		SN_Tb=SN_PIVA+SN_Pdsc;
	}while(SN_C<SN_P);
	if(SN_Tb==SN_A){
		cout<<"Su compra no aplica a un Descuento: "<<SN_Tb<<endl;
		SN_IVA=SN_Tb*SN_PIVA/100;
		SN_dsc=SN_Tb*SN_Pdsc/100;
		cout<<"Su valor con Descuento es: $"<<SN_Pdsc<<endl;
		SN_Tb=SN_PIVA+SN_Pdsc;
	}else{
		SN_VT=SN_A+SN_PIVA-SN_Pdsc;
		cout<<"El valor Total de su Compra es: $"<<SN_VT<<endl;
	}
	return 0;
}



int BS_CuentaMoneda()
{
cout<<"//=========================================="<<endl;
cout<<"//===> Nombre del Programa:Conteo de monedas"<<endl;
cout<<"//===> Archivo:BedoyaStefany-CuentaMoneda.cpp"<<endl;
cout<<"//===> Autor:Bedoya Napa Stefany Mishelle"<<endl;
cout<<"//===> Fecha de realización:30/04/2022"<<endl;
cout<<"//===> Fecha de actualizacion:18/05/2022"<<endl<<endl;
cout<<"//==========================================="<<endl<<endl;
	int SN_n,SN_c=0,SN_c1=0,SN_c2=0,SN_c3=0;
	float SN_x,SN_a=0,SN_a1=0,SN_a2=0,SN_a3=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>SN_n;
	do{
		cout<<"Ingresar el valor sea moneda (0.10,0.25,0.50): ";
		cin>>SN_x;
		SN_c=SN_c+1;
		SN_a=SN_a+SN_x;
		if(SN_x==(float)0.10){
			SN_c1=SN_c1+1;
			SN_a1=SN_a1+SN_x;
		}else if(SN_x==(float)0.25){
			SN_c2=SN_c2+1;
			SN_a2=SN_a2+SN_x;
			
		}else{
			SN_c3=SN_c3+1;
			SN_a3=SN_a3+SN_x;
		}
	
	}while(SN_c<SN_n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<SN_c<<endl;
	cout<<"Cantidad total en dinero contado: $  "<<SN_a<<endl;
	cout<<"Cantidad de monedas de 0.10ctv ingresadas: "<<SN_c1<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.10: $ "<<SN_a1<<endl;
	cout<<"Cantidad de monedas de 0.25ctv ingresadas: "<<SN_c2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25: $"<<SN_a2<<endl;
	cout<<"Cantidad de monedas de 0.50ctv ingresadas: "<<SN_c3<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.50: $"<<SN_a3<<endl;
	return 0;
}



int BS_laedad ()
{
cout<<"//=============================================="<<endl;
cout<<"//===> Nombre del Programa:Calculo de la edad de una persona"<<endl;
cout<<"//===> Archivo:BedoyaStefany-laedad.cpp"<<endl;
cout<<"//===> Autor: Bedoya Napa Stefany Mishelle"<<endl;
cout<<"//===> Fecha de elaboracion:30/04/2022"<<endl;
cout<<"//===> Fecha de Actualizacion:18/04/2022"<<endl;
cout<<"//=============================================="<<endl<<endl;
	int SN_dd,SN_mm,SN_yy,SN_dd1,SN_mm1,SN_yy1,SN_da,SN_ma,SN_ya;
	cout<<"Ingrese la Fecha Actual: Dia Mes Año "<<endl;
	cin>>SN_dd>>SN_mm>>SN_yy;
	cout<<"Ingrese la Fecha de Nacimiento: Dia Mes Año "<<endl;
	cin>>SN_dd1>>SN_mm1>>SN_yy1;
	if(SN_dd<SN_dd1){
		SN_dd=SN_dd+30;
		SN_mm=SN_mm-1;
		SN_da=SN_dd-SN_dd1;
	}
	else{
		SN_da=SN_dd-SN_dd1;
	}
	if(SN_mm<SN_mm1){
		SN_mm=SN_mm+12;
		SN_yy=SN_yy-1;
		SN_ma=SN_mm-SN_mm1;
	}
	else{
		SN_ma=SN_mm-SN_mm1;
	}
	SN_ya=SN_yy-SN_yy1;
	cout<<"Usted Tiene: "<<SN_ya<<" años "<<SN_ma<<" meses "<<" y "<<SN_da<<" dias "<<endl;
	return 0;
}


int BS_menu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE BEDOYA STEFANY**************"<<endl<<endl;
			cout<<"1.- COMPARACIÒN DE DOS NÙMEROS. \n";
			cout<<"2.- SUMA DE DOS NÙMEROS.\n";
			cout<<"3.- PUNTO VENTA  \n"; 
			cout<<"4.- CONTADOR DE MONEDAS. \n";
			cout<<"5.- CALCULAR LA EDAD.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					 BS_Compara();			
					break;
				case 2:
					system("clear");
					BS_SumaN();
					break;
				case 3:
					system("clear");
					BS_PuntoVenta();
					break;
				case 4:
					system("clear");
					BS_CuentaMoneda();
					break;
				case 5:
					system("clear");
					BS_laedad();
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