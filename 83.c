// girilen sayının mutlak değeri

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;

    printf("Sayı girin : ");
    scanf("%d", &x);

    if (x == 0) {
        puts("0");
    }

    else if (x < 0) {
        printf("%d\n", (-1) * x);
    }

    else {
        printf("%d\n", x);
    }
    
    return 0;
}
