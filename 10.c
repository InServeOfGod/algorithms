// birinci sayının %20 si + ikinci sayının %10 toplamı

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double sum, a, b;

    printf("Birinci sayıyı giriniz : ");
    scanf("%lf", &a);

    printf("İkinci sayıyı giriniz : ");
    scanf("%lf", &b);

    if (a == 0 && b == 0) {
        sum = 0;
    }

    else if (a == 0) {
        sum = (b * 10 / 100);
    }

    else if (b == 0) {
        sum = (a * 20 / 100);
    }

    else {
        sum = (a * 20 / 100) + (b * 10 / 100);
    }

    printf("birinci sayının %%20 si + ikinci sayının %%10 toplamı = %lf\n", sum);

    return 0;
}
