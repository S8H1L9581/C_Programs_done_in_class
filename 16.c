// Program using gets to read a string
#include <stdio.h>

int main() {
    char name[20];
    printf("Enter your name: ");
    gets(name);
    printf("Hello, %s\n", name);
    return 0;
}
