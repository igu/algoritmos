#include <stdio.h>

int main(void) {
  int a1[50], i, j, aux;
  for(i = 0; i < 50; i++)
    scanf("%d",&a1[i]);
  for(i = 0; i < 50; i++){
    for(j = 0; j < 49; j++){
      if(a1[j] > a1[j+1]){
        aux = a1[j];
        a1[j] = a1[j+1];
        a1[j+1] = aux;
      }
    }
  }
  printf("ordenando...\n");
  for(i = 0; i < 50; i++){
    printf("%d\n",a1[i]);
  } 
  return 0;
}
