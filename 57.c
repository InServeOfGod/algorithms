// faktöriyel

#include <stdio.h>


int main(int argc, char const *argv[])
{
    long int x;
    long int res = 1;

    printf("Sayı giriniz : ");
    scanf("%li", &x);

    if (x == 0) {
        printf("%li! = 1\n", x);
    }

    else if (x < 0) {
        printf("Lütfen pozitif değer giriniz!\n");
    }

    else {
        for (int i = 1; i <= x; i++) {
            res *= i;
        }

        printf("%li! = %li\n", x, res);
    }


    return 0;
}
