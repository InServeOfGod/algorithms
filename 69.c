// 1'den 100'e kadar olan sayıların çift olanlarını yazdırma

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int sum = 0;

    // 1 zaten çift sayı olmadığı için 2'den başladık
    for (int i = 2; i <= 100; i+=2) {
        sum += i;
    }

    printf("1'den 100'e kadar olan çift sayıların toplamı : %d\n", sum);


    return 0;
}