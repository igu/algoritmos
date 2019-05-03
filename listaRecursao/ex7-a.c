#include <stdio.h>

int somaArray(int inteiros[], int tamanho, int soma){
  if(tamanho == 0) return soma+inteiros[tamanho];
  else return somaArray(inteiros,tamanho-1,soma+inteiros[tamanho]);
}

int main(void) {
  int tam, soma = 0, i;
  printf("Digite o tamanho do array\n:");
  scanf("%d",&tam);
  int numeros[tam];
  printf("Digite os %dº elementos do array\n:",tam--);
  for(i = 0; i <= tam; i++) scanf("%d",&numeros[i]);
  soma = somaArray(numeros,tam,0);
  printf("A soma dos elementos é: %d\n", soma);  
  return 0;
}
