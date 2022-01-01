#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <stdbool.h>

#ifndef HEADER_HEADER_H
#define HEADER_HEADER_H

#ifndef MAX
#define MAX 255
#endif

/* verilen dizideki tüm sayıları toplar */
double numericAdd(int, double[]);

/* verilen dizideki tüm sayıları çıkartır */
double numericSub(int, double[]);

/* verilen dizideki tüm sayıları çarpar */
double numericMulti(int, double[]);

/* verilen dizideki tüm sayıları böler */
double numericDiv(int, double[]);

/* verilen sayının karesini bulur */
long numericSq(int);

/* verilen sayının karekökünü bulur */
double numericSqrt(int);

/* verilen sayının kübünü bulur */
long numericCube(int);

/* verilen sayının uzunluğunu bulur */
size_t numericLen(size_t);

/* verilen sayıyı ters çevirir */
long int numericRev(long int);

/* sayının mutlak değerini üretir */
long int numericAbs(long int);

/* sayınnın kuvvetini verir */
long int numericPower(int, int);

/* sayının bölümünden kalanı bulma */
int modulus(int, int);

/* kabarcık sıralaması */
int* numericBubbleSort(int, int[]);

/* seçim sıralaması */
int* numericSelectionSort(int, int[]);

/* yerleştirme sıralaması */
int* numericInsertionSort(int, int[]);

/* char veri tipinin alabileceği maksimum değeri ve bellekte tuttuğu byte miktarını verir */
void limitCharMax(void);

/* char veri tipinin alabileceği minimum değeri ve bellekte tuttuğu byte miktarını verir */
void limitCharMin(void);

/* char veri tipinin alabileceği tüm pozitif değerleri ve bellekte tuttuğu byte miktarını verir */
void limitCharPozitive(void);

/* short veri tipinin alabileceği minimum değeri ve bellekte tuttuğu byte miktarını verir */
void limitShortMin(void);

/* short veri tipinin alabileceği maximum değeri ve bellekte tuttuğu byte miktarını verir */
void limitShortMax(void);

/* short veri tipinin alabileceği tüm pozitif değerleri ve bellekte tuttuğu byte miktarını verir */
void limitShortPozitive(void);

/* integer veri tipinin alabileceği minimum değeri ve bellekte tuttuğu byte miktarını verir */
void limitIntMin(void);

/* integer veri tipinin alabileceği maximum değeri ve bellekte tuttuğu byte miktarını verir */
void limitIntMax(void);

/* integer veri tipinin alabileceği tüm pozitif değerleri ve bellekte tuttuğu byte miktarını verir */
void limitIntPozitive(void);

/* long veri tipinin alabileceği minimum değeri ve bellekte tuttuğu byte miktarını verir */
void limitLongMin(void);

/* long veri tipinin alabileceği maximum değeri ve bellekte tuttuğu byte miktarını verir */
void limitLongMax(void);

/* long veri tipinin alabileceği tüm pozitif değerleri ve bellekte tuttuğu byte miktarını verir */
void limitLongPozitive(void);

/* verilen string değerin uzunluğunu bulur */
size_t stringLen(const char*);

/* iki string veriyi benzerlik bakımından karşılaştırır */
bool stringCompare(const char*, const char*);

/* iki string veriyi birleştirir */
char* stringConcat(const char*, const char*);

/* string veriyi null yapar */
void stringTruncate(char*);

/* dosya boyutunu verir */
long fileSize(const char *);

/* dosya içeriğini belirtilen karakter kadarını verir */
const char* fileContent(const char*, long);

/* dosya içeriğini hedef dosya içerisine koyalar */
bool fileCopy(const char*, const char*);

#endif