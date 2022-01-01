// girilen iki sayının OKEK'ini bulan program
// OKEK = (x * y) / EBOB

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, gcd, lcm;

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

    lcm = (a * b) / gcd;
    
    printf("%d ve %d sayılarının EBOB değeri = %d\n", a, b, lcm);

    return 0;
}
