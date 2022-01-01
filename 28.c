// vize ve final not ortalamaları

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double vize, final, average;

    printf("Vize notunuzu giriniz : ");
    scanf("%lf", &vize);

    printf("Final notunuzu giriniz : ");
    scanf("%lf", &final);

    average = (vize * 40 / 100) + (final * 60 / 100);

    if (average >= 60) {
        printf("Geçtiniz.\n");
    }

    else {
        printf("Kaldınız.\n");
    }


    return 0;
}
