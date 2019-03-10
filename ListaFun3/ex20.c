#include <stdio.h>

int main(void) {
  float n1, n2; 
  int apv = 0, rep = 0;
  while(scanf("%f %f",&n1,&n2), n1 != -1 || n2 != -1){
    ((((n1+n2)/2.0) >= 6.0) ? apv++ : rep++);
  }
  printf("App :: %d\nRep :: %d\n", apv, rep);
  return 0;
}
