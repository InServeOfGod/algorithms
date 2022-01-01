// çarpma işlemi kullanmadan toplama yoluyla iki sayı arasında çarpma işlemi yapma

#include <stdio.h>

int main(int argc, char const *argv[]) {
    const int x = 87;
    const int y = 6;
    int sum = 0;

    for (int i = 0; i < y; i++) {
        sum += x;
    }

    printf("%d x %d = %d\n", x, y, sum);

    return 0;
}