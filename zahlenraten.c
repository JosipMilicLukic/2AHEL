#include <stdio.h>

int main()
{
    int a;
    int K = 50;
    printf("Gib eine Zahl ein: ");
    scanf("%d", &a);

    if(a == K)
    {
        printf("a ist gleich gross wie K.\n");
    }

    if (a>K)
    {
        printf("a ist grosser als wie K.\n");
    }
    if (a<K)
    {
        printf("a ist kleiner als wie K.\n");
    }

    return 0;
}