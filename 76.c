// 10 adet sayının toplamı

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int sum = 0, n;

    for (int i = 0; i < 10; i++) {
        printf("Sayı girin : ");
        scanf("%li", &n);
        sum += n;
    }

    printf("Sayıların toplamı : %li\n", sum);

    return 0;
}
