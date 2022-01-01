// 1~100 arası asal sayılar ve adedi

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int x = 1, y = 100;
    int count = 0;
    int nums = 0;

    for (long int i = x; i < y; i++) {
        for (long int j = 1; j <= i; j++) {           
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%li ", i);
            nums++;
        }

        count = 0;
    }

    printf("\n");
    printf("1~100 arası asal sayıların adedi : %d\n", nums);

    return 0;
}

