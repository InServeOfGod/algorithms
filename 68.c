// girilen sayının 3 ile tam bölünüp bölünmediğini bulan program

#include <stdio.h>

int main(int argc, char const *argv[]) {
    long int n;

    printf("Sayı giriniz : ");
    scanf("%li", &n);

    if (n == 0) {
        printf("0 rakamı hiçbir sayıya bölünemez!\n");
        return 0;
    }

    if (n % 3 == 0) {
        printf("Sayı 3'e tam bölünür.\n");
    } else {
        printf("Sayı 3'e tam bölünmez.\n");
    }


    return 0;
}