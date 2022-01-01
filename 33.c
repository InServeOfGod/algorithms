// parametreli fonksiyon kullanımı

#include <stdio.h>

void write(const char *buff);
void read(const char *buff);

int main(int argc, char const *argv[])
{
    write("C dilini ");
    read("C dilini ");

    return 0;
}

void write(const char *buff) {
    printf("%s Yazıyorum.\n", buff);
}

void read(const char *buff) {
    printf("%s Okuyorum.\n", buff);
}
