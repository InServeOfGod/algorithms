// bilgisayara sürekli girilen sayıların durma koşulu verildiğinde çift ve tek sayıların toplamlarını ayrı ayrı döngü ile bulan program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n = 1, sumEven = 0, sumOdd = 0;

    while (n != 0) {
        printf("Sayı girin (durmak için 0 girin) : ");
        scanf("%li", &n);

        if (n == 0) {
            printf("Girilen çift sayıların toplamı : %li\n", sumEven);
            printf("Girilen tek sayıların toplamı : %li\n", sumOdd);
        }

        if (n %2 == 0) {
            sumEven += n;
        }

        else {
            sumOdd += n;
        }
    }

    return 0;
}
