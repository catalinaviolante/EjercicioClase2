/*
 ============================================================================
 Name        : hola.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
    /* C  TIPOS   int float char */
    int numeroIngresado;
    int resultadoScan;
    int i;
    int acumulador;
    float promedio;
    acumulador = 0;

    for(i = 0;i<5; i++)
    {
    	printf("Ingrese un numero");
    	fflush(stdin); // fflush(stdin)
    	resultadoScan = scanf("%d", &numeroIngresado);
    	 while(resultadoScan == 0)
    	 {
    		 printf("Error, ingrese un numero");
    		 fflush(stdin); // fflush(stdin)
         	 resultadoScan = scanf("%d", &numeroIngresado);
    	 }
    	 acumulador+=numeroIngresado;
    }
    promedio = (float)acumulador / i; //casteo
    printf("El promedio entre los 5 numeros es: %f " + promedio); //%f porque es un dato del tipo float
	return EXIT_SUCCESS;											//puedo poner %.2f para achicar cant de decimales
}
