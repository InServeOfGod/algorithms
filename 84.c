// girilen sayıyıa kadar olan sayıların çift ve tek olanlarını ayrı ayrı toplama

#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned long int n, sumEven = 0, sumOdd = 0;
    
    printf("Pozitif Sayı girin : ");
    scanf("%lu", &n);

    for (unsigned long int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sumEven+=i;
        } else {
            sumOdd+=i;
        }
    }

    printf("Tek sayıların toplamı : %lu\n", sumOdd);
    printf("Çift sayıların toplamı : %lu\n", sumEven);

    return 0;
}
