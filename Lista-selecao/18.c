#include <stdio.h>

int main(void) {
  int d, m, a;
  scanf("%d %d %d", &d, &m, &a);
  if((a > 0 && (m >=1 && m <= 12))){
    if(m%2 || m == 8){
      if(d >= 1 && d <= 31){
        if(d == 31){
          d = 1;
          m++;
        }else d++;
        printf("Data amanhã: %d/%d/%d\n", d, m, a);
      }else printf("data invalida\n");
    }else{
      if(m == 2){
        if(((a%100 != 0 && a%4 == 0) || a%400 == 0)){
          if(d >= 1 && d <= 29){
            if(d == 29){
              m++;
              d = 1;
            }else d++;
            printf("Data amanhã: %d/%d/%d\n", d, m, a);
          }else printf("data invalida\n");
        }else{
          if(d >= 1 && d <= 28){
            if(d == 28){
              m++;
              d = 1;
            }else d++;
            printf("Data amanhã: %d/%d/%d\n", d, m, a);
          }else{
            printf("data invalida\n");
          }
        }
      }else{
        if(d >= 1 && d <= 31){
          if(m == 12){
            if(d == 31){
              a++;
              d = 1;
            }else d++;
            printf("Data amanhã: %d/%d/%d\n", d, m, a);
          }else{
            if(d == 31){
              d = 1;
              m++;
            }else d++;
            printf("Data amanhã: %d/%d/%d\n", d, m, a);
          }
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
