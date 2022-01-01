// bilgisayara sürekli girilen sayıların durma koşulu verildiğinde toplamlarını döngü ile bulan program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n, sum = 0;

    while (n != 0) {
        printf("Sayı girin (durmak için 0 girin) : ");
        scanf("%li", &n);

        if (n == 0) {
            printf("Girilen sayıların toplamı : %li\n", sum);
        }

        sum += n;
    }

    return 0;
}
