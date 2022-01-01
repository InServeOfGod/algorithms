// girilen iki sayıdan büyük olanı veren fonksiyon

#include <stdio.h>

int intcmp(int x, int y);

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Sayı girin : ");
    scanf("%d", &a);

    printf("Sayı girin : ");
    scanf("%d", &b);

    printf("Girilen sayılardan büyük olanı : %d\n", intcmp(a, b));

    return 0;
}

int intcmp(int x, int y) {
    if (x > y) {
        return x;
    }

    return y;
}
