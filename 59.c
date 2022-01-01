// 1 den 10'a kadar tek sayıların yazımı

#include <stdio.h>

int main(int argc, char const *argv[]) {
    for (short i = 0; i <= 10; i++) {
        if (i % 2 == 1) {
            printf("%hd\n", i);
        }
    }

    return 0;
}
