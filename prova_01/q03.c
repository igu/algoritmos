#include <stdio.h>

int main(void) {
  int i = 0, maior, menor, num[10];
  for(; i < 10;)
    scanf("%d",&num[i++]);
  maior = num[0];
  menor = maior;
  for(i = 1; i < 10; i++){
    if(num[i] > maior) maior = num[i];
    else
      if(menor > num[i]) menor = num[i];
  }
  printf("Maior = %d\nMenor = %d\n",maior,menor);
  return 0;
}
