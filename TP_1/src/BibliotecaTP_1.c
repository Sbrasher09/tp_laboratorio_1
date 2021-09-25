/*
 * BibliotecaTP_1.c
 *
 *  Created on: 24 sep. 2021
 *      Author: sbras
 */


#include <stdio.h>
#include <stdlib.h>



float sumar(float primerNumero,float segundoNumero){
	int resultadoSuma;

	resultadoSuma= primerNumero+segundoNumero;

	return resultadoSuma;

}


float restar(float primerNumero,float segundoNumero){

	int resultadoRestar;

	resultadoRestar=primerNumero-segundoNumero;

    return resultadoRestar;
}


float dividir(float primerNumero,float segundoNumero){
	int resultadoDividir;

	resultadoDividir = primerNumero/segundoNumero;



    return resultadoDividir;
}


float multiplicar(float primerNumero,float segundoNumero){

	float resultadoMultiplicar;

resultadoMultiplicar = primerNumero * segundoNumero;

return resultadoMultiplicar;

}


float factorial(float numero){
	int resultado;

	if(numero == 0){
		resultado = 1;
	}
	else{
		resultado = numero * factorial(numero - 1);
	}
	return resultado;
}

