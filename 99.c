// diziye 10 tane pozitif sayı giriliyor. Bu sayıların en büyüğünü bulan program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned long nums[10];
    unsigned long n;
    unsigned long great = 0;

    for (int i = 0; i < 10; i++) {
        printf("Sayı girin : ");
        scanf("%lu", &n);
        nums[i] = n;

        if (nums[i] > great) {
            great = nums[i];
        }
    }

    printf("Girilen en büyük sayı : %lu\n", great);
    
    return 0;
}
