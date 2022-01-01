// girilen sayıların birbirlerine tam bölünüp bölünememesi

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int x, y;

    printf("Bir sayı girin : ");
    scanf("%li", &x);

    printf("Sayıyı kaç ile bölünebilirliğini kontrol etmek istersiniz? : ");
    scanf("%li", &y);

    if (x % y == 0) {
        printf("Bu sayı %li ile tam bölünebilir.\n", y);
    }

    else {
        printf("Bu sayı %li ile tam bölünemez.\n", y);
    }

    return 0;
}

