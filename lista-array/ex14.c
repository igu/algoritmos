#include <stdio.h>

int main(void) {
  int a1[50], i, j, total = 50;
  for(i = 0; i < 50; i++)
    scanf("%d", &a1[i]);
  for(i = 0; i < 50; i++){
    for(j = 0; j < 50; j++){
      if(a1[i] == a1[j]){
        total--;
      }
    }
  }
  printf("Elementos diferentes: %d\n", total);
  return 0;
}
