/* ad ve soyad */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 255

int main(int argc, char const *argv[])
{
    char *name = (char*)malloc(sizeof(char));
    char *surname = (char*)malloc(sizeof(char));

    printf("isim giriniz : ");
    fgets(name, MAX, stdin);
    printf("soyisim giriniz : ");
    fgets(surname, MAX, stdin);

    /* sondaki '\n' işaretlerini kaldırıyoruz.. */
    name[strlen(name) - 1] = '\0';
    surname[strlen(surname) - 1]= '\0';

    printf("merhaba %s %s\n", name, surname);

    return 0;
}
