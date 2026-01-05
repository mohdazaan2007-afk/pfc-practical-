#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;

    // Step 1 & 2: Read marks
    printf("Enter marks for 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // Step 3: Calculate total
    total = m1 + m2 + m3 + m4 + m5;

    // Step 4: Calculate percentage
    percentage = (total / 500.0) * 100;

    // Step 5–8: Assign grade using nested if-else
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 75) {
        grade = 'B';
    } else if (percentage >= 60) {
        grade = 'C';
    } else if (percentage >= 40) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Step 9 & 10: Print result
    printf("\nTotal Marks: %d", total);
    printf("\nPercentage: %.2f%%", percentage);
    printf("\nGrade: %c", grade);

    return 0;
}
