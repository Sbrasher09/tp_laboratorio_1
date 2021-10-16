/*
 * Bibliotecas.h
 *
 *  Created on: 2 oct. 2021
 *      Author: sbras
 */

#ifndef INGRESOS_H_
#define INGRESOS_H_

/// \fn int pedirEntero(char[], int*)
/// \brief
/// \param mensaje
/// \param pValidacionFinal
/// \return
int pedirEntero(char mensaje[],int* pValidacionFinal);


/// \fn int pedirFlotante(char[], float*)
/// \brief
/// \param mensaje
/// \param pValidacionFinal
/// \return
int pedirFlotante(char mensaje[],float* pValidacionFinal);

/// \fn int pedirCadenaCaracteres(char[], char[])
/// \brief
/// \param mensaje
/// \param cadena
/// \return
int pedirCadenaCaracteres(char mensaje[],char cadena[]);

#endif /* INGRESOS_H_ */
