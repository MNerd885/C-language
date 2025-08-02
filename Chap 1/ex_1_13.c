#include <stdio.h>

/*Visualizzo un istogramma della lunghezza delle parole contenute nel testo di ingresso*/

int main(void) {
  int c, i, nwhite, nother;
  int ndigit[10];
  
  // Init var
  nwhite = nother = 0;

  for (i = 0; i < 10; i++) {
    ndigit[i] = 0;
  }
  
  while ((c = getchar()) != EOF) { // Il testo che vedo inizialmente su terminale è la getchar() che prende tutti caratteri che immetto da tastiera     
    
    if (c > '0' && c <= '9') {
      ndigit[c-'0']++;
    } else if (c == ' ' || c == '\n' || c == '\t') {
      nwhite++;
    } else {
      nother++;
    }
  }

  printf("cifre = ");
  
  for (i=0; i<10; i++) {
    printf(" %d", ndigit[i]);
  }

  printf(", spazi bianchi = %d, altri = %d ", nwhite, nother);



}
