// 1'den 16'ya kadar olan çift sayıların fonksiyon yardımı ile yazımı

#include <stdio.h>

void orderEvenNums(int start, int end);

int main(int argc, char const *argv[])
{
    orderEvenNums(1, 16);

    return 0;
}

void orderEvenNums(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (i %2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}