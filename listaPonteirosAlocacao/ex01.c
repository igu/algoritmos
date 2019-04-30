#include <stdio.h>
#include <stdlib.h>

int* uniao(int *x1, int *x2, int n1, int n2, int *qtd){
  int *uni, i, j, dif = (n1+n2);
  if(n1 > n2){
    for(i = 0; i < n2; i++){
      for(j = 0; j < n1; j++){
        if(x2[i] == x1[j]){
          dif--;
        }
      }
    }
    printf("Dif 1 = %d\n", dif);
  }else{
    for(i = 0; i < n1; i++){
      for(j = 0; j < n2; j++){
        if(x1[i] == x2[j]){
          dif--;
        }
      }
    }
  }
  uni = (int*) malloc(sizeof(int) * dif);
  return uni;
}


int main(void) {
  int *x1, *x2, *x3, n1, n2, qtdX1, qtdX2, qtdT, i;
  
  printf("Digite a quantidade elementos em X1\n");
  scanf("%d",&qtdX1);
  x1 = (int*) malloc(sizeof(int) * qtdX1);
  printf("Digite os ELEMENTOS de X1\n");
  for(i = 0; i < qtdX1; i++){
    scanf("%d",&x1[i]);
  }
  printf("Digite a quantidade elementos em X2\n");
  scanf("%d",&qtdX2);
  x2 = (int*) malloc(sizeof(int) * qtdX2);
  printf("Digite os ELEMENTOS de X2\n");
  for(i = 0; i < qtdX2; i++){
    scanf("%d",&x2[i]);
  }

  x3 = uniao(x1, x2, qtdX1, qtdX2, &qtdT);


  return 0;
}
