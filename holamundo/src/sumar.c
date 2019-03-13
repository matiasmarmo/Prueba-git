/*
 * sumar.c
 *
 *  Created on: 26 feb. 2019
 *      Author: Adriana
 */

#include "sumar.h"

t_numero sumarTres(t_numero numero){
        numero.numeroAnterior =         numero.numero;
        numero.numero += 3;
   return numero;
}

