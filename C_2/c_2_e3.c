#include <stdio.h>

int main(void)
{
  char name[100];

  printf("what's your name?\n");
  fgets(name,sizeof(name),stdin);

  printf("Hello, %s",name);
  return 0;
}
