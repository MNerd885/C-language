#include <stdio.h>

//  Visualizzo un istogramma della lunghezza delle parole contenute nel testo di ingresso
/*  Per farlo devo innnanzitutto contare quante parole ci sono nel testo in ingresso
 *  dopo di che per ogni parola, in base a quante ci sono devo tracciare un istogramma con il numero di parole nella riga
 */

#define IN 1 // all'interno di una parola
#define OUT 0 // all'esterno di una parola

int main(void) {
  int c, state, nword[20]; // nword conta il numero di parole per riga
  int nrighe;
  
  // Init var
  state = OUT;
  nrighe = 0;

  for (int i = 0; i < 20; i++) {
    nword[i] = 0;
  }
  
  while ((c = getchar()) != EOF) { // Il testo che vedo inizialmente su terminale è la getchar() che prende tutti caratteri che immetto da tastiera     
    
    if (c == '\n') {
      nrighe++;
    }
    // Conteggio parole
    if (c == ' ' || c == '\n'|| c == '\t') {
      state = OUT;

    } else if (state == OUT) {
      state = IN;
      nword[nrighe]++;
    }
  }

  // Stampa istogramma
  for (int i = 0; i < nrighe; i++) {
    printf("riga %d: \t", i+1);
    for (int j = 0; j < nword[i]; j++) {
      printf("=");
    }
    printf("\n");
  }

}
