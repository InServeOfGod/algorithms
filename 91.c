// girilen satır sayısı kadar verilen işaret ile birlikte üçgen çizme

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    char c;

    printf("Satır sayısını girin : ");
    scanf("%d", &n);

    printf("Karakter ya da işaret girin : ");
    scanf("\n%c", &c);

    int ch = 1;

    while (n > 0) {
        for (int i = 1; i < n; i++)
        {
            printf(" ");
        }

        for (int i = 0; i < ch; i++)
        {
            printf("%c", c);
        }

        puts("");

        n--;
        ch += 2;
    }

    return 0;
}
