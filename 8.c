/* kısa ve uzun kenarı girilen dikdörtgenin alanı ve çevresi */
/* area = 2(g + y) */
/* around = g * y */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    long g, y, area, around;

    printf("Kısa kenar giriniz : ");
    scanf("%li", &g);

    printf("Uzun kenar giriniz : ");
    scanf("%li", &y);

    if (g > y){
        printf("kısa kenar uzun kenardan uzun olamaz!\n");
        exit(1);
    }

    area = 2 * (g+y);
    around = g * y;

    printf("Alanı : %li\n", area);
    printf("Çevresi : %li\n", around);

    return 0;
}



