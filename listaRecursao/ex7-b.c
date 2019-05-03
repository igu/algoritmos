#include <stdio.h>

int maiorArray(int inteiros[],int tamanho, int maior){
  if(tamanho == 0) return maior;
  else {
    if(inteiros[tamanho-1] > maior) maior = inteiros[tamanho-1];
    return maiorArray(inteiros,tamanho-1,maior);
  }
}

int main(void) {
  int tam, maior, i;
  printf("Digite o tamanho do array\n:");
  scanf("%d",&tam);
  int numeros[tam];
  printf("Digite os %dº elementos do array\n:",tam);
  for(i = 0; i < tam; i++){
    scanf("%d",&numeros[i]);
  }
  maior = maiorArray(numeros,tam,numeros[0]);
  printf("O maior número é: %d\n", maior);  
  return 0;
}
