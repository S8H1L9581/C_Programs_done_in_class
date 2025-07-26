//CH.SC.U4CSE24039
#include <stdio.h>
int main() {
    int n, rev = 0, temp, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    if (temp == rev)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
    return 0;
}
