// sayı tahmin oyunu

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int n = rand() % 100;
    int x;

    for(int i = 0; i < 3; i++) {
        printf("Sayı girin : ");
        scanf("%d", &x);

        if (x == n) {
            puts("Bildiniz!");
            return 0;
        }

        else if (x < n) {
            puts("Daha büyük sayı giriniz.");
        }

        else if (x > n) {
            puts("Daha küçük sayı giriniz.");
        }
    }

    puts("Bilemediniz!");
    printf("Sayı %d olmalıydı.\n", n);

    return 0;
}
