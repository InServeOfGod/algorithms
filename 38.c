// dik kenarları verilen üçgenin hipotenüsünü (en uzun kenar) 
// x^2 + y^2 = c^2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double x, y, hipo;
    
    printf("1. Dik kenar uzunluğu : ");
    scanf("%lf", &x);

    printf("2. Dik kenar uzunluğu : ");
    scanf("%lf", &y);

    hipo = hypot(x, y);

    printf("Hipotenüs : %lf\n", hipo);

    return 0;
}
