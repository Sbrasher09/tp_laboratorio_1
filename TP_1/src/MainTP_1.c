/*
 ============================================================================
 Brandon Bravo Div-E
 DNI: 46745347
Hacer una calculadora. Para ello el programa iniciará y contará con un menú
de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones

     a) Calcular la suma (A+B)
     b) Calcular la resta (A-B)
     c) Calcular la division (A/B)
     d) Calcular la multiplicacion (A*B)
     e) Calcular el factorial (A!)
4. Informar resultados
     a) “El resultado de A+B es: r”
     b) “El resultado de A-B es: r”
     c) “El resultado de A/B es: r” o “No es posible dividir por cero”
     d) “El resultado de A*B es: r”
     e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir

• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
     que contenga las funciones para realizar las cinco operaciones.

• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
     (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)

• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "BibliotecaTP_1.h"


int main(void) {
	setbuf(stdout,NULL);




	int opcion;
	float primerNumero;
	float segundoNumero;
	float resultadoSumar;
	float resultadoRestar;
	float resultadoDividir;
	float resultadoMultiplicar;
	int noDivisible=0;
	int noFactorizable=0;

	int flag=0;
	int flag2=0;

	float resultadoFactorial;
	float resultadoFactorial2;

    do{

	if(flag == 0){
		primerNumero=0;
		flag=1;
	}
	if(flag2 == 0){
			segundoNumero=0;
			flag2=1;
		}
	printf("\n\nElija una opción: ");
	printf("1.\n\n1. Colocar primer numero: (El numero es: %f)", primerNumero);
	printf("\n\n2. Colocar segundo numero: (El numero es: %f)", segundoNumero);
	printf("\n\n3. Calcular todas las operaciones.");
	printf("\n\n4. Mostrar resultados de las operaciones");
	printf("\n\n5. Salir");

	printf("\n\nElija una opción: ");
    fflush(stdin);
	scanf("%d", &opcion);

	while(opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4 && opcion!=5){
		printf("\n\nError. Elija una opción correcta o presione el 5. para salir");

		fflush(stdin);
		scanf("%d", &opcion);
	}




	switch(opcion){
	case 1: printf("Escribir el primer numero: ");
	scanf("%f",&primerNumero);
		break;
	case 2: printf("\nEscribir el segundo numero: ");
	scanf("%f",&segundoNumero);
			break;
	case 3:
	  resultadoSumar = sumar(primerNumero, segundoNumero);
      resultadoRestar= restar(primerNumero, segundoNumero);
      resultadoDividir=dividir(primerNumero, segundoNumero);
      resultadoMultiplicar=multiplicar(primerNumero, segundoNumero);
      resultadoFactorial = factorial(primerNumero);
     resultadoFactorial2 = factorial(segundoNumero);

      if(primerNumero<0){
    	   noFactorizable==1;
      }
      if(segundoNumero<0){
           noFactorizable==1;
            }


      if(segundoNumero==0){
           		    	  resultadoDividir==0;
           		    	  noDivisible==1;
            }




			break;
	case 4:



		printf("La suma es %f\n", resultadoSumar);
		printf("La resta es %f\n", resultadoRestar);
		if(noDivisible=0){
			printf("La division es %f\n", resultadoDividir);
		}else{
			printf("No es posible dividir por 0\n");
		}

		printf("La multiplicacion es %f\n", resultadoMultiplicar);

		if(noFactorizable==0 && resultadoFactorial > 0){
		printf("El factorial del primer numero es %f\n", resultadoFactorial);
		printf("El factorial del segundo numero es %f\n", resultadoFactorial2);
		}else{
	    	   printf("No se puede realizar el factorial de un numero negativo.\n");
		}

		printf("Se reinician los numeros al terminar de informar los resultados\n");
		primerNumero=0;
		segundoNumero=0;
        resultadoRestar=0;
        resultadoDividir=0;
        resultadoMultiplicar=0;
      resultadoFactorial=0;
      resultadoFactorial2=0;




			break;
	case 5:
		opcion=5;
		printf("Saliendo del menu\n");
			break;
	default:
		printf("No selecciono una opción valida");
		break;

	}//Termina el Switch

    }while(opcion != 5); //Termina el Do while


	return 0;


}

