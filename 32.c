// fonksiyon kullanımı

#include <stdio.h>

void write();
void read();

int main(int argc, char const *argv[])
{
    write();
    read();

    return 0;
}

void write() {
    printf("Yazıyorum.\n");
}

void read() {
    printf("Okuyorum.\n");
}
