// Funciones implementadas por Gonzalez Isaac
//
//
//
//
//
//
//


int GI_sumaN()
{
        int IS_C=0,IS_b;
        float IS_S=0,IS_x;
        cout<<"Ingrese la cantidad de numeros a sumar  ";
        cin>>IS_b;
        do{
                cout<<"Ingrese un numero:  ";
                cin>>IS_x;
                IS_C=IS_C+1;
                IS_S=IS_S+IS_x;
        }while(IS_C<IS_b);
cout<<"//================================================"<<endl;
cout<<"//==> Nombre de programa: Suma de numeros"<<endl;
cout<<"//==> Archivo: GonzalezIsaac-SumaN.cpp"<<endl;
cout<<"//==> Autor: Gonzalez Isaac"<<endl;
cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//==> Fecha de ultima actualizacion: 12-05-2022"<<endl;
cout<<"//================================================="<<endl;

        cout<<"La suma total es:  "<<IS_S<<endl;
        return 0;

}



int GI_compara()
{
	float IS_x,IS_y;
        cout<<"Ingrese valor de x:  ";
        cin>>IS_x;
        cout<<"Ingrese valor de y:  ";
        cin>>IS_y;
        cout<<"//================================================"<<endl;                       cout<<"//==> Nombre de programa: Comparacion de dos números"<<endl;                             cout<<"//==> Archivo: GonzalezIsaac-Compara.cpp"<<endl;                                         cout<<"//==> Autor: Gonzalez Isaac"<<endl;      cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;                                           cout<<"//==> Fecha de ultima actualizacion: 18-05-2022"<<endl;                                  cout<<"//================================================="<<endl;
        if(IS_x==IS_y){

        cout<<"El valor de x:  "<<IS_x<<"Es igual a y:  "<<IS_y<<endl;
        }else{
        if(IS_x<IS_y){
        cout<<"El valor de y:  "<<IS_y<<"Es mayor a x:  "<<IS_x<<endl;
        }else{
        cout<<"El valor de x:  "<<IS_x<<"Es mayor a y:  "<<IS_y<<endl;
        }
        }
        return 0;
}


int GI_PuntoVenta()
{
	int IS_C=0,IS_P;
        float IS_A=0,IS_x,IS_Vf,IS_IVA=0.12,IS_dsc,IS_Vb,IS_Vi,IS_Vd;
        cout<<"Ingrese la cantidad de Productos Comprados:  ";
        cin>>IS_P;
        cout<<"Ingrese el % del descuento que se realizarà:  ";
        cin>>IS_dsc;
        do{
        cout<<"Ingrese el Precio del Producto:  $  ";
        cin>>IS_x;
        IS_C=IS_C+1;
        IS_A=IS_A+IS_x;
        }while(IS_C<IS_P);
        cout<<"//================================================"<<endl;
cout<<"//==> Nombre de programa: Precio de varios productos"<<endl;
cout<<"//==> Archivo: GonzalezIsaac-PuntoVenta.cpp"<<endl;
cout<<"//==> Autor: Gonzalez Isaac"<<endl;
cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//==> Fecha de ultima actualizacion: 18-05-2022"<<endl;
cout<<"//================================================="<<endl;
        IS_Vb=IS_A;
        IS_Vd=IS_A*IS_dsc/100;
        IS_Vi=IS_A*IS_IVA;
        IS_Vf=IS_A+IS_Vi-IS_Vd;

        cout<<"El valor bruto de su compra es de:  $ "<<IS_Vb<<endl;
        cout<<"El valor del IVA de su compra es de:  $ "<<IS_Vi<<endl;
        cout<<"El valor del Descuento de su compra es de:  $ "<<IS_Vd<<endl;
        cout<<"El valor final de su compra a pagar es de:  $"<<IS_Vf<<endl;
        return 0;
}



int GI_laedad()
{
int IS_dd,IS_mm,IS_yy,IS_dd1,IS_mm1,IS_yy1,IS_da,IS_ma,IS_ya;
        cout<<"Ingrese la Fecha Actual: Dia Mes Año "<<endl;
        cin>>IS_dd>>IS_mm>>IS_yy;
        cout<<"Ingrese la Fecha de Nacimiento: Dia Mes Año "<<endl;
        cin>>IS_dd1>>IS_mm1>>IS_yy1;
        if(IS_dd<IS_dd1){

                IS_dd=IS_dd+30;
                IS_mm=IS_mm-1;
                IS_da=IS_dd-IS_dd1;
        }
        else{
                IS_da=IS_dd-IS_dd1;
        }
        if(IS_mm<IS_mm1){
                IS_mm=IS_mm+12;
                IS_yy=IS_yy-1;
                IS_ma=IS_mm-IS_mm1;
        }
        else{
                IS_ma=IS_mm-IS_mm1;
        }
        cout<<"//================================================"<<endl;                       cout<<"//==> Nombre de programa: Calcular la edad"<<endl;                                     cout<<"//==> Archivo: GonzalezIsaac-laedad.cpp"<<endl;                                          cout<<"//==> Autor: Gonzalez Isaac"<<endl;      cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;                                           cout<<"//==> Fecha de ultima actualizacion: 18-05-2022"<<endl;                                  cout<<"//================================================="<<endl;
        IS_ya=IS_yy-IS_yy1;
        cout<<"Usted Tiene: "<<IS_ya<<" años "<<IS_ma<<" meses "<<" y "<<IS_da<<" dias "<<endl;
        return 0;
}


int GI_CuentaMoneda()
{
	 int IS_n,IS_c=0,IS_c1=0,IS_c2=0,IS_c3=0;
        float IS_x,IS_a=0,IS_a1=0,IS_a2=0,IS_a3=0;
        cout<<"Cantidad de monedas a ingresar: ";
        cin>>IS_n;
        do{
                cout<<"Ingrese el valor de la moneda (0.10,0.25,0.50): ";
           cin>>IS_x;
           IS_c=IS_c+1;
           IS_a=IS_a+IS_x;
           if(IS_x==(float)0.10){
           IS_c1=IS_c1+1;
           IS_a1=IS_a1+IS_x;
           }else if(IS_x==(float)0.25){
           IS_c2=IS_c2+1;
           IS_a2=IS_a2+IS_x;
           }else {
           IS_c3=IS_c3+1;
           IS_a3=IS_a3+IS_x;}
        }while(IS_c<IS_n);
        cout<<"//================================================"<<endl;
cout<<"//==> Nombre de programa: Contador de monedas"<<endl;
cout<<"//==> Archivo: GonzalezIsaac-CuentaMoneda.cpp"<<endl;
cout<<"//==> Autor: Gonzalez Isaac"<<endl;
cout<<"//==> Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//==> Fecha de ultima actualizacion: 18-05-2022"<<endl;
cout<<"//================================================="<<endl;
        cout<<"El resultado fue: "<<endl;
        cout<<"Cantidad de monedas ingresadas: "<<IS_c<<endl;
        cout<<"Cantidad total en dinero contado: $ "<<IS_a<<endl;
        cout<<"Cantidad de monedas de 0.10ctv ingresadas: "<<IS_c1<<endl;
        cout<<"Cantidad total en dinero de monedas de 0.10: $"<<IS_a1<<endl;
        cout<<"Cantidad de monedas de 0.25ctv ingresadas: "<<IS_c2<<endl;
        cout<<"Cantidad total en dinero de monedas de 0.25: $"<<IS_a2<<endl;
        cout<<"Cantidad de monedas de 0.50ctv ingresadas: "<<IS_c3<<endl;
        cout<<"Cantidad total en dinero de monedas de 0.50: $"<<IS_a3<<endl;
        return 0;
}

int GI_menu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE GONZALEZ ISAAC**************"<<endl<<endl;
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
					 GI_sumaN();			
					break;
				case 2:
					system("clear");
					GI_compara();
					break;
				case 3:
					system("clear");
					GI_PuntoVenta();
					break;
				case 4:
					system("clear");
					GI_laedad();
					break;
				case 5:
					system("clear");
					GI_CuentaMoneda();
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
