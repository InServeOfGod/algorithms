// bölme işlemi kullanmadan çıkarma yoluyla iki sayı arasında bölme işlemi yaparak bölümü ve kalanı yazma

#include <stdio.h>

int main(int argc, char const *argv[]) {
    const int n = 87;
    int x = n;
    int y = 6;
    int div = 0;
    int remain = 0;

    while (x >= 6) {
        x -= y;
        div++;
    }

    remain = x;

    printf("%d / %d = %d, kalan ise %d\n", n, y, div, remain);

    return 0;
}