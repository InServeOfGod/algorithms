// 2 sayı +  4 işlem

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x, y;
    double div;

    printf("Birinci sayıyı giriniz : ");
    scanf("%lf", &x);

    printf("İkinci sayıyı giriniz : ");
    scanf("%lf", &y);

    printf("Toplama : %lf\n", (x+y));
    printf("Çıkarma : %lf\n", (x-y));
    printf("Çarpma : %lf\n", (x*y));

    /* sayılar 0 ile bölünemez */
    if (x != 0) {
        div = (x/y);
    } else {
        div = 0;
    }

    printf("Bölme : %lf\n", div);

    return 0;
}
