// 1-10 arası sayıların toplamı

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int res = 0;

    for (int i = 1; i <= 10; i++) {
        res += i;
    }

    printf("1-10 arası sayıların toplamı : %d\n", res);

    return 0;
}
