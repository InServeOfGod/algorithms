// 5 adet sayı girişi yapılıyor bu sayıların 50'den büyük olanlarının toplamını bulma

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int sum = 0, n;

    for (int i = 0; i < 5; i++) {
        printf("Sayı girin : ");
        scanf("%li", &n);

        if (n > 50) {
            sum += n;
        }
    }

    printf("50'den büyük olan sayıların toplamı : %li\n", sum);

    return 0;
}
