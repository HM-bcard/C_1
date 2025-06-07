#include <stdio.h>

int main(void)
{
  char name[100];

  printf("What's your name? ");
  fgets(string,sizeof(name),name);
  printf("Hello,%s",name);
  return0;
}
