#include <stdio.h>

int main(void) {
  int tam, maior, i;
  printf("Digite o tamanho do array\n:");
  scanf("%d",&tam);
  int numeros[tam];
  printf("Digite os %dº elementos do array\n:",tam);
  for(i = 0; i < tam; i++){
    scanf("%d",&numeros[i]);
  }
  maior = numeros[0];
  for(i = 1; i < tam; i++){
    if(numeros[i] > maior) maior = numeros[i];
  }
  printf("O maior número é: %d\n", maior);  
  return 0;
}
