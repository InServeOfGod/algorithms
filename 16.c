// pozitif mi negatif mi sıfır mı

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n;
    
    printf("Sayı giriniz : ");
    scanf("%li", &n);

    if (n > 0) {
        printf("Bu sayı pozitiftir.\n");
    }

    if (n < 0){
        printf("Bu sayı negatiftir.\n");    
    }

    if (n == 0) {
        printf("Bu sayı sıfıra eşittir.\n");
    }

    return 0;
}
