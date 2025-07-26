// Program using puts to print string
#include <stdio.h>

int main() {
    char str[30];
    printf("Enter a message: ");
    gets(str);
    puts("You entered:");
    puts(str);
    return 0;
}
