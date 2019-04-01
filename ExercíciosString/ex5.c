#include <stdio.h>
#include <string.h>

int main(void) {
  char frase[80];
  int tam, i, eh;
  printf("\n");
  gets(frase);
  tam = strlen(frase);
  char palidromo[tam];
  for(i = 0; i < tam; i++)
    palidromo[i] = frase[tam-(i+1)];
  if(!(strcmp(frase,palidromo))) printf("eh palindromo");
  else printf("n eh palindromo");
  return 0;
}
