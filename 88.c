// pascal ilk 5 satırı
// Pascak = C(n,k) = n! / k!(n-k)!

#include <stdio.h>

int fact(int);

int main(int argc, char const *argv[])
{
    const short iterate = 5;

    for (short i = 0; i < iterate; i++)
    {
        for (short j = 0; j <= i; j++)
        {
            int pascal = fact(i) / (fact(j) * fact(i - j));
            printf("%d\t", pascal);
        }

        puts("");
    }

    return 0;
}

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
