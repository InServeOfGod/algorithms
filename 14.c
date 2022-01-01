// girilen iki sayıyı büyüklük bakımından karşılaştıran program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x,y;

    printf("Birinci sayıyı giriniz : ");
    scanf("%lf", &x);

    printf("İkinci sayıyı giriniz : ");
    scanf("%lf", &y);

    if (x > y){
        puts("Birinci sayı ikinci sayıdan büyüktür.");
    }

    else if (x == y) {
        puts("Her iki sayı da birbirine eşittir.");
    }

    else {
        puts("Birinci sayı ikinci sayıdan küçüktür.");
    }

    return 0;
}


