#include "header.h"

extern long int numericRev(long int n) {
    long int rev = 0;
    
    while (n != 0) {
        int temp = n % 10;
        n /= 10;
        rev *= 10;
        rev += temp;
    }

    return rev;
}

extern long int numericAbs(long int n) {
    return (n > 0) ? n : -n;
}

extern long int numericPower(int base, int power) {
    long int res = 1;
    power = (power < 0) ? -power : power;

    for (int i = 0; i < power; i++)
    {
        res *= base;
    }

    if (power < 0 && base % 2 == 1) {
        return -res;
    }

    return res;
}

extern int modulus(int x, int y) {
    return x % y;
}

extern long numericSq(int n) {
    return n * n;
}

extern double numericSqrt(int n) {
    /* x_(n+1) = x_n - f(x_n) / f’(x_n) */

    double r = 1;

    for (int i = 0; i < n; i++)
    {
        r = (n / r + r) / 2;
    }
    
    return r;
}

extern long numericCube(int n) {
    return n * n * n;
}

extern size_t numericLen(size_t n) {
    if (n == 0) {
        return 1;
    }
    
    size_t size = 0;
    
    while (n > 0) {
        n /= 10;
        size++;
    }

    return size;
}

extern double numericAdd(int count, double nums[]) {
    double res = 0;
    
    for (int i = 0; i < count; i++)
    {
        res += nums[i];
    }
    
    return res;
}

extern double numericSub(int count, double nums[]) {
    double res = 0;
    
    for (int i = 0; i < count; i++)
    {
        if (i == 0) {
            res = nums[0];
        }

        else {
            res -= nums[i];
        }
    }
    
    return res;
}

extern double numericMulti(int count, double nums[]) {
    double res = 1;
    
    for (int i = 0; i < count; i++)
    {
        res *= nums[i];
    }
    
    return res;
}

extern double numericDiv(int count, double nums[]) {
    double res = 0;
    
    for (int i = 0; i < count; i++)
    {
        if (i == 0) {
            res = nums[0];
        }

        else {
            res /= nums[i];
        }
    }
    
    return res;
}

extern int* numericBubbleSort(int count, int num[]){
    for (int i = 0; i < count; i++)
    {
        for (int j = 1; j < count - i; j++)
        {
            if (num[j - 1] > num[j]) {
                int temp = num[j];
                num[j] = num[j - 1];
                num[j - 1] = temp;
            }
        }
    }

    return num;
}

extern int* numericSelectionSort(int count, int num[]) {
    static int min = 0;
    
    for (int i = 0; i < count; i++)
    {
        min = i;

        for (int j = i + 1; j < count; j++)
        {
            if (num[j] < num[min]) {
                min = j;
            }
        }

        int temp = num[i];
        num[i] = num[min];
        num[min] = temp;
    }

    return num;
    
}

extern int* numericInsertionSort(int count, int num[]) {
    static int insert = 0;

    for (int i = 1; i < count; i++)
    {
        insert = num[i];
        int j = i - 1;

        while (j >= 0 && num[j] > insert) {
            num[j + 1] = num[j];
            j--;
        }

        num[j + 1] = insert;
    }
    
    return num;
}

extern void limitCharMax(void) {
    printf("\t%d\t| %lu\n", CHAR_MAX, sizeof(char));
}

extern void limitCharMin(void) {
    printf("\t%d\t| %lu\n", CHAR_MIN, sizeof(char));
}

extern void limitCharPozitive(void) {
    printf("\t%d\t| %lu\n", UCHAR_MAX, sizeof(unsigned char));
}

extern void limitShortMin(void) {
    printf("\t%d\t| %lu\n", SHRT_MIN, sizeof(short));
}

extern void limitShortMax(void) {
    printf("\t%d\t| %lu\n", SHRT_MAX, sizeof(short));
}

extern void limitShortPozitive(void) {
    printf("\t%d\t| %lu\n", USHRT_MAX, sizeof(unsigned short));
}

extern void limitIntMin(void) {
    printf("\t%d\t| %lu\n", INT_MIN, sizeof(int));
}

extern void limitIntMax(void) {
    printf("\t%d\t| %lu\n", INT_MAX, sizeof(int));
}

extern void limitIntPozitive(void) {
    printf("\t%u\t| %lu\n", UINT_MAX, sizeof(unsigned int));
}

extern void limitLongMin(void) {
    printf("\t%ld\t| %lu\n", LONG_MIN, sizeof(long));
}

extern void limitLongMax(void){
    printf("\t%ld\t| %lu\n", LONG_MAX, sizeof(long));
}

extern void limitLongPozitive(void) {
    printf("\t%lu\t| %lu\n", ULONG_MAX, sizeof(unsigned long));
}

extern size_t stringLen(const char* buff) {
    size_t size = 0;

    while (*(buff+size) != '\0') {
        size++;
    }

    return size;
}

extern bool stringCompare(const char* dest, const char* buff) {
    size_t dest_size = stringLen(dest);
    size_t buff_size = stringLen(buff);
    size_t count = dest_size | buff_size;

    if (dest_size != buff_size) {
        return false;
    }
    
    for (size_t i = 0; i < count; i++)
    {
        if ( *(dest + i) != *(buff + i) ) {
            return false;
        }
    }

    return true;
}

extern char* stringConcat(const char* dest, const char* buff) {
    size_t dest_size = stringLen(dest);
    size_t buff_size = stringLen(buff);
    size_t buff_index = 0;
    char *res = (char*)malloc(sizeof(char) * (dest_size + buff_size));

    for (size_t i = 0; i < dest_size; i++)
    {
        *(res + i) = *(dest + i);
    }

    for (size_t i = dest_size; buff_index < buff_size; i++)
    {
        *(res + i) = *(buff + buff_index);
        buff_index++;
    }
    
    return res;
}

extern void stringTruncate(char* buff) {
    *buff = 0;
}

extern long fileSize(const char *dest) {
    FILE *f = fopen(dest, "r");
    long size = 0;

    if (f != NULL) {
        fseek(f, 0, SEEK_END);
        size = ftell(f);
        fclose(f);
    }

    return size;
}

extern const char* fileContent(const char* dest, long size) {
    FILE *f = fopen(dest, "r");
    char *content = (char*)malloc(sizeof(char) * size);

    if (f != NULL) {
        fread(content, size, 1, f);
        return content;
    }

    return NULL;
}

extern bool fileCopy(const char* src, const char* dest) {
    long size = fileSize(src);
    const char *content = fileContent(src, size);
    FILE *f = fopen(dest, "w");

    if (f != NULL) {
        fwrite(content, size, 1, f);
        fclose(f);
        return true;
    }

    return false;
}

