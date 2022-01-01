// fonksiyon kullanarak sayını kuvvetinin bulunması

#include <stdio.h>

long power(int base, int n);

int main(int argc, char const *argv[])
{
    int num, pow;
    long result;

    printf("Sayı girin : ");
    scanf("%d", &num);

    printf("Kuvvet girin : ");
    scanf("%d", &pow);

    result = power(num, pow);

    printf("%d^%d = %li\n", num, pow, result);

    return 0;
}

long power(int base, int n) {
    long res = 1;

    for (int i = 0; i < n; i++) {
        res *= base;
    }

    return res;
}
