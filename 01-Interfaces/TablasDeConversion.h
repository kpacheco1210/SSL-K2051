typedef double (*funcion_t)(int);
#ifndef TABLASDECONVERSION_H_INCLUDED
#define TABLASDECONVERSION_H_INCLUDED

/* Imprimir en pantalla la tabla de Celsius a Farenheit, recibiendo la funcion que convierte 
 * los grados Celsius a Farenhiet, desde el parametro 'limInferior' hasta el parametro 'limSuperior'
 */
void printTablaCelsius(int limInferior, int limSuperior, funcion_t funcionCelsius);

/* Imprimir en pantalla la tabla de Farenheit a Celsius, recibiendo la funcion que convierte 
 * los grados Farenheit a CElsius, desde el parametro 'limInferior' hasta el parametro 'limSuperior'
 */
void printTablaFahrenheit(int limInferior, int limSuperior, funcion_t funcionFarenheit);

/* Imprimir en pantalla una tabla de conversion a partir una funcion que convierte 
 * los grados de un tipo a otro, desde el parametro 'limInferior' hasta el parametro 'limSuperior'
 */
void prinfFilas(int limInferior, int limSuperior, funcion_t funcion);

/* Imprimir en pantalla la conversion de un grado a partir una
 * funcion que convierte ese grado de un tipo a otro
 */
void printFila(int grados,funcion_t funcion);

#endif