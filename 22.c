// bilgisayar sürekli girilen sayıların durma koşulu verildiğinde toplamlarını bulan program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n = 0, sum = 0;

    goto begin;

    add:
        sum += n;

    begin:
        printf("Sayı girin (durmak için 0 girin) : ");
        scanf("%li", &n);

        if (n == 0) {
            goto end;
        }

        goto add;

    end:
        printf("Girilen sayıların toplamı : %li\n", sum);

    return 0;
}
