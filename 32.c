//CH.SC.U4CSE24039
#include <stdio.h>
int main() {
    int low, high, i, flag, num;
    printf("Enter range (low high): ");
    scanf("%d %d", &low, &high);
    for (num = low; num <= high; num++) {
        flag = 1;
        if (num < 2) continue;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", num);
    }
    return 0;
}
