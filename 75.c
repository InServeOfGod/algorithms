// 10 adet 0~100 arası sayılar üretilmekte ve bu sayıların 50'den büyük olanlarının ortalamasının bulunması

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int sum = 0, n, count = 0;
    float average;

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        n = rand() % 100;
        printf("Sayı : %d\n", n);

        if (n > 50) {
            count++;
            sum += n;
        }
    }

    average = sum / count;

    printf("50'den büyük olan sayıların toplamının ortalaması : %.1f\n", average);

    return 0;
}
