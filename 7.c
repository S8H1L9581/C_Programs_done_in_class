// Program to show format specifiers
#include <stdio.h>

int main() {
    int x; float y; char z;
    printf("Enter int, float, char: ");
    scanf("%d %f %c", &x, &y, &z);
    printf("%d %.2f %c\n", x, y, z);
    return 0;
}
