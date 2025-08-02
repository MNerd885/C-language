#include <stdio.h>

#define LOWER 0
#define UPPER 300 /*valore massimo in gradi C*/
#define STEP 20 /*Intervallo fra due temperature in gradi C adiacenti*/

/* Visualizza la tabella Celsius-Fahreneit per cel = 0, 20, ..., 300; versione con virgola mobile*/
int main()
{
    float fahr, celsius;

    printf("Celsius \t Fahreneit \n");

    for (celsius = UPPER; celsius >= LOWER; celsius -= STEP) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%3.0f \t \t %6.1f \n", celsius, fahr);
    }
       
}