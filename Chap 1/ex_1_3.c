#include <stdio.h>

/* Visualizza la tabella Fahreneit-Celsius per fahr = 0, 20, ..., 300; versione con virgola mobile*/
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /*Valore minimo in gradi F nella tabella delle temperature*/
    upper = 300; /*valore massimo in gradi F*/
    step = 20; /*Intervallo fra due temperature in gradi F adiacenti*/

    fahr = lower;

    // Modifica dell'esercizio 1.3
    printf("Fahreneit \t Celsius \n");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f \t \t %6.1f \n", fahr, celsius);
        fahr = fahr + step;
    }
}