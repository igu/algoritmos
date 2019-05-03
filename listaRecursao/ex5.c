#include <stdio.h>

int main(void) {
  int tam, soma = 0, i;
  printf("Digite o tamanho do array\n:");
  scanf("%d",&tam);
  int numeros[tam];
  printf("Digite os %dº elementos do array\n:",tam);
  for(i = 0; i < tam; i++){
    scanf("%d",&numeros[i]);
  }
  for(i = 0; i < tam; i++){
    soma += numeros[i];
  }
  printf("A soma dos elementos é: %d\n", soma);  
  return 0;
}
