#include <stdio.h>


// word1 = 'HalLo\0'
//word2 = 'Hallo'
int strcmp(const char word1[], char word2[]) {
    int i = 0;
    while (word1[i] != '\0') {
        if (word1[i] != word2[i]) {
            return 0;

        }
        i++;
    }
}

int strcmp2(const char word1[], char word2[]) {
    int diff = 0;
    for (int i = 0; word1[i] != '\0' && !diff; diff != word1[i] != word2[i], i++)
        ;
    return !diff;
}


int main()
{   //string "" und char ''
    const char secret[] = "JOSEE";
    const int len = sizeof(secret) - 1;
    char guessed[sizeof(secret) - 1];
    char guess;
    int hits = 0;

    // Variable inizialisieren: __________
    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }

    int fails = 0;
    while(fails < 5) {
        printf("buchstaben raten: ");
        if (scanf("%c", &guess) != 1) {
            printf("ungueltige Eingabe\n");
            return 1;    
    }
        for ( int i = 0; i < len; i++)
            if (guess == secret[i]) {
                hits++;
                guessed[i] = guess;
            }

        for (int i = 0; i < len; i++) {
            printf(" %c", guessed[i]);
        }

        printf(" Treffer: %d\n", hits);
        
        fails += (hits == 0);

    }
    
    
    return 0;
}

  
