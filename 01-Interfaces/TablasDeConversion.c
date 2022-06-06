#include <stdio.h>
#include "Conversion.h"
#include "TablasDeConversion.h"


typedef double (*funcion_t)(int);

const int LOWER = 0;
const int UPPER = 300;
const int STEP = 20;

void printTablas()
{
  printf("Tabla Celsius a Farenheit:\n"); 
  printTablaCelsius(LOWER, UPPER, celciusAFahr);
  
  printf("\nTabla Farenheit a Celsius:\n");
  printTablaFahrenheit(LOWER, UPPER, fahrACelcius);
}

// Funciones PrintTablaCelsius y PrintTablaFarenheit

void printTablaCelsius(int limInferior, int limSuperior, funcion_t funcionCelsius)
{
    prinfFilas(limInferior,limSuperior,funcionCelsius);
}

void printTablaFahrenheit(int limInferior, int limSuperior, funcion_t funcionFarenheit)
{
    prinfFilas(limInferior,limSuperior,funcionFarenheit);
}

// Funciones PrintFilas y PrintFila

void prinfFilas(int limInferior, int limSuperior, funcion_t funcion)
{
    for (int grados = limInferior; grados <= limSuperior; grados = grados + STEP)
        printFila(grados,funcion);
}


void printFila(int grados,funcion_t funcion)
{
    printf("%3d  %6.1f\n", grados, funcion(grados));
}


int main()
{
    printTablas();

    return 0;
}

