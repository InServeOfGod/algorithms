// girilen notun harf sistemine göre verilmesi

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double mark;

    printf("Notunuzu giriniz : ");
    scanf("%lf", &mark);
    mark = abs(mark);

    if (mark < 60) {
        printf("Notunuz : F1\n");
    }

    else if (mark < 69) {
        printf("Notunuz : C\n");
    }

    else if (mark < 74) {
        printf("Notunuz : B2\n");
    }

    else if (mark < 84) {
        printf("Notunuz : B1\n");
    }

    else if (mark < 89) {
        printf("Notunuz : A2\n");
    }

    else if (mark <= 100) {
        printf("Notunuz : A1\n");
    }

    else {
        printf("Lütfen geçerli bir not giriniz!\n");
    }

    return 0;
}
