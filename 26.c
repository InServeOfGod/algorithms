// bir elemanın aldığı ücret : elemanın çalıştığı saat * saat başına aldığı para 1000 tl ye eşit ise -%10 vergi kesiliyor.
// 8 saatten fazla mesai yapılırsa kazandığı para mesai saatine başına iki katınadır.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    const double tax = 10, limit = 1000, shifting_hour = 8;
    double hour, pay, shift, sum;

    printf("Çalıştığı saati giriniz : ");
    scanf("%lf", &hour);

    printf("Saat başına aldığı ücreti giriniz : ");
    scanf("%lf", &pay);

    if (hour > shifting_hour) {
        shift = hour - shifting_hour;
        hour = 8;
    }

    sum = hour * pay;
    sum += shift * pay * 2;

    if (sum >= limit) {
        sum -= sum * tax / 100;
    }

    printf("İşçinin toplam kazandığı para miktarı : %lf\n", sum);

    return 0;
}
