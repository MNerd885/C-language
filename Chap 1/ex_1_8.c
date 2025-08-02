#include <stdio.h>

/*Conta il numero di Tab, NewLine e Space immessi da tastiera*/
int main() {
    int c, nspace, ntab, nline;

    printf("Line \t Tab \t Space \n");
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            nline++;
        } else if (c == '\t') {
            ntab++;
        } else if (c == ' ') {
            nspace++;
        }

        printf("%2d \t %2d \t %2d \n", nline, ntab, nspace);
    }
}