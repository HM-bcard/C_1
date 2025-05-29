#include <stdio.h>


int main(void) {
    char name[100];  // buffer to store the name

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // read a line of input (safer than gets)

    printf("Hello, %s", name);  // print the greeting
    return 0;
}
