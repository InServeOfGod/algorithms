// harfleri bulma

#include <stdio.h>

int main(int argc, char const *argv[]) {
    // NOT : C dilinde sadece ASCII tablosundaki veriler depolanabilir.
    char tr[] = {'Ç', 'İ', 'Ğ', 'Ş', 'Ö', 'Ü'};

    for (short i = 0; i < 6; i++) {
        printf("%c\n", tr[i]);
    }

    return 0;
}