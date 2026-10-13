#include <stdio.h>


int main()
{
    int zahl = 7;
    int cheats = -11;
    int versuch;
    int i;

    for (i = 1; i <= 3; i++)
    {
        printf("Versuch %d von 3\n", i);
        printf("Gesuchte Zahl liegt zwischen 1 und 10.\n");
        printf("Rate eine Zahl: ");
        scanf("%d", &versuch);

        if (versuch == zahl) // Wenn die Zahl richtig geraten wurde
        {
            printf("Richtig! Du hast gewonnen!\n");
            break;
        }
        if (versuch == cheats)
        {
            printf("Keine Versuche mehr.\n");
            printf("Die gesuchte Zahl war 7\n");
            break;
        }
        
        else if (versuch < zahl) // Wenn die Zahl groesser ist
        {
            printf("Die gesuchte Zahl ist groesser!.\n");
        }
        else // Wenn die Zahl kleiner ist
        {
            printf("Die gesuchte Zahl ist kleiner!.\n");
        }
    }

    if (i > 3) // Wenn maximale Anzahl an Versuchen erreicht ist
    {
        printf("Leider verloren! Die Zahl war %d.\n", zahl);
    }

    return 0;
}