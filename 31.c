// klavyeden girilen bir tuşu kontrol etme

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char key;
    int ascii;

    printf("Bir tuşa basıp ardından 'enter' a basınız : ");
    scanf("%c", &key);

    ascii = (int)key;
    printf("girilen değer : %c, girilen değerin ascii tablosundaki değeri : %d\n", key, ascii);

    if (ascii >= 48 && ascii <= 57) {
        printf("Sayı girdiniz.\n");
    }

    else if (ascii >= 65 && ascii <= 96) {
        printf("Büyük harf girdiniz.\n");
    }

    else if (ascii >= 97 && ascii <= 120) {
        printf("Küçük harf girdiniz.\n");
    }

    else {
        printf("Herhangi bir tuşa bastınız.\n");
    }

    return 0;
}
