// 1'den 10'a kadar olan sayıların etiketler yardımı ile toplamının bulunması
// ∑ = n*(n+1) / 2

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 1;
    int index = 0;

    begin:
        a = a + b;
        b = b + 1;
        index++;

        if (index == 10) {
            goto end;
        }

    goto begin;

    end:
        printf("1'den 10'a kadar olan sayıların toplamı %d\n", a);


    return 0;
}
