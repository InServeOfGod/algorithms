// alfabedeki büyük harfleri yan yana yazdıran program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;

    for (c = 'A'; c <= 'Z'; c++) {
        printf("%c ", c);
    }

    printf("\n");
    
    return 0;
}
