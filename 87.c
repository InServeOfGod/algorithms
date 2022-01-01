// girilen kenar özelliklerine göre üçgenin çeşidini bulma

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("A kenarı : ");
    scanf("%d", &a);

    printf("B kenarı : ");
    scanf("%d", &b);

    printf("C kenarı : ");
    scanf("%d", &c);

    if (a == b && b == c){
        puts("Eşkenar üçgen.");
    }

    else if ((a == b && b != c) || (a == c && b != c) || (b == c && a != b)) {
        puts("İkizkenar Üçgen.");
    }

    else {
        puts("Çeşitkenar Üçgen.");
    }

    return 0;
}
