#include <stdio.h>

// Se una parola è una stringa, allora ogni qualvolta che incontro ' ' o \t devo andare a capo

/*Visualizzazione parole una per riga*/

int main(void) {
  int c;

  // Grazie a Ctrl+D riesco a far terminare il loop
  // Ctrl+D ==> carattere di controllo EOT (End Of Transmission), 
  // in ASCII = 4
  
  while ((c = getchar()) != EOF) { // Il testo che vedo inizialmente su terminale è la getchar() che prende tutti caratteri che immetto da tastiera     
     
    putchar(c); // Visualizzo tutto ciò che getchar() prende in input
    if (c == ' ' || c == '\t') {
      putchar('\n');
    }
      
  }
}
