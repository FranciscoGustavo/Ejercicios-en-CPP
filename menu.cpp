/*
 *	a) Solicitar el tamaño del vector
 *	b) Introducir los elementos del vector
 *	c) presentar en pantalla los valores del vector
 *	d) buscar un elemento dentro del vector
 *	e) buscar un elemento dentro del vector
 *	f) insertar un elemento al vector (si esta lleno enviar un mensaje de vector lleno)
 *	g) actualizar un elemento del vector
 *	h) opcion de salir del programa
 *	nota: hay que hacer un menu que tenga todas las opciones
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <vector>

using namespace std;

/*
 ************************************************
 * 	Deaclaracion en el scope de las functiones	*
 ************************************************
*/

// Muestra el menu
void show_menu();

// Lee la opcion seleccionada y la ejecuta
void read_option(int*);


/*
 *****************************************
 * 		Opcines del menu en funciones	 *
 *****************************************
*/

// Solicita el tamaño del vector
void request_the_size(const string*, size_t);

// Introducir los elementos del vector
void enter_values_vector();

// Presenta en pantalla los valores del vector
void shows_vector_values();

// Buscar un elemento dentro del vector
void search_element_vector();

// Borrar un elemnto del vector
void delete_elemnt_vactor();

// Insertar un elemento al vector
void enter_element_vector();

// Actualizar un elemento del vector
void update_element_vector();


/*
 ********************************************************
 *				Funcion de entrada main					*
 ********************************************************
*/
int main(int arg, char* args[]) {
	int opc;
	string current;
	std::vector<string> vec;
	do {
		// limpiamos el buffer
	    fflush(stdin);

		// Mostramos el menu
		show_menu();

		// Guardamos la opcion
		read_option(&opc);

		// Ejecutamos los posibles casos
		switch(opc) {
			case 1 :
				if( !vec.empty() ){
					request_the_size(&vec[0], vec.size());
				} else {
					printf("Primero introduce datos Porfavor");
				}
				break;
			case 2 :
				enter_values_vector();
				break;
			case 3 :
				shows_vector_values();
				break;
			case 4 :
				search_element_vector();
				break;
			case 5 :
				delete_elemnt_vactor();
				break;
			case 6 :
				enter_element_vector();
				break;
			case 7 :
				update_element_vector();
				break;
			case 8 :
				printf("Adios Amigo");
				break;
			default:
				printf("Opcion no valida vuelve a intentar");
				break;
		}


		printf("\nNUMERO 2: %i",opc);

        // Pausamos
		getch();

		// Limpiamos pantalla
        system("cls");
	}while(opc != 8);

	return 0;
}

/*
 ********************************************************
 *	Declatración de la funcionalidad de las functiones	*
 ********************************************************
*/

// Muestra el menu
void show_menu(){
	printf ("-----------------MENU-----------------\n");
	printf ("\n 1.- Obtener el tamaño del vector");
	printf ("\n 2.- Introducir los elentos del vector");
	printf ("\n 3.- Mostrar los valores");
	printf ("\n 4.- buscar un lemento dentro del vector");
	printf ("\n 5.- borrar un elemnto dentro del vector");
	printf ("\n 6.- insertar un elemento al vector");
	printf ("\n 7.- actualizar un elemento del vector");
	printf ("\n 8.- salir");
	printf ("\n\n Introdusca opcion (1-8): ");
}

// Lee la opcion seleccionada y la ejecuta
void read_option(int* opc){
	scanf("%i", &*opc);
}


/*
 ********************************************************
 *					Opciones del menu					*
 ********************************************************
*/

// Solicita el tamaño del vector
void request_the_size(const string* vec, size_t size){
	printf("HOLA");
	//std::cout<<"El tamaño es de: "<<vec<< " |";
}

// Introducir los elementos del vector
void enter_values_vector(){

}

// Presenta en pantalla los valores del vector
void shows_vector_values(){

}

// Buscar un elemento dentro del vector
void search_element_vector(){

}

// Borrar un elemnto del vector
void delete_elemnt_vactor(){

}

// Insertar un elemento al vector
void enter_element_vector(){

}

// Actualizar un elemento del vector
void update_element_vector(){

}
