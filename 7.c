/* alış fiyatı ve kâr oranı girilen ürünün satış fiyatı */

#include <stdio.h>


int main(int argc, char const *argv[])
{
    double buy, profit, sold;

    printf("Alış fiyatını giriniz : ");
    scanf("%lf", &buy);

    printf("Kâr oranını giriniz : ");
    scanf("%lf", &profit);

    if (profit == 0) {
        sold = buy;
    } 
    
    else {
        sold = buy + (buy * profit / 100);
    }

    printf("Satış fiyatı : %lf\n", sold);

    return 0;
}
