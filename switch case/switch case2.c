/*Design a program that calculates the grade for a student based on their test score. The program should take
the test score as input and use a switch-case statement to determine the grade (A, B, C, D, or F) according to a
predefined grading scale.*/
#include <stdio.h>

int main() {
    int score, gradeGroup;

    printf("Enter test score (0-100): ");
    scanf("%d", &score);

    // Validate score
    if (score < 0 || score > 100) {
        printf("Invalid score! Must be between 0 and 100.");
        return 0;
    }

    // Convert score to groups (90–100 = 9 & 10 → A, 80–89 = 8 → B, etc.)
    gradeGroup = score / 10;

    switch (gradeGroup) {
        case 10: // For score = 100
        case 9:
            printf("Grade: A");
            break;
        case 8:
            printf("Grade: B");
            break;
        case 7:
            printf("Grade: C");
            break;
        case 6:
            printf("Grade: D");
            break;
        default:
            printf("Grade: F");
    }

    return 0;
}
