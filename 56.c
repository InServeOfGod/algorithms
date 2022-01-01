// bilgisayara girilen sayıya kadar olan sayıların asal olanlarını yazdırma

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, count = 0;
    printf("Sayı giriniz : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        count = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
