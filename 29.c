//CH.SC.U4CSE24039
#include <stdio.h>
int isPalindrome(int n) {
    int rev = 0, temp = n, r;
    while (n) {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    return temp == rev;
}
int main() {
    int start, end, i;
    printf("Enter range: ");
    scanf("%d %d", &start, &end);
    for (i = start; i <= end; i++) {
        if (isPalindrome(i)) printf("%d ", i);
    }
    return 0;
}
