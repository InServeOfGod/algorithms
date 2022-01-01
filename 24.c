// boolean değişken kullanımı

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    const long int number = 19;
    long int x;
    bool cmp;

    printf("Sayı giriniz : ");
    scanf("%li", &x);

    cmp = (x == number);
    
    if (cmp) {
        printf("Sayıyı doğru bildiniz. Üzerinde 19 vardır.\n");
        exit(0);
    }

    printf("Sayıyı yanlış bildiniz!\n");

    return 0;
}

