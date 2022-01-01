// sabit değerli dizi tanımlaması

#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int nums[] = {1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < 9; i++)
    {
        printf("%d\t", nums[i]);
    }
    
    puts("");

    return 0;
}
