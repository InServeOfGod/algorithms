// taban ve kuvvet değeri verilen sayının kuvvetini bulma

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int base, power, res = 1;

    printf("Sayı giriniz : ");
    scanf("%li", &base);

    printf("Kuvvet giriniz : ");
    scanf("%li", &power);

    for (int i = 0; i < power; i++) {
        res *= base;
    }

    printf("Sonuç : %li\n", res);

    return 0;
}
