// string diziye 5 adet isim atama

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *names[5];

    for (int i = 0; i < 5; i++) {
        char *name = (char*)malloc(sizeof(char));
        printf("İsim girin : ");
        fgets(name, 255, stdin);

        names[i] = name;
    }

    puts("Girilen İsimler : ");
    for (int j = 0; j < 5; j++) {
        printf("%s", names[j]);
    }

    
    return 0;
}
