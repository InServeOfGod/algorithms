// 5 satırlı diziye isimler giriliyor. Sonradan verilen ismin dizide olup olmadığını kontrol eden program

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    const size_t quantity = 5;
    char *names[quantity];

    for (size_t i = 0; i < quantity; i++)
    {
        char *name = (char*)malloc(sizeof(char));
    
        printf("İsim girin : ");
        scanf("%s", name);
    
        names[i] = name;
    }

    char *name = (char*)malloc(sizeof(char));
    printf("Aratmak istediğiniz ismi girin : ");
    scanf("%s", name);

    for (size_t i = 0; i < quantity; i++)
    {
        if (strcmp(names[i], name) == 0) {
            puts("İsim dizide mevcut");
            return 0;
        }
    }
    
    puts("İsim dizide mevcut değil");
    
    return 0;
}
