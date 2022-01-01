// bir elemanın aldığı ücret : elemanın çalıştığı saat * saat başına aldığı para 1000 tl ye eşit ise -100 tl vergi kesiliyor.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double hour, pay, sum;
    const double tax = 100, limit = 1000;

    printf("Çalıştığı saati giriniz : ");
    scanf("%lf", &hour);

    printf("Saat başına aldığı ücreti giriniz : ");
    scanf("%lf", &pay);

    sum = hour * pay;

    if (sum >= limit) {
        sum -= tax;
    }

    printf("İşçinin toplam kazandığı para miktarı : %lf\n", sum);

    return 0;
}
