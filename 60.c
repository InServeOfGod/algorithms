// başlangıç ve bitiş değerleri arasındaki sayıların asal olanlarını yazdırma

#include <stdio.h>

int main(int argc, char const *argv[]) {
    long int x, y;
    int count = 0;

    printf("Başlangıç değeri girin : ");
    scanf("%li", &x);

    printf("Bitiş değeri girin : ");
    scanf("%li", &y);

    if (x > y) {
        puts("Başlangıç değeri bitiş değerinden yüksek olamaz!");
        return 0;
    }

    else if (x < 1 || y < 1) {
        puts("Lütfen 1'den yüksek değerler girin!");
        return 0;
    }

    else if (x == y) {
        puts("Başlangıç değeri ile bitiş değeri eşit olamaz!");
        return 0;
    }

    for (long int i = x; i < y; i++) {
        for (long int j = 1; j <= i; j++) {           
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%li ", i);
        }

        count = 0;
    }

    printf("\n");

    return 0;
}