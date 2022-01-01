// isim ve soyisim bilgilerini diziye aktarıp ekrana yazdırma

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char* nameSurname[2] = {(char*)malloc(sizeof(char)), (char*)malloc(sizeof(char))};

    printf("İsim girin : ");
    fgets(nameSurname[0], FILENAME_MAX, stdin);

    printf("Soyisim girin : ");
    fgets(nameSurname[1], FILENAME_MAX, stdin);

    printf("isim : %s", nameSurname[0]);
    printf("soyisim : %s", nameSurname[1]);
    
    return 0;
}
