// istenilen sayı kadar istenilen metnin ekrana yazdırılması

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 255

int main(int argc, char const *argv[])
{
    long int n;
    char* text = (char*)malloc(sizeof(char) * MAX);

    printf("Metni giriniz : ");
    fgets(text, MAX, stdin);
    /* sondaki '\n' işaretini istemiyoruz */
    text[strlen(text) - 1] = '\0';

    printf("girilen metnin kaç defa ekrana yazdırılmasını istersiniz : ");
    scanf("%li", &n);

    for (long int i = 1; i <= n; i++) {
        printf("%li %s\n", i, text);
    }



    return 0;
}
