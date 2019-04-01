#include <stdio.h>

int main(void) {
  int a1[10], i, j, k, num, aux;
  for(i = 0; i < 10; i++){
    scanf("%d",&num);
    if(!i) a1[i] = num;
    else{
      a1[i] = num;
      for(j = 0; j < i; j++){
        for(k = 0; k < i-1; k++){
          if(a1[k] > a1[k+1]){
            aux = a1[k];
            a1[k] = a1[k+1];
            a1[k+1] = aux;
          }
        }
      }
    }
  }
  printf("\n");
  for(i = 0; i < 10; i++){
    printf("%d\n",a1[i]);
  } 
  return 0;
}
