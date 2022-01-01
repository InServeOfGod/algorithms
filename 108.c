// 2x2 diziye isim girişi yapma

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    const short rows = 2;
    const short cols = 2;
    char* names[rows][cols];

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            char *name = (char*)malloc(sizeof(char));
            printf("İsim girin : ");
            scanf("%s", name);
            names[i][j] = name;
        }
    }

    puts("Girilen isimler");

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            printf("%s\t", names[i][j]);
        }

        puts("");
    }
    
    return 0;
}
