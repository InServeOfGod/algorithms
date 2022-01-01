// sayının kendisi dahil tam bölümlerinin while döngüsü ile bulunması

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;
    printf("Sayı girin : ");
    scanf("%d", &n);

    printf("Sayının tam bölenleri : ");
    for (i = 1; i <= n; i++) {
        if (n %i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");


    return 0;
}
