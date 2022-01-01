// bilgisayara sürekli girilen pozitif sayıların durma koşulu verildiğinde en büyük olanını döngü ile bulan program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned long int n, great = 0;

    while (n != 0){
        printf("Sayı girin (durmak için 0 girin) : ");
        scanf("%li", &n);

        if (n == 0) {
            break;
        }

        else if (n > great) {
            great = n;
        }
    }

    printf("Girilen sayıların en büyüğü : %li\n", great);

    return 0;
}
