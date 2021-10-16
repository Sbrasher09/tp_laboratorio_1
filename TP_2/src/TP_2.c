/*
Una empresa requiere un sistema para administrar su n�mina de empleados. Se sabe que
dicha n�mina bajo ninguna circunstancia superara los 1000 empleados.
Datos:

El sistema deber� tener el siguiente men� de opciones:
     1. ALTAS: Se debe permitir ingresar un empleado calculando autom�ticamente el n�mero
          de Id. El resto de los campos se le pedir� al usuario.
     2. MODIFICAR: Se ingresar� el N�mero de Id, permitiendo modificar: o Nombre o Apellido
          o Salario o Sector
     3. BAJA: Se ingresar� el N�mero de Id y se eliminar� el empleado del sistema.
     4. INFORMAR:
          1. Listado de los empleados ordenados alfab�ticamente por Apellido y Sector.
          2. Total y promedio de los salarios, y cu�ntos empleados superan el salario promedio.
     NOTA: Se deber� realizar el men� de opciones y las validaciones a trav�s de funciones.
     Tener en cuenta que no se podr� ingresar a los casos 2, 3 y 4; sin antes haber realizado la
carga de alg�n empleado.

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "ArrayEmployees.h"
#include "Validar.h"
#include "Ingresos.h"

#define ELEMENTS 1000

int main(void) {
	setbuf(stdout,NULL);
int iniciadorLista;
Employee arrayEmployees[ELEMENTS];
int opcion;
int llamadaDelMenu;
int seleccionDelMenu;


iniciadorLista=initEmployees(arrayEmployees, ELEMENTS);
if(iniciadorLista == 1){
	printf("Se verifico que esta vaciado\n");
}else{
	printf("No esta vacia");
}
do{



printf("\n\n1. Colocar un empleado en el Array.");
printf("\n\n2. Modificar un empleado segun su ID");
printf("\n\n3. Eliminar un empleado segun su ID.");
printf("\n\n4. Informar entre las dos opciones validas: ");

printf("\n\n5. Salir");

seleccionDelMenu=pedirEntero("\n\nSeleccione una opcion: ", &opcion);

while(opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4 && opcion!=5){
	seleccionDelMenu=pedirEntero("\n\nError. Elija una opci�n correcta o presione el 5. para salir", &opcion);



}

 llamadaDelMenu=opcionEscogidaMenu(opcion);

}while( llamadaDelMenu==1);















	return EXIT_SUCCESS;
}
