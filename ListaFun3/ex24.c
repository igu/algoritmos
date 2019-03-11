#include <stdio.h>

int main(void) {
  int n, i, asw = 0, a;
  scanf("%d",&n);
  while(n--){
    scanf("%d",&a);
    for(i = 2; i < a; i++) if(!(a%i)) i = a;
    if(i <= a) asw++;
  }
  printf("Qtd de primos :: %d\n", asw);
  return 0;
}
