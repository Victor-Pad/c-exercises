#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    int wins = 0, losses = 0;
    char play = 'y';
    srand((unsigned)time(NULL));

    while (play == 'y') {
        bool status = play_game();

        if (status) {
            printf("You win!");
            wins++;
        } else {
            printf("You lose!");
            losses++;
        }

        printf("\n\nPlay again? ");
        scanf_s(" %c", &play, 1);
    }

    printf("\nWins: %d  Losses: %d", wins, losses);

    return 0;
}

int roll_dice(void) {
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}

bool play_game(void) {
    int dice_roll = roll_dice();
    int point = dice_roll;
    printf("\nYou rolled: %d\n", dice_roll);

    if (dice_roll == 7 || dice_roll == 11)
        return true;
    else if (dice_roll == 2 || dice_roll == 3 || dice_roll == 12)
        return false;

    printf("Your point is: %d\n", point);

    for (;;) {
        dice_roll = roll_dice();
        printf("You rolled: %d\n", dice_roll);
        if (dice_roll == point)
            return true;
        else if (dice_roll == 7)
            return false;
    }
}
