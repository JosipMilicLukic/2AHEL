#include <stdio.h>


int main()
{
    const char secret[] = "JOSEE";
    const int len = sizeof(secret) - 1;
    char guessed[sizeof(secret) - 1];
    char guess;
    int hits = 0;

    // Variable inizialisieren: __________
    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }

    printf("buchstaben raten: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("ungueltige Eingabe\n");
        return 1;
    }

    for (int i = 0; i < len -1; i++)
    {
        if (guess == (secret[i])){
        hits++;
        guessed[i] = guess;
    }
    }
    
    for (int i = 0; i< len; i++) {
        printf("%c", guessed[i]);
    }


    printf("hits: %d", hits);
    
    return 0;
}