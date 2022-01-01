// 1'den 100'e kadar olan sayıların çift ve tek olanlarını ayrı ayrı toplama
// çift - tek

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sumEven = 0, sumOdd = 0, res;
    
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            sumEven+=i;
        } else {
            sumOdd+=i;
        }
    }

    res = sumEven - sumOdd;

    printf("Çift sayıların toplamından tek sayıların toplamını çıkarma sonucu : %d\n", res);

    return 0;
}
