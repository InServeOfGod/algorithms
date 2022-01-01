// 1'den N'e kadar olan sayıların toplamını bulma

#include <stdio.h>

int main(int argc, char const *argv[]) {
    long int n, sum = 0;
    printf("Kaça kadar olan sayıların toplamını bulmak istersiniz? : ");
    scanf("%li", &n);
    
    for (long int i = 1; i <= n; i++) {
        printf("sum : %li\n", sum);
        sum += i;
    }

    printf("1'den %li sayısına kadar olan sayıların toplamı : %li\n", n, sum);
    return 0;
}
