// girilen sayının 1 ya da 2 olup olmadığını kontrol etme

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int proc;

    printf("işlemi giriniz : ");
    scanf("%d", &proc);

    switch (proc)
    {
    case 1:
        puts("1 seçtiniz.");
        break;

    case 2:
        puts("2 seçtiniz.");
        break;
    
    default:
        puts("1 ya da 2 seçmelisiniz.");
        break;
    }


    return 0;
}
