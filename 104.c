// diziye 5 tane sayı girişi yapılıyor. Bu diziyi küçükten büyüğe yazdıran program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nums[5];
    int n;

    for (int i = 0; i < 5; i++) {
        printf("Sayı gir : ");
        scanf("%d", &n);
        nums[i] = n;
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", nums[i]);
    }
    
    
    return 0;
}
