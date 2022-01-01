// 1'den 10'a kadar olan çift sayıların for döngüsü ile yazımı

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 1 çift sayı olmadığı için programı yormamak için 2'den başladım */
    for (short i = 2; i <= 10; i += 2) {
        printf("%hd ", i);
    }

    printf("\n");
    return 0;
}
