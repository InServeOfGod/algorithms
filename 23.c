// bilgisayar sürekli girilen sayıların durma koşulu verildiğinde en büyük olanını bulan program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n = 0, great = n;

    goto begin;

    compare:
        if (n == 0) {
            goto end;
        }

        else if (n > great) {
            great = n;
        }

    begin:
        printf("Sayı girin (durmak için 0 girin) : ");
        scanf("%li", &n);

        if (n == 0) {
            goto end;
        }

        goto compare;

    end:
        printf("Girilen sayıların en büyüğü : %li\n", great);

    return 0;
}
