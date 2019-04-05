#include <stdio.h>

int main(void) {
  int d, m, a;
  scanf("%d %d %d", &d, &m, &a);
  if((a > 0 && (m >=1 && m <= 12))){
    if(m%2 || m == 8){
      if(d >= 1 && d <= 31)
        if(a > 0) printf("data valida\n");
    }else{
      if(m == 2){
        if(((a%100 != 0 && a%4 == 0) || a%400 == 0)){
          if(d >= 1 && d <= 29){
            printf("data valida\n");
          }else{
            printf("data invalida\n");
          }
        }else{
          if(d >= 1 && d <= 28){
            printf("data valida\n");
          }else{
            printf("data invalida\n");
          }
        }
      }else{
        if(d >= 1 && d <= 31){
          if(a > 0) printf("data valida\n");
        }else{
          printf("data invalida\n");
        }
      }
    }
  }else{
    printf("data invalida\n");
  }
  return 0;
}
