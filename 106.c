// girilen boyut kadar kare matris oluşturan program

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int dimension;

    printf("Boyut girin : ");
    scanf("%d", &dimension);
    puts("matris : ");

    int matris[dimension][dimension];

    for (size_t i = 0; i < dimension; i++)
    {
        for (size_t j = 0; j < dimension; j++)
        {
            matris[i][j] = j - i + 1;

            if (matris[i][j] < 0) {
                matris[i][j] = abs(matris[i][j] - 2);
            }

            printf("%d\t", matris[i][j]);
        }
        puts("");
    }
    
    return 0;
}
