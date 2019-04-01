#include <stdio.h>
#include <string.h>

int main(void) {
  char string[80];
  int i;
  printf("\n");
  gets(string);
  for(i = 0; i < strlen(string); i++)
    if(string[i] >= 'a' && string[i] <= 'z') string[i] = string[i] - 32;
  printf("%s\n",string);
  return 0;
}
