/*
 * Bibliotecas.c
 *
 *  Created on: 2 oct. 2021
 *      Author: sbras
 */
#include "Validar.h"
#include "Ingresos.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int pedirEntero(char mensaje[],int* pValidacionFinal){

	char entero[1000];
	int numeroValidado;
    int enteroConvertido;
    int retornoVOF;
    retornoVOF=0;


	printf("%s",mensaje);
	fflush(stdin);
		fgets(entero,1000,stdin);


    numeroValidado=validarEntero(entero, 1000);

    if(numeroValidado==1){

    	enteroConvertido=atoi(entero);
    	*pValidacionFinal=enteroConvertido;
       retornoVOF=1;
    }return retornoVOF;


}
int pedirFlotante(char mensaje[],float* pValidacionFinal){



	char flotante[1000];
	int numeroValidado;
    float flotanteConvertido;
    int retornoVOF;
    retornoVOF=0;


	printf("%s",mensaje);
	fflush(stdin);
	fgets(flotante,1000,stdin);

	numeroValidado = validarFlotante(flotante, 1000);

	if (numeroValidado == 1) {

		flotanteConvertido = atof(flotante);
		*pValidacionFinal = flotanteConvertido;
		retornoVOF = 1;
	}
	return retornoVOF;

}


int pedirCadenaCaracteres(char mensaje[],char cadena[]){
	char cadenaCaracteres[51];
	int retornoVOF=0;
	printf("%s",mensaje);
	fflush(stdin);
		fgets(cadenaCaracteres,51,stdin);
if(cadenaCaracteres != NULL){
	strcpy(cadena,cadenaCaracteres);
	retornoVOF = 1;
}
		return retornoVOF;

}
