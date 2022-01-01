// girilen sayının rakamlarının farklı olup olmadığını bulan program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int temp, n, len = 0;

    printf("Sayı girin : ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        temp /= 10;
        len++;
    }

    int numbers[len];

    for (size_t i = 0; i < len; i++)
    {
        numbers[i] = n % 10;
        n /= 10;
    }

    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = i + 1; j < len; j++)
        {
            if (numbers[i] == numbers[j]) {
                puts("Girilen sayının rakamları aynı!");
                return 0;
            }
        }
    }
    
    puts("Girilen sayının rakamları farklı!");
    return 0;
}
