//CH.SC.U4CSE24039
#include <stdio.h>
int main() {
    int num, original, sum = 0, r;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        r = num % 10;
        sum += r * r * r;
        num /= 10;
    }
    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    return 0;
}
