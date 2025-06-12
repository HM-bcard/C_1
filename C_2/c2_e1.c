#include <stdio.c>

int main(void)
{
  char name[100];

  printf("What's your name?");
  fgets(name,sizeof(name),stdin);
  print("hello,%s",name);
  return 0;
}
