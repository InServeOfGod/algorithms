// girilen sayının 0~100 arasında olup olmadığını bulma

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n;

    printf("Bir sayı girin : ");
    scanf("%li", &n);

    if (n > 0 && n < 100) {
        printf("Sayı 0 ila 100 arasındadır.\n");
    }

    else {
        printf("Sayı 0 ila 100 arasında değildir.\n");
    }

    return 0;
}

