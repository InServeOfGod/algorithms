// başlangıç, bitiş ve artış değeri verilen sayıları yazma

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int x, y, plus;

    printf("Başlangıç değeri girin : ");
    scanf("%li", &x);

    printf("Bitiş değeri girin : ");
    scanf("%li", &y);

    if (y < x) {
        puts("Başlangıç değeri Bitiş değerinden yüksek olamaz!");
        return 0;
    }

    printf("Artış değeri girin : ");
    scanf("%li", &plus);

    for (long int i = x; i < y; i+=plus) {
        printf("%li ", i);
    }
    printf("\n");
    

    return 0;
}
