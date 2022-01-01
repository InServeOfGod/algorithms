//3 yazılı notu giriliyor 50 den fazla ise geçtiniz değilse kaldınız yazıyor...

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x, y, z, average;

    printf("İlk yazılı notunu giriniz : ");
    scanf("%lf", &x);

    printf("İkinci yazılı notunu giriniz : ");
    scanf("%lf", &y);

    printf("Üçüncü yazılı notunu giriniz : ");
    scanf("%lf", &z);

    if ((x+y+z) == 0) {
        average = 0;
    }

    else {
        average = (x+y+z) / 3;
    }
    
    if (average > 50) {
        puts("Geçtiniz.");
    }

    else {
        puts("Kaldınız.");
    }

    return 0;
}

