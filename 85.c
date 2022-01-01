// girilen sayıya kadar olan sayıların ortalaması

#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned long int n, sum = 0;
    int count = 0;
    double average;

    printf("Pozitif sayı giriniz : ");
    scanf("%lu", &n);

    for (unsigned long int i = 1; i < n; i++) {
        sum += i;
        count++;
    }

    average = (double)sum / count;
    printf("Girilen sayıya kadar olan sayıların ortalaması : %.1lf\n", average);
    
    return 0;
}
