// tek mi çift mi

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int n;
    
    printf("Sayı giriniz : ");
    scanf("%li", &n);

    if (n %2 == 0) {
        printf("Bu sayı çifttir.\n");
    }

    else {
        printf("Bu sayı tektir.\n");
    }

    return 0;
}
