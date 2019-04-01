#include <stdio.h>


int abs(int a){
  if(a > 0) return a;
  else return -a;
}
int main(void) {
  int a1[20], i, dif, index1, index2;
  for(i = 0; i < 20; i++)
    scanf("%d", &a1[i]);
  dif = abs(a1[0]-a1[1]);
  index1 = 0;
  index2 = 1;
  for(i = 1; i < 19; i++){
    if(abs(a1[i]-a1[i+1]) > dif){
      dif = abs(a1[i]-a1[i+1]);
      index1 = i;
      index2 = i+1;
    } 
  }
  printf("Maior diferença: %d\nIndice 1: %d\nIndice 2:%d\n", dif, index1, index2);
  return 0;
}
