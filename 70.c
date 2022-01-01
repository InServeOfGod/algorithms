// girilen iki sayı arasındaki sayıların toplamını ve ortalamasını bulma

#include <stdio.h>

int main(int argc, char const *argv[]) {
    long int start_x, end_x;
    long int count, sum = 0;
    float average;

    printf("İlk sayıyı giriniz : ");
    scanf("%li", &start_x);

    printf("İkinci sayıyı giriniz : ");
    scanf("%li", &end_x);

    if (start_x > end_x) {
        puts("Başlangıç değeri son değerden büüyk olamaz!");
        return 0;
    }

    count = end_x;

    for (long int i = start_x; i <= end_x; i++) {
        sum += i;
    }

    average = (double)sum / count;

    printf("%li ile %li arasındaki sayıların toplamı : %li ortalaması : %.1f\n", start_x, end_x, sum, average);

    return 0;
}
