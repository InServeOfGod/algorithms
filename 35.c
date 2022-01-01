// fonksiyon ile 1'den verilen sayıya kadar olan sayıların toplamı

#include <stdio.h>

long sigma(long till);

int main(int argc, char const *argv[])
{
    long num, result;

    printf("1'den kaça kadar olan sayıların toplamını bulmak istesiniz? : ");
    scanf("%li", &num);

    result = sigma(num);

    printf("1'den girilen sayıya kadar olan bütün sayıların toplamı = %li\n", result);
    return 0;
}

long sigma(long till) {
    long res = 0;

    for (long i = 0; i <= till; i++) {
        res += i;
    }

    return res;
}
