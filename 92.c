// iki sayının EBOB'unu bulan program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, gcd;

    printf("Sayı girin : ");
    scanf("%d", &a);

    printf("Sayı girin : ");
    scanf("%d", &b);

    for (int i = 2; i < a && i < b ; i++)
    {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    
    printf("%d ve %d sayılarının EBOB değeri = %d\n", a, b, gcd);

    return 0;
}
