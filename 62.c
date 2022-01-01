// while döngüsü ile girilen sayıların en büyük olanını bulma

#include <stdio.h>

int main(int argc, char const *argv[]) {
    long int great = 0, n = 1;

    while (n != 0) {
        printf("Sayı giriniz (durmak için 0'a giriniz) : ");
        scanf("%li", &n);

        if (n > great) {
            great = n;
        }

        else if (n == 0) {
            break;
        }
    }

    printf("Girilen sayıların en büyüğü %li\n", great);
    return 0;
}
