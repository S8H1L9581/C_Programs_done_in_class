// Program to demonstrate goto
#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x < 0)
        goto negative;
    printf("Positive number\n");
    return 0;
negative:
    printf("Negative number\n");
}
