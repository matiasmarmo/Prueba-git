/*
 ============================================================================
 Name        : holamundo.c
 Author      : Matias
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "sumar.h"
void main(){

        t_numero cinco;
        t_numero resultado;
        cinco.numero = 5;
        cinco.numeroAnterior = 0;
        resultado = sumarTres(cinco);
        printf("%d    ", resultado.numero);
        printf("%d", resultado.numeroAnterior);
}
