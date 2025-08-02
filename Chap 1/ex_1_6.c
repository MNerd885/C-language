#include <stdio.h>


int main()
{
    int c;

    // getchar() legge i caratteri ASCII, per questo c è un intero
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}