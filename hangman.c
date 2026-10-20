#include <stdio.h>


int main()
{
    const char secret = 'X';
    const char guess = 'Y';

    if (guess == secret)
    {
        printf("du hast richtig erraten: %c\n", secret);
    }
    else
    {
        printf("du hast falsch erraten");
    }
    
    return 0;
}