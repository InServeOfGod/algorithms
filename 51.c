// rastgele 10 defa üretilen 1~100 arası sayıların tek ve çift olanların sayısını bulma

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    short countOdd = 0, countEven;
    /* normalde srand fonksiyonu bize belirtilen aralıklarda değer verir ancak program tekrar açıldığında 
    yine bir önceki sonucun aynısını dönecektir. Bu yüzden aralık olarak time() fonksiyonunu verdik ki her geçen mikrosaniye
    başına bize verilen değer de farklı olsun. */
    srand((unsigned int)time(NULL));

    for (short i = 0; i < 10; i++) {
        /* rand() fonksiyonu 0~RAND_MAX arasında değer verir ancak biz 1 ila 100 arasındaki değerleri istiyoruz. 
        Bu yüzden bize gelen rastgele sayının 100 ile bölümünden kalan sonucu almak bize 0~100 arasında bir değer verir.
        Ama biz '0' da istemiyoruz o zaman basit bir if bloğuna ihtiyacımız olacaktır. */

        int random = rand();
        short n = random % 100;

/*         printf("1~100 : %hd\n", n);
        printf("random : %d\n", random); */

        if (n % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    printf("Tek sayıların adedi : %hd\n", countOdd);
    printf("Çift sayıların adedi : %hd\n", countEven);

    return 0;
}
