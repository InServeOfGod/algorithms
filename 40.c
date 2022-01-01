// while döngüsü ile 1'den 10'a kadar (10 dahil) sayıların karesinin toplamı

#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int start = 1, end = 10;
    int index = start, sum=0;

    do {
        sum += (index * index);
        index++;

    } while (index <= end);

    printf("1'den 10'a kadar (10 dahil) sayıların karesinin toplamı : %d\n", sum);


    return 0;
}
