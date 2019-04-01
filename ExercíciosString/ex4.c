#include <stdio.h>
#include <string.h>

int main(void) {
  char frase[80], tam, qtd = 0, i;
  printf("\n");
  gets(frase);
  tam = strlen(frase);
  for(i = 0; i < tam; i++)
    if(((frase[i] == 'a' || frase[i] == 'A') || (frase[i] == 'e' || frase[i] == 'E')) || (((frase[i] == 'i' || frase[i] == 'I') || (frase[i] == 'o' || frase[i] == 'O')) || (frase[i] == 'u' || frase[i] == 'U'))) qtd++;
  printf("Quantidade de vogais: %d\n",qtd);
  return 0;
}
