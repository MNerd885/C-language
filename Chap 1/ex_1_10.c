#include <stdio.h>

/*Replica l'input da tastiera sull'output, dove però vanno sostituite le tabulazioni con \t, ogni backspace con \b e ogni barra inversa 
con \\ , così da rendere perfettamente visibili le tabulazioni e cancellazioni*/
int main() {
    int c;

    while ((c = getchar()) != EOF) {

        if (c == '\t' ) {
            putchar('\t');
        } else if (c == '\b') {
            putchar('\b');
        } else if (c == '\\') {
            putchar('\\');
        }

    }
}