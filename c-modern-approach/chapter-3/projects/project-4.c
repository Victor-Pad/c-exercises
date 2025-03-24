#include <stdio.h>

int main(void) {
    int area, prefix, line;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf_s("(%d) %d-%d", &area, &prefix, &line);

    printf("You entered %d.%d.%d", area, prefix, line);
}
