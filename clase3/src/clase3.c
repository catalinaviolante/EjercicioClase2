/*
 ============================================================================
 Name        : clase3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float primerNumero;
	float segundoNumero;
	int respuesta;
	respuesta = 1;

	do
	{
		setbuf(stdout, NULL);
		printf("Ingrese el primer numero.");
		fflush(stdin);
		scanf("%f", &primerNumero);
		printf("Ingrese el segundo numero");
		fflush(stdin);
		scanf("%f", &segundoNumero);
		respuesta = printf("desea ingresar otro numero? de ser asi, ingrese 0");

		if(respuesta== 0)
		{
			respuesta = 0;
		}

	}while(respuesta == 1 );


	return EXIT_SUCCESS;
}
