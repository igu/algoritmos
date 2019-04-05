#include <stdio.h>

int main(void) {
  int ma, me, n, i = 5;
  while(i--){
    scanf("%d",&n);
    if(i == 4) {
      ma = n;
      me = n;
    }else{
      if(ma<n) ma = n;
      if(me>n) me = n;
    }
  }
  printf("Maior: %d\nMenor: %d\n",ma,me);
  return 0;
}
