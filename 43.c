//CH.SC.U4CSE24039
#include <stdio.h>
int main() {
    char upperChar;
    printf("Enter a capital letter: ");
    scanf(" %c", &upperChar); // Added a space before %c to consume leftover newline
    if (upperChar >= 'A' && upperChar <= 'Z') {
        char lowerChar = upperChar + 32;
        printf("Lowercase: %c\n", lowerChar);
    } else {
        printf("Please enter a valid capital letter\n");
    }
    return 0;
}
