// 5 elemanlı diziye bilgi girişi yapılıp dizinin tersten yazılması

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ls[5];
    int rev_ls[5];
    int index = 0;

    for (int i = 0; i < 5; i++) {
        printf("Sayı girin : ");
        scanf("%d", &ls[i]);
    }

    for (int i = 5; i > 0; i--) {
        rev_ls[i-1] = ls[index];
        index++;
    }

    printf("Girilen dizinin ters dizilişi : ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", rev_ls[i]);
    }

    printf("\n");

    return 0;
}
