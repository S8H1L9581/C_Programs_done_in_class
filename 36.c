//CH.SC.U4CSE24039
#include <stdio.h>
int main() {
    int i, j, k;
    printf("For Loop with 3 Initializers:\n");
    for (i = 1, j = 10, k = 2; i <= 5 && j >= 6; i++,
        printf("i = %d, j = %d, k = %d\n", i, j, k));
    return 0;
}
