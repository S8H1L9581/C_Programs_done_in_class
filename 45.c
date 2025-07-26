#include <stdio.h>
int main() {
	int i , j;
    int marks[5][3];
    float average[5];
    int top_ind = 0;
    float highest = 0.0;
    printf("Enter marks for 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Enter marks for Math: ");
        scanf("%d", &marks[i][0]);
        printf("Enter marks for Physics: ");
        scanf("%d", &marks[i][1]);
        printf("Enter marks for CS: ");
        scanf("%d", &marks[i][2]);
        printf("\n");
    }
    for(i = 0; i < 5; i++) {
        int total = 0;
        for(j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        average[i] = total / 3.0;
        if(average[i] > highest) {
            highest = average[i];
            top_ind = i;
        }
    }
    for (i = 0; i < 5; i++) {
        printf("Student %d: %.2f\n", i + 1, average[i]);
    }
    printf("Topper: Student %d with an average of %.2f\n", top_ind + 1, highest);
   
    return 0;
}
