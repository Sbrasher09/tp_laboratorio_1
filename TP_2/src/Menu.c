/*
 * Menu.c
 *
 *  Created on: 4 oct. 2021
 *      Author: sbras
 */
#include "menu.h"
#include "ArrayEmployees.h"

#define ELEMENTS 1000


int opcionEscogidaMenu(int opcion){

	Employee arrayEmployees[ELEMENTS];
	int confirmacionEmpleado;
	int id=0;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int retornoDelJedi=0;
	int listaDeEmpleados;
	int pedirID;
	int buscarID;
	int opcion2;
	int opcion3;
	int opcionCase2;
	int opcionSeleccionada;
	int retornoDeBuscarID;
	int IDParaBorrar;

	switch(opcion){
	case 1:

		confirmacionEmpleado=addEmployee(arrayEmployees, ELEMENTS, id, name, lastName, salary, sector);
		if(confirmacionEmpleado==1){
			printf("Se agrego satisfactoriamente la información de un empleado.");
		}else{
			printf("No se agrego ningun empleado.");
		}
retornoDelJedi=1;
		break;
	case 2:


		listaDeEmpleados=printEmployees(arrayEmployees,ELEMENTS);

        pedirID=pedirEntero("Ingresar el ID para modificar",&buscarID);

        printf("1.Modificar nombre\n");
        printf("\n2.Modificar apellido");
        printf("\n3.Modificar salario");
        printf("\n4.Modificar sector");
        opcion2=pedirEntero("\nElige opcion para modificar: ",&opcionCase2);

        retornoDeBuscarID=findEmployeeById(arrayEmployees, ELEMENTS, buscarID);

        opcionSeleccionada=modifyEmployee(arrayEmployees, ELEMENTS, retornoDeBuscarID, opcionCase2);
        if(opcionSeleccionada==1){
        	printf("\nSe modifico con exito");
        }

		retornoDelJedi=1;

		break;
	case 3:
		listaDeEmpleados=printEmployees(arrayEmployees,ELEMENTS);

        pedirID=pedirEntero("\nIngresar el ID para eliminar: ",&buscarID);


		IDParaBorrar=removeEmployee(arrayEmployees, ELEMENTS,retornoDeBuscarID,opcion3);

		printf("El empleado fue eliminado con exito");

		retornoDelJedi=1;

		break;

	case 4:

				retornoDelJedi=1;

			break;
	case 5:
		opcion=5;
		printf("Se cayo el sistema.....\n");
		retornoDelJedi=0;

			break;
	default:
		printf("No selecciono una opción valida");
		break;

	}//Termina el Switch


return retornoDelJedi;
}


