// girilen 3 tam sayının küçükten büyüğe sıralanması

#include <stdio.h>

long *orderBySmaller(long int nums[], int size);

int main(int argc, char const *argv[])
{
    long int numList[3];
    long int *orderList;

    printf("Yan yana boşluk bırakarak 3 tane sayı giriniz : ");
    scanf("%li %li %li", &numList[0], &numList[1], &numList[2]);

    orderList = orderBySmaller(numList, 3);
    printf("%li %li %li\n", *(orderList), *(orderList+1), *(orderList+2));

    return 0;
}

long *orderBySmaller(long int nums[], int size) {
    long int smallest;
    
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (nums[j] < nums[i]){
                smallest = nums[i];
                nums[i] = nums[j];
                nums[j] = smallest;
            }
        }
    }


    return nums;
}