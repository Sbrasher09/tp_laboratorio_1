/*
 * Estructuras.c
 *
 *  Created on: 2 oct. 2021
 *      Author: sbras
 */


#include "ArrayEmployees.h"
#include <stdio.h>
#include "Ingresos.h"
#include "Validar.h"
#include <string.h>

#define VACIO 0
#define LLENO 1
/*
  int id;
		char name[51];
		char lastName[51];
		float salary;
		int sector;
		int isEmpty;
*/


// mostrar un solo empleado
void printEmployee(Employee mostrarUnEmpleado) {

	printf("\n---------------------------------\n");
printf("ID : %d\n\n", mostrarUnEmpleado.id);
printf("Nombre: %s", mostrarUnEmpleado.name);
printf("Apellido: %s", mostrarUnEmpleado.lastName);
printf("Sector: %d\n", mostrarUnEmpleado.sector);
printf("Salario: %.2f\n", mostrarUnEmpleado.salary);
printf("\n---------------------------------\n");
}


//mostrar todos los empleados full
int printEmployees(Employee *list, int length) {
	int retornoDeLista = 0;

	for (int i = 0; i < length; i++) {
		if (list[i].isEmpty == LLENO) {
		printEmployee(list[i]);
		retornoDeLista = 1;
		}
		if(list[i].id==NULL){
        break;
		}
	}
	return retornoDeLista;
}



int initEmployees(Employee *list, int len) {

	int retorno = 0;

	for (int i = 0; i < len; i++) {
		list[i].isEmpty = VACIO;
		retorno = 1;

	}
	return retorno;

}

int addEmployee(Employee *list, int len, int id, char name[], char lastName[],float salary, int sector) {

	int estadoEnteroValidado;
	int estadoFlotanteValidado;
	int nombreEmpleado;
	int apellidoEmpleado;
	int lugar;
	int place;
	float salario;
	int empleadoCargado=0;
    Employee variable;


	nombreEmpleado = pedirCadenaCaracteres("\nIngrese el nombre del empleado: ", name);
    fflush(stdin);

	apellidoEmpleado = pedirCadenaCaracteres("\nIngrese el apellido del empleado: ", lastName);
    fflush(stdin);


	estadoFlotanteValidado = pedirFlotante("\nIngrese el salario del empleado: ", &salario);


	lugar = pedirEntero("\nIngrese el sector del empleado: ", &place);



	if( estadoFlotanteValidado == 1 && nombreEmpleado == 1 && apellidoEmpleado == 1 && lugar == 1) {


		            id++;

		            variable.id=id;
					strcpy(variable.name, name);
					strcpy(variable.lastName, lastName);
					sector = place;
					salary = salario;
					variable.salary = salary;
					variable.sector = sector;


					variable.isEmpty = LLENO;
					for (int i = 0; i < len; i++) {
							if (list[i].isEmpty == VACIO) {

								list[i]=variable;

								empleadoCargado=1;
								break;
							}
					}
				}





	return empleadoCargado;
}

int findEmployeeById(Employee *list, int len, int id) {
	int retornoDeBuscarID = -1;

	for (int i = 0; i < len; i++) {

		if (list[i].id == id) {
			retornoDeBuscarID = i;
		}
	}
	return retornoDeBuscarID;

}

int modifyEmployee(Employee *list, int len,int retornoDeBuscarID,int opcion2){

	char nombreModificado[51];
	char apellidoModificado[51];
	float salarioModificado;
	int sectorModificado;
	int modificacionCorrecta;
	int retornoDeLaModificacion=0;

	switch(opcion2){
	case 1:

		pedirCadenaCaracteres("Ingrese el nuevo nombre para modificarlo: ",nombreModificado);

		for (int i = 0; i < len; i++) {
			if (list[i].id == retornoDeBuscarID) {

				strcpy(list[i].name, nombreModificado);
				retornoDeLaModificacion=1;

				break;
			}

		}
		break;
	case 2:

		pedirCadenaCaracteres("Ingrese el nuevo apellido para modificarlo: ",apellidoModificado);
		for (int i = 0; i < len; i++) {
					if (list[i].id == retornoDeBuscarID) {

						strcpy(list[i].lastName, apellidoModificado);
						retornoDeLaModificacion=1;

						break;

					}
				}

		break;
	case 3:

		modificacionCorrecta = pedirFlotante(
				"Ingrese el nuevo salario para modificarlo: ",&salarioModificado);
		if (modificacionCorrecta == 1) {
			for (int i = 0; i < len; i++) {
				if (list[i].id == retornoDeBuscarID) {

					list[i].salary = salarioModificado;
					retornoDeLaModificacion=1;

					break;
				}
			}
		}

		break;
	case 4:

		modificacionCorrecta=pedirEntero("Ingrese el nuevo salario para modificarlo: ", &sectorModificado);
		if (modificacionCorrecta == 1) {
					for (int i = 0; i < len; i++) {
						if (list[i].id == retornoDeBuscarID) {

							list[i].sector = sectorModificado;
							retornoDeLaModificacion=1;

							break;

							// ERROR: Al poner mas de un empleado, al seleccionar 4 muestra solo el primero....
						}
					}
				}

		break;
	}

return retornoDeLaModificacion;


}


int removeEmployee(Employee *list, int len, int retornoDeBuscarID, int opcion3) {

	switch (opcion3) {
	case 1:

		for (int i = 0; i < len; i++) {
			if (list[i].id == retornoDeBuscarID) {

				retornoDeBuscarID = NULL;

				break;
			}

		}


	}
	return retornoDeBuscarID;

}
