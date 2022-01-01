// klavyeden basılan bir tuşun ASCII kod karşılığını veren program

#include <stdio.h>

int main(int argc, char const *argv[]) {
    char c;

    printf("Bir tuşa basın : ");
    scanf("%c", &c);

    printf("Girilen karakterin ASCII tablosundaki karşılığı : %d\n", (int)c);


    return 0;
}