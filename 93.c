// girilen çift bir sayının mutlak değeri, karesi ve karekökü

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Sayı girin : ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        int absol = abs(n);
        int square = absol * absol;
        double square_root = sqrt((double)absol);

        printf("Girilen sayının mutlak değeri : %d, karesi : %d, karekökü : %.1lf\n", absol, square, square_root);

    } else {
        puts("Çift sayı girin!");
    }


    return 0;
}
