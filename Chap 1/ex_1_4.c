#include <stdio.h>

/* Visualizza la tabella Celsius-Fahreneit per cel = 0, 20, ..., 300; versione con virgola mobile*/
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /*Valore minimo in gradi C nella tabella delle temperature*/
    upper = 300; /*valore massimo in gradi C*/
    step = 20; /*Intervallo fra due temperature in gradi C adiacenti*/

    celsius = lower;

    // Modifica dell'esercizio 1.3
    printf("Celsius \t Fahreneit \n");

    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%3.0f \t \t %6.1f \n", celsius, fahr);
        celsius = celsius + step;
    }
}