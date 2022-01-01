// 2 sayıyı topla (Z)

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x, y;

    printf("Birinci sayıyı giriniz : ");
    scanf("%lf", &x);

    printf("İkinci sayıyı giriniz : ");
    scanf("%lf", &y);

    printf("Toplam : %lf\n", (x+y));


    return 0;
}
