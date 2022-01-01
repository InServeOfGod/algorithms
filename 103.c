// girilen 2D 2x2 matrisin toplamını bulma  

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[2][2];
    int b[2][2];
    int sum[2][2];
    int n;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("A dizinin[%d,%d] değerini giriniz : ", i, j);
            scanf("%d", &n);

            a[i][j] = n;

            printf("B dizinin[%d,%d] değerini giriniz : ", i, j);
            scanf("%d", &n);

            b[i][j] = n;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("toplam[%d][%d]  : %d\n", i, j, sum[i][j]);
        }
    }
    
    return 0;
}
