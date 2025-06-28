#include <stdio.h>

void print_row(int n);


int main(void)
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        print_row(n);
    }
    printf("\n");
}































void print_row(int n)//single row
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
