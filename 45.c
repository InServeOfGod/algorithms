// 1'den 10'a kadar olan sayıların toplamının wihle döngüsü ile bulunması
// ∑ = n*(n+1) / 2

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 1;
    int index = 0;

    while (true) {
        a = a + b;
        b = b + 1;
        index++;

        if (index == 10) {
            break;
        }
    }

    printf("1'den 10'a kadar olan sayıların toplamı %d\n", a);


    return 0;
}
