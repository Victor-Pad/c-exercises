#include <stdio.h>

int main(void) {
    float students[5] = {0.0}, table[5][5] = {0.0};
    float grade, average, sum = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("Enter 5 quiz grades for student #%d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf_s("%f", &grade);
            table[i][j] = grade;
        }
    }

    // Compute total score
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            sum += table[i][j];
        }
        students[i] = sum;
        sum = 0.0;
    }

    // Avg. per student
    printf("Average per student: \n");
    for (int i = 0; i < 5; i++) {
        average = students[i] / 5;
        printf("Average Grade for student #%d: %.2f\n", i + 1, average);
    }

    // Avg. Score per Quiz
    printf("Average per Quiz: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            average = table[j][i] / 5;
            printf("Average Grade for Quiz#%d: %.2f\n", i + 1, average);
        }
    }

    // Highest score
    float highest = table[0][0];
    printf("Highest Grade per Quiz: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (highest < table[j][i])
                highest = table[j][i];
        }
        printf("Highest Grade for Quiz#%d: %.2f\n", i + 1, highest);
    }

    // Lowest score
    float lowest = table[0][0];
    printf("Lowest Grade per Quiz: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (lowest > table[j][i])
                lowest = table[j][i];
        }
        printf("Highest Grade for Quiz#%d: %.2f\n", i + 1, lowest);
    }
}
