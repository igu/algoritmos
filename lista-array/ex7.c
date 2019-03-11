#include <stdio.h>

int main(void) {
  int n[10], indMaior = 0, indMenor = 0, menor, maior, i;
  for(i = 0; i < 10; i++){
    scanf("%d",&n[i]);
    if(!i){
      maior = n[i];
      menor = n[i];
    }else{ 
      if(maior < n[i]){
        indMaior = i;
        maior = n[i];
      }
      if(menor > n[i]){
        indMenor = i;
        menor = n[i];
      }
    }
  }
  printf("Maior elemento = %d\nIndice do Maior = %d\nMenor elemento = %d\nIndice do Menor = %d\n", maior, indMaior, menor, indMenor);
  return 0;
}
