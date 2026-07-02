#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name[50];
    int heads = 0, tails = 0;

    printf("Who are you?\n> ");
    scanf("%49s", name);
    printf("Hello, %s!\n", name);

    printf("Tossing a coin...\n");
    srand((unsigned int)time(NULL));

    for (int i = 1; i <= 3; i++) {
        if (rand() % 2 == 0) {
            printf("Round %d: Heads\n", i);
            heads++;
        } else {
            printf("Round %d: Tails\n", i);
            tails++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads, tails);

    if (heads > tails) {
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }

    return 0;
}