// Program using typedef
#include <stdio.h>

typedef int myInt;

int main() {
    myInt x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("You entered: %d\n", x);
    return 0;
}
