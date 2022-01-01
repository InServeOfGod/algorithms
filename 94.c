// mükemmel sayı

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, div = 0;
    printf("Sayı girin : ");
    scanf("%d", &x);

    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            div += i;
        }
    }

    if (div == x) {
        puts("Girilen sayı mükemmel sayıdır.");
    }

    else {
        puts("Girilen sayı mükemmel sayı değildir.");
    }

    return 0;
}
