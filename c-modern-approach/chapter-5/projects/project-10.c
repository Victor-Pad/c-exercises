#include <stdio.h>

int main(void) {
    int grade;

    printf("Enter numerical grade: ");
    scanf_s("%d", &grade);

    if (grade > 100 || grade < 0) {
        printf("Invalid grade\n");
        return 0;
    }

    switch (grade / 10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Letter grade: F");
            break;
        case 6:
            printf("Letter grade: D");
            break;
        case 7:
            printf("Letter grade: C");
            break;
        case 8:
            printf("Letter grade: B");
            break;
        case 9:
        case 10:
            printf("Letter grade: A");
            break;
    }
}
