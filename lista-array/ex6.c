#include <stdio.h>

int main(void) {
  int n[10], indice = 0, maior, i;
  for(i = 0; i < 10; i++){
    scanf("%d",&n[i]);
    if(!i) maior = n[i];
    else 
      if(maior < n[i]){
        indice = i;
        maior = n[i];
      }
  }
  printf("Maior elemento = %d\nIndice = %d\n", maior, indice);
  return 0;
}
