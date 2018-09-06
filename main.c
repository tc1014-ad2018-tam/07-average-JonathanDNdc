/*
 * Este programa calcula el promedio de los numeros que ingrese
 * el usuario. El programa deja de recibir numeros cuando se ingrese el 0.
 *
 * Autor: Jonathan Nuñez de Caceres.
 * Fecha: 6 de Septiembre del 2018
 * Correo: A01411277@itesm.mx
 */

#include <stdio.h>

int main() {
    // Declaracion de variables.
    double average = 0;
    float number;
    float total = -1;

    // Aqui empieza el do, while.
    do{
        printf("Give me a number:");
        scanf("%f", &number);
        average += number;
        total += 1;

    }
    // El programa se detiene cuando el numero sea igual a 0.
    while(number != 0);

    // Se calcula el promedio y se imprime a pantalla.
    average /= total;
    printf("Average: %lf", average);

    // El programa termina.
    return 0;
}