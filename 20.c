// sayının kontrolü

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n;

    printf("Sayı giriniz : ");
    scanf("%li", &n);

    if (n == 1 || n == 5) {
        printf("1 ya da 5 girdiniz.\n");
    } else {
        printf("Farklı bir sayı girdiniz.\n");
    }

    return 0;
}
