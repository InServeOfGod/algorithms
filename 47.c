// while döngüsü ile birlikte continue ve break kullanımı

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define MAX 255

int main(int argc, char const *argv[])
{
    char *c = (char*)malloc(sizeof(char) * MAX);

    while (true) {
        printf("bir şey yaz : ");
        fgets(c, MAX, stdin);

        /* sondaki '\n' işaretinden kurtulalım */
        c[strlen(c) - 1] = '\0';

        if (strcmp(c, "yazma") == 0) {
            break;
        }

        else {
            continue;
        }
    }
    return 0;
}
