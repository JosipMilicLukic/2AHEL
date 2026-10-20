#include <stdio.h>


int main()
{
    const char secret = 'a';
    char guess;

    printf("buchstaben raten: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("ungueltige Eingabe\n");
        return 1;
    }

    if (guess == secret)
    {
        printf("du hast richtig erraten: %c\n", secret);
    } else
    {
        printf("du hast falsch erraten es ist nicht %c\n", guess);
    }
    
    return 0;
}