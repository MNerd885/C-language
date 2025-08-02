#include <stdio.h>

/*Replica l'input da tastiera sull'output, dove però qualora ci sia una stringa 
con uno o più spazi viene rimpiazzata da un solo spazio*/
int main() {
    int c, nspace;

    while ((c = getchar()) != EOF) {

        if (c == ' ' ) {
            nspace++;
        }

        if (nspace >= 2) {
            putchar(' ');
        }

    }
}