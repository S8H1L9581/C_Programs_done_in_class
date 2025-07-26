#include <stdio.h>
int main() {
	int i , j;
    int scores[5][11];
    int total[5];
    int high_score_match = 0;
    int high_score = 0;
    for (i = 0; i < 5; i++) {
        printf("Match %d\n", i + 1);
        total[i] = 0;
        for (j = 0; j < 11; j++) {
            printf("Enter score for Player %d: ", j + 1);
            scanf("%d", &scores[i][j]);
            total[i] += scores[i][j];
        }
        printf("\n");
    }
    printf("Scores of players :\n");
    for (i = 0; i < 5; i++) {
        printf("Match %d: ", i + 1);
        for (j = 0; j < 11; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("Total Score: %d\n", total[i]);
        if (total[i] > high_score) {
            high_score = total[i];
            high_score_match = i;
        }
    }
    printf("\nMatch with the highest score: Match %d with a total score of %d\n", high_score_match + 1, high_score);

    return 0;
}
