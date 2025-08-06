#include <stdio.h>

#define IN 1 // all'interno di una parola
#define OUT 0 // all'esterno di una parola

/*Conteggio delle parole immesse da tastiera*/

int main() {
    int c, nchar, nline, nword;

    int state = OUT; // State può assumere 0 o 1, è una variabile utile per capire se siamo all'interno di una parola o no

    nline = nchar = nword = 0;

    // Grazie a Ctrl+D riesco a far terminare il loop
    // Ctrl+D ==> carattere di controllo EOT (End Of Transmission), 
    // in ASCII = 4
    while ((c = getchar()) != EOF) {
        nchar++;
        if (c == '\n') {
            nline++;
        } else if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            nword++;
        }
    }
    printf("N_linee \t N_chars \t N_words \n");
    printf("%2d \t\t %2d \t\t %2d \n", nline, nchar, nword);
}
