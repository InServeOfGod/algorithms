// sayının kübü

#include <stdio.h>

double cube (double n);

int main(int argc, char const *argv[])
{
    double num;

    printf("Sayı giriniz : ");
    scanf("%lf", &num);

    printf("Sayının kübü : %lf\n", cube(num));


    return 0;
}

double cube (double n) {
    return n * n * n;
}