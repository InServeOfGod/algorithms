// fibonecci sayı dizinin ilk 10 hanesi

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 1, b = 1, c = 0;

    printf("%d\n", a);
    printf("%d\n", b);

    for (int i = 1; i <= 8; i++) {
        c = a + b;
        a = b;
        b = c;

        printf("%d\n", c);
    }

    return 0;
}
