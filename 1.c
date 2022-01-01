/* string değişkene bilgi girişi */

#include <stdio.h>
#include <stdlib.h>
#define MAX 255

int main(int argc, char const *argv[])
{
    char *buff = (char*)malloc(sizeof(char));

    printf("string değer giriniz : ");
    fgets(buff, MAX, stdin);
    printf("%s", buff);

    return 0;
}
