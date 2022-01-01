// bilgisayara girilen sayının asal sayı olup olmadığını bulan program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n, count = 0;
    printf("Sayı giriniz : ");
    scanf("%li", &n);

    for (long int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        puts("Sayı asal sayıdır.");
    }

    else {
        puts("Sayı asal sayı değildir.");
    }

    return 0;
}
