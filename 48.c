// while döngüsü ile girilen sayıların durma koşulu verildiğinde en küçüğünü ve en büyüğünü bulan program

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    long int less = 0, great = 0, n;

    while (true) {
        printf("sayı giriniz(durmak için 0'a basın) : ");
        scanf("%li", &n);

        if (n < less) {
            less = n;
        }

        else if (n > great) {
            great = n;
        }

        if (n == 0) {
            break;
        }
    }

    printf("Girilen sayıların en küçüğü : %li\n", less);
    printf("Girilen sayıların en büyüğü : %li\n", great);

    return 0;
}
