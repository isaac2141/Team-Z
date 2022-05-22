// Autores: Gonzalez Isaac,
// Fecha de creación: 19-05-2022
// Fecha de ultima actualizacion: 19-05-2022


#include<iostream>
#include<stdlib.h>
using namespace std;
#include "GI_libreria.h"
#include "GE_libreria.h"
#include "BS_libreria.h"
//#include "DD_libreria.h"
//#include "DD_libreria.h"




int main()
{
	int op,flag;

	do{
	system("clear");
	cout<<"**************Grupo TEAM-Z**************"<<endl<<endl;
	cout<<"1.- Programas de Gonzalez Isaac \n";
	cout<<"2.- Programas de Granja Estefania\n";
	cout<<"3.- Programas de Bedoya Stefany \n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					GI_menu();			
					break;
			 		
				case 2:
					GE_menu();
					break;
				case 3:
					BS_menu();
					break;
				case 4:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DEL INTEGRANTE 4 ";
					break;
				case 5:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DEL INTEGRANTE 5 ";
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
	}while(op!=0);
	
//	system("tree");

	return(0);

}
