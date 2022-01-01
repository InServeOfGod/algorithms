// bankaya yatırılan paranın faiz ve yılına göre parayı hesaplama

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int money = 10000;
    double interest = 0.18;
    int year = 10;
    double profit = money;

    printf("Şu anki para : %li\n", money);

    for (int i = 1; i <= year; i++) {
        profit += profit * interest;
        printf("%d. yıl %.2lf faiz ile bankada biriken para : %.4lf\n", i, interest, profit);
    }
    
    return 0;
}
