#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mark;

    printf("Not bilginizi giriniz : ");
    scanf("%d", &mark);

    /* not : C dilinde switch case kullanılarak sadece integer veri tipindeki değişkenler arasında karşılaştırma yapılabilir. */
    switch (mark > 49 && mark >= 0 && mark <= 100) {
        case 1:
            puts("Başarılı.");
            break;

        case 0:
            puts("Başarısız.");
            break;
    }

    return 0;
}
