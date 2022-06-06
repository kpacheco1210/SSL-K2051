#include <assert.h>
#include <stdio.h>
#include "Conversion.h"

const double EPSILON = -0.5;

int main()
{
  // Test funcion de conversion de grados Celsius a grados Farenheit
  assert((celciusAFahr(0)-32)>EPSILON);
  assert((celciusAFahr(80)-176)>EPSILON);
  assert((celciusAFahr(160)-320)>EPSILON);
  assert((celciusAFahr(300)-572)>EPSILON);

  printf("Pruebas Celsius a Farenheit exitosas\n");

  // Test funcion de conversion de grados Farenheit a grados Celsius
  assert((fahrACelcius(0)+17.8)>EPSILON);
  assert((fahrACelcius(40)-4.4)>EPSILON);
  assert((fahrACelcius(280)-137.8)>EPSILON);
  assert((fahrACelcius(300)-148.9)>EPSILON);

  printf("Pruebas Farenheit a Celsius exitosas\n");
  
  return 0;
}