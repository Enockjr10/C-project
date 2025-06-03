
#include <stdio.h>

#define MAX_STUDENTS 100

int main() {
    int scores[MAX_STUDENTS];
    int n, i;
    int total = 0, highest = 0, lowest = 100;
    float average;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter score for student %d: ", i + 1);
        scanf("%d", &scores[i]);

        total += scores[i];

        if (scores[i] > highest)
            highest = scores[i];
        if (scores[i] < lowest)
            lowest = scores[i];
    }

    average = (float)total / n;

    printf("\n--- Grade Analysis ---\n");
    printf("Highest Score: %d\n", highest);
    printf("Lowest Score: %d\n", lowest);
    printf("Average Score: %.2f\n", average);

    if (average > 75)
        printf("Performance: Good performance\n");
    else if (average >= 50)
        printf("Performance: Average performance\n");
    else
        printf("Performance: Poor performance\n");

    return 0;
}
