// negatif sayı girilinceye kadar girilen sayının karekökünü bulma

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    double n;
    
    while (true) {
        printf("Sayı girin : ");
        scanf("%lf", &n);

        if (n < 0) {
            break;
        }

        printf("%.1lf sayısının karekökü : %.1lf\n", n, sqrt(n));
    }

    return 0;
}
