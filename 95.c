// Girilen bir sayının asal çarpanlarını bulma

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Sayı girin : ");
    scanf("%d", &n);

    for (int i = 2; n > 1; i++) {
        while (n % i == 0) {
            n /= i;
            printf("%d\t", i);
        }
    }

    puts("");


    return 0;
}
