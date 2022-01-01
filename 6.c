// sayı ve oran değeri hesaplama

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x, y, percentage;

    printf("Sayı giriniz : ");
    scanf("%lf", &x);

    printf("Oran giriniz : ");
    scanf("%lf", &y);

    if (y != 0) {
        percentage = x * y / 100;
    }

    else {
        percentage = 0;
    }

    printf("%lf sayısının yüzde %lf değeri = %lf\n", x, y, percentage);


    return 0;
}
