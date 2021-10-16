/*
 * Estructuras.h
 *
 *  Created on: 2 oct. 2021
 *      Author: sbras
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_



typedef struct{

	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}Employee;

int initEmployees(Employee* list, int len);

int addEmployee(Employee *list, int len, int id, char name[], char lastName[],float salary, int sector);

void printEmployee(Employee mostrarUnEmpleado);

int printEmployees(Employee* list, int length);

int findEmployeeById(Employee* list, int len,int id);

int modifyEmployee(Employee *list, int len,int retornoDeBuscarID,int opcion2);

int removeEmployee(Employee *list, int len,int retornoDeBuscarID,int opcion3);

#endif /* ARRAYEMPLOYEES_H_ */
