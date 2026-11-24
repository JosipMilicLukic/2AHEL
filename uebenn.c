#include <stdio.h>
#include <stdlib.h>


int strlen(char* wort) {
    int sz;
    for (; wort[sz] != '\0' ; sz++) {
        ;
    return sz;
    }
}

void dump(char* wort) {
    for (int i = 0; wort[i] != '\0' ; i++) {
    //printf(" %s ", wort);
        printf(" %c\n ", wort[i]);
    printf("\n");
    }
}

char* init(int sz, char c) {
    char* wort = malloc(sz + 1);
    for (int i = 0; i < sz ; i++) {
        wort[i] = c;
    }
    wort[sz] = '\0';
    return wort;
}

int main(int argc, char* argv[]) {
    char* wort = "Wort";
    //const int n = strlen(wort);
    //char* wort2[n];
    char* wort2 = init(strlen(wort), '?');



    dump(wort2);
    free(wort2);

    //for (int i = 0; wort2[i] != '\0'; i++) {
    //    wort2[i] = '_';
    //}

    return 0;
}
