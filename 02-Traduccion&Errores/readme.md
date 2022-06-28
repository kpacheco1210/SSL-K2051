## 01-Fases de la Traduccion y errores

### 1. Objetivos
Este trabajo tiene como objetivo identificar las fases del proceso de traducción o
Build y los posibles errores asociados a cada fase.
Para lograr esa identificación se ejecutan las fases de traducción una a una, se
detectan y corrigen errores, y se registran las conclusiones en readme.md.
### 2. Temas
* Fases de traducción.
* Preprocesamiento.
* Compilación.
* Ensamblado.
* Vinculación (Link).
* Errores en cada fase.
* Compilación separada.
### 3. Tareas
1. La primera tarea es investigar las funcionalidades y opciones que su compilador presenta para limitar el inicio y fin de las fases de traducción
2. La siguiente tarea es poner en uso lo que se encontró. Para eso se debe transcribir al readme.md cada comando ejecutado y su resultado o error correspondiente a la siguiente secuencia de pasos. También en readme.md se vuelcan las conclusiones y se resuelven los puntos solicitados. Para claridad, mantener en readme.md la misma numeración de la secuencia de pasos.

### 3.1 Secuencia de Pasos
1. Preprocesador
    a. Escribir hello2.c, que es una variante de hello.c:
    ```
    #include <stdio.h>
    int/*medio*/main(void){
    int i=42;
    prontf("La respuesta es %d\n");
    ```
    b. Preprocesar hello2.c, no compilar, y generar hello2.i. Analizar su contenido. ¿Qué conclusiones saca?
    hello2.i:
    ```
    # 1 "hello2.c"
    # 1 "<built-in>"
    # 1 "<command-line>"
    # 1 "hello2.c"
    ```
    - Mi conclusion es que el preprocesador analizo el contenido y en cada linea avisaba lo que estaba haciendo. Ademas tambien agrego el archivo header stdio.h del sistema.

    c. Escribir hello3.c, una nueva variante:
    hello3.c:
    ```
    int printf(const char * restrict s, ...);
    int main(void){
    int i=42;
    prontf("La respuesta es %d\n");
    ```
    d. Investigar e indicar la semántica de la primera línea.
    ```
    int printf(const char * restrict s, ...);
    ```
    - La funcion retorna la cantidad.
    - 'const' es para especificar que el valor de esa variabla no va a cambiar.
    - 'char' es un tipo de variable usado para los caracteres.
    - El simbolo '*' indica que se hara uso de el puntero.
    - La palabra reservada 'restrict' indica que s puede apuntar a muchas cosas.
    - La escritura de los tres puntos '...' es conocida como *elipsis*, indica que la funcion puede tener un numero variable de cantidad de parametros.

    e. Preprocesar hello3.c, no compilar, y generar hello3.i. Buscar diferencias entre hello3.c y hello3.i.
    ```
    # 1 "hello3.c"
    # 1 "<built-in>"
    # 1 "<command-line>"
    # 1 "hello3.c"
    int printf(const char * restrict s, ...);
    int main(void){
    int i=42;
    prontf("La respuesta es %d\n");
    ```

    - No hay diferencias entre el codigo que se muestra en el archivo de hello3.c y hello3.i

2. Compilacion
    a. Compilar el resultado y generar hello3.s, no ensamblar.
    b. Corregir solo los errores, no los warnings, en el nuevo archivo hello4.c y empezar de nuevo, generar hello4.s, no ensamblar.
    c. Leer hello4.s, investigar sobre lenguaje ensamblador, e indicar de forma sintética cual es el objetivo de ese código.

        - Basicamente lo que se realiza en este codigo ensamblador es que 

    d. Ensamblar hello4.s en hello4.o, no vincular.

3. Vinculacion
    a. Vincular hello4.o con la biblioteca estándar y generar el ejecutable.
    b. Corregir en hello5.c y generar el ejecutable. Solo corregir lo necesario para que vincule.
    c. Ejecutar y analizar el resultado.

4. Correcion de Bug
    a. Corregir en hello6.c y empezar de nuevo; verificar que funciona como se espera.

5. Remocion de prototipo
    a. Escribir hello7.c, una nueva variante:
    ```
    int main(void){
    int i=42;
    printf("La respuesta es %d\n", i);
    }
    ```
    b. Explicar porqué funciona.

    