// 3 ve 8'e tam bölünüyor mu

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n;

    printf("Sayı giriniz : ");
    scanf("%li", &n);

    if (n % 3 == 0 && n % 8 == 0) {
        printf("Bu sayı hem 3'e hem 8'e tam bölünebilir.\n");
    }

    else if (n % 3 == 0) {
        printf("Bu sayı 3'e tam bölünebilir.\n");
    }

    else if (n % 8 == 0) {
        printf("Bu sayı 8'e tam bölünebilir.\n");
    }

    else {
        printf("Bu sayı ne 3'e ne de 8'e tam bölünemez.\n");
    }
    
    return 0;
}

