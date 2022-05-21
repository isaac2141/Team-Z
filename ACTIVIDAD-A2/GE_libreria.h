//++++++++++++Funciones Granja Jaramillo Estefania lizbeth
//
//
//
//
//
//

 int GE_SumaN()
{                                                                                               cout<<"//============================================="<<endl;                                  cout<<"//===>Nombre del Programa:Suma de Varios Numeros"<<endl;                                 cout<<"//===>Archivo: SumaN.cpp"<<endl;         cout<<"//===>Autor: Granja Jaramillo Estefania Lizbeth"<<endl;                                  cout<<"//===>Fecha de creacion:23/04/2022"<<endl;                                               cout<<"//===>Fecha de Actualizacion:17/05/2022"<<endl;
cout<<"//=============================================="<<endl<<endl; 

        int JE_C=0,JE_b;
        float JE_S=0,JE_x;
        cout<<"Ingrese la cantidad de números a sumar:  ";
        cin>>JE_b;
        do{
                cout<<"Ingrese un número:  ";
                cin>>JE_x;
                JE_C=JE_C+1;
                JE_S=JE_S+JE_x;
        }while(JE_C<JE_b);
        cout<<"La suma total es:  "<<JE_S<<endl;
        return 0;
}






int GE_Compara()
{
cout<<"//============================================="<<endl;
cout<<"//===> Nombre del Programa:Comparación de 2 numeros"<<endl;                              cout<<"//===> Archivo:Compara.cpp"<<endl;       cout<<"//===>Autor: Granja Jaramillo Estefania Lizbeth"<<endl;
cout<<"//===> Fecha de Creacion: 23/04/2022"<<endl;
cout<<"//===> Fecha de Actualización: 17/05/2022"<<endl<<endl;
cout<<"//======================================"<<endl;                                                 float JE_x,JE_y;
        cout<<"Ingrese valor de X:  ";                  cin>>JE_x;                                      cout<<"Ingrese valor de Y:  ";                  cin>>JE_y;                                      if(JE_x==JE_y){
        cout<<"El valor de X:  "<<JE_x<<"Es igual aY:  "<<JE_y<<endl;
        }else{
        if(JE_x<JE_y){
        cout<<"El valor de X:  "<<JE_x<<" Es menor a Y: "<<JE_y<<endl;
        }else{
        cout<<"El valor de Y:  "<<JE_y<<" Es menor a X:  "<<JE_x<<endl;
        }
        }
        return 0;
}





int GE_PuntoVenta()
{

cout<<"//==================================="<<endl;
cout<<"//===>Nombre del Programa: Punto y venta de varios articulos"<<endl;                     cout<<"//===>Archivo:PuntoVenta.cpp"<<endl;
cout<<"//===>Autor: Granja Jaramillo Estefania Lizbeth"<<endl;                                  cout<<"//===>Fecha de Creacion:23/04/2022"<<endl;
cout<<"//===>Fecha de Actualizacion:19/05/2022"<<endl;
cout<<"//============================================="<<endl<<endl;                                    int JE_C=0,JE_P;                                float JE_A=0,JE_x,JE_Tb,JE_PIVA,JE_Pdsc,JE_IVA=0.12,JE_dsc=0.25,JE_VT;
        cout<<"Ingrese la cantidad de Productos Comprados:  ";
        cin>>JE_P;
        do{
        cout<<"Ingrese el Precio del Producto:  $  ";
        cin>>JE_x;
        JE_C=JE_C+1;
        JE_A=JE_A+JE_x;
        JE_PIVA=JE_A*JE_IVA;
        cout<<"El valor del IVA de su compra es:  $ "<<JE_PIVA<<endl;
        JE_Pdsc=JE_A*JE_dsc;
        cout<<"El valor del Descuento a su compra es:  $ "<<JE_Pdsc<<endl;
        JE_Tb=JE_PIVA+JE_Pdsc;                         }while(JE_C<JE_P);                               if(JE_Tb==JE_A){                                cout<<"Su compra no aplica a un Descuento "<<JE_Tb<<endl;                                      JE_IVA=JE_Tb*JE_PIVA/100;
        JE_dsc=JE_Tb*JE_Pdsc/100;
        cout<<"Su valor con Descuento es:  $  "<<JE_Pdsc<<endl;
        JE_Tb=JE_PIVA+JE_Pdsc;
        }else{
        JE_VT=JE_A+JE_PIVA-JE_Pdsc;
        cout<<"El valor Total de su Compra es:  $"<<JE_VT<<endl;                                        }                                               return 0;
}



int GE_laedad()
{
cout<<"//===>Nombre del Programa: Calcular La edad de una Persona"<<endl;                       cout<<"//===>Archivo:Laedad.cpp"<<endl;         cout<<"//===>Autor: Granja Jaramillo Estefania Lizbeth"<<endl;                                  cout<<"//===>Fecha de creacion:23/04/2022"<<endl; 
cout<<"//===>Fecha de Actualizacion:19/05/2022"<<endl;                                          cout<<"//=============================================="<<endl<<endl;     

int JE_dd,JE_mm,JE_yy,JE_dd1,JE_mm1,JE_yy1,JE_da,JE_ma,JE_ya;

        cout<<"Ingrese la Fecha Actual: Dia Mes Año "<<endl;
        cin>>JE_dd>>JE_mm>>JE_yy;
        cout<<"Ingrese la Fecha de Nacimiento: Dia Mes Año "<<endl;
        cin>>JE_dd1>>JE_mm1>>JE_yy1;
        if(JE_dd<JE_dd1){

                JE_dd=JE_dd+30;
                JE_mm=JE_mm-1;
                JE_da=JE_dd-JE_dd1;
        }
        else{
                JE_da=JE_dd-JE_dd1;
        }
        if(JE_mm<JE_mm1){
                JE_mm=JE_mm+12;
                JE_yy=JE_yy-1;
                JE_ma=JE_mm-JE_mm1;
        }                                               else{
                JE_ma=JE_mm-JE_mm1;                     }
        JE_ya=JE_yy1-JE_yy;
        cout<<"Ustd Tiene: " <<JE_ya<<" años "<<JE_ma<< " meses "<<" y "<<JE_da<<" dias "<<endl;
	return 0;
}


int GE_CuentaMoneda()
{
cout<<"//===================================="<<endl;
cout<<"//===>Nombre del Programa:Contador de Moneda"<<endl;                                     cout<<"//===>Archivo: CuentaMoneda.cpp"<<endl;
cout<<"//===>Autor:Granja Jaramillo Estefania Lizbeth"<<endl;                                   cout<<"//===>Fecha de Creacion:23/04/2022"<<endl;
cout<<"//===>Fecha de Actualizacion:19/05/2022"<<endl;                                          cout<<"//============================================="<<endl<<endl;                                    int JE_n,JE_c=0,JE_c1=0,JE_c2=0,JE_c3=0;        float JE_x,JE_a=0,JE_a1=0,JE_a2=0,JE_a3=0;                                                      cout<<"Cantidad de monedas a ingresar: ";                                                       cin>>JE_n;
        do{
                cout<<"Ingrese el valor de la moneda (0.10,0.25,0.50): ";
           cin>>JE_x;
           JE_c=JE_c+1;
           JE_a=JE_a+JE_x;
           if(JE_x==(float)0.10){
           JE_c1=JE_c1+1;
           JE_a1=JE_a1+JE_x;
           }else if(JE_x==(float)0.25){
           JE_c2=JE_c2+1;
           JE_a2=JE_a2+JE_x;
           }else {
           JE_c3=JE_c3+1;
           JE_a3=JE_a3+JE_x;}
        }while(JE_c<JE_n);
        cout<<"El resultado fue: "<<endl;
        cout<<"Cantidad de monedas ingresadas: "<<JE_c<<endl;
cout<<"Cantidad total en dinero contado: $ "<<JE_a<<endl;                                       cout<<"Cantidad de monedas de 0.10ctv ingresadas: "<<JE_c1<<endl;                               cout<<"Cantidad total en dinero de monedas de 0.10: $"<<JE_a1<<endl;                            cout<<"Cantidad de monedas de 0.25ctv ingresadas: "<<JE_c2<<endl;                               cout<<"Cantidad total en dinero de monedas de 0.25: $"<<JE_a2<<endl;                            cout<<"Cantidad de monedas de 0.50ctv ingresadas: "<<JE_c3<<endl;                               cout<<"Cantidad total en dinero de monedas de 0.50: $"<<JE_a3<<endl;
        return 0;                               }

int GE_menu()
{
	int op,flag;

	do{
		system("clear");
		cout<<"++++++++++++PROGRAMAS DE GRANJA ESTEFANIA**********"<<endl<<endl;
		cout<<"1.- SUMA DE NUMEROS \n";
		cout<<"2.- COMPARACIÓN DE NÚMEROS.\n";
		cout<<"3.- PUNTO DE VENTA.\n";
		cout<<"4.- CALCULAR LA EDAD.\n";
		cout<<"5.- CONTADOR DE MONEDAS.\n";
		cout<<"0.- Salir del menu.\n";
		cout<<"Ingrese una opcion : "; cin>>op; //la variable op sirve para la opcion a escoger
							switch(op){
								case 1:
									system("clear");
									GE_SumaN();
									break;
								case 2:
									system("clear");
									GE_Compara();
									break;
								case 3:
									system("clear");
									GE_PuntoVenta();
									break;
								case 4:
									system("clear");
									GE_laedad();
									break;
								case 5:
									system("clear");
									GE_CuentaMoneda();
									break;
	}
							if(op!=0 && op>5){
								cout <<"\nOpcion no permitida !\n" << "Press Enter to continue\n";      

							}					        if(op==0){
													       cout<<"Quieres salir completamente del sistema (presiona Enter) :"<<endl;

												
							}												flag=cin.ignore().get(); //Esta linea detiene la pantalla hasta que el usuario presione alguna tecla cout<<flag;
												   }while(op!=0);

   return(0);

}



