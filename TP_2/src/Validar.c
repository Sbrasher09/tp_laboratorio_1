/*
 * Validar.c
 *
 *  Created on: 2 oct. 2021
 *      Author: sbras
 */
#include <ctype.h>
#include <stdio.h>
#include "Validar.h"

int validarEntero(char pedirEntero[], int tam) {

	int enteroValidado;
	enteroValidado = 0;

	for (int i = 0; i < tam; i++) {

		if (isdigit(pedirEntero[i])) {

			enteroValidado = 1;

		}


	}
	return enteroValidado;

}
int validarFlotante(char pedirFlotante[], int tam) {

	int encuentraPunto = 0;
	int flotanteValidado;//retorno

	for (int i = 0; i < tam; i++) {

		if (pedirFlotante[i] == '.') {

			encuentraPunto++;

			if (encuentraPunto > 1) {
				flotanteValidado = 0;
				break;
			}
		}

		if (isdigit(pedirFlotante[i])) {

			flotanteValidado = 1;
         break;
		}

	}
	return flotanteValidado;

}
