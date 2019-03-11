#include <stdio.h>

int main(void) {
  int n[10], i, indice = 0, maior, aux;
  for(i = 0; i < 10; i++){
    scanf("%d",&n[i]);
    if(!i) maior = n[i];
    else{
      if(maior < n[i]){
        indice = i;
        maior = n[i];
      }
    }
  }
  printf("Indice do maior elemento: %d\nMaior elemento: %d\n",indice,maior);
  aux = n[indice];
  n[indice] = n[9];
  n[9] = n[indice];
  printf("Valor do ultimo indice: %d\n",n[indice]);
  return 0;
}
