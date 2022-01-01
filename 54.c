// 1'den 10'a kadar olan sayıların karesi ve kareköklerini bulan program

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    for (short i = 1; i <= 10; i++) {
        printf("%hd sayısının karesi : %d, karekökü : %lf\n", i, (int)(i*i), sqrt((double)i));
    }

    return 0;
}
