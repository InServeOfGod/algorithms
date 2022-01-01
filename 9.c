/* girilen 3 sayının geometrik ortalaması */
/* Root(x1*x2*x3*xn) = (x1*x2*x3*xn)^1/n  = (x1*x2*x3*xn)/(x1+x2+x3+xn)*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    const int index = 3;
    double times, sum, res, x, nums[index];

    for (int i = 0; i < index; i++){
        printf("Sayı girin : ");
        scanf("%lf", &x);
        nums[i] = x;
    }

    times = nums[0] * nums[1] * nums[2];
    sum = nums[0] + nums[1] + nums[2];

    if (sum == 0) {
        res = 0;
    }

    else {
        res = times / sum;
    }

    printf("Girilen sayıların geometrik ortalaması : %lf\n", res);

    return 0;
}
