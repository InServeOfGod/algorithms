// bilgisayara sürekli girilen sayıların durma koşulu verildiğinde çarpımlarını döngü bulan program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n, res = 1;

    while (n != 0) {
        printf("Sayı girin (durmak için 0 girin) : ");
        scanf("%li", &n);

        if (n == 0) {
            printf("Girilen sayıların çarpımı : %li\n", res);
        }

        res *= n;
    }

    return 0;
}
