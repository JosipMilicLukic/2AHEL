#include <stdio.h>


int main()
{
    const char secret[] = "JOSEE";
    char guess;

    printf("buchstaben raten: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("ungueltige Eingabe\n");
        return 1;
    }

    int hits = 0;
    for (int i = 0; i < (sizeof(secret) / sizeof(char)) -1; i++)
    {
        if ((secret[i]) == guess){
        hits++;

    }
    }
    
    printf("hits: %d", hits);
    
    return 0;
}