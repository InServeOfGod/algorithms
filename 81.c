// Fibonacci'de girilen terim sayısının değerini hesaplama

#include <stdio.h>

static int fibonacci_count(int n);

int main(int argc, char const *argv[])
{
    int x;

    printf("Terim sayısı girin : ");
    scanf("%d", &x);
    printf("Fibonacci terim sayısı : %d\n", fibonacci_count(x));

    return 0;
}

static int fibonacci_count(int n) {
    if (n == 1 || n == 0) {
        return n;
    }

    else {
        return fibonacci_count(n - 2) + fibonacci_count(n - 1);
    }
}