// Library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Konstanta
#define MAXlen 50 //Panjang maksimal string kata

// Struct
typedef struct {
    char eng[MAXlen];
    char spn[MAXlen];
} word; // Berisi kata-kata dalam bahasa spanyol dan inggris

// Prototipe
int GetData (FILE* file, word w2[]);
void WordSort (word w[], int lo, int hi);
int BinSearch(int n, word a[], char key[]);
void WordSortEsp (word w[], int lo, int hi);
int BinSearchEsp(int n, word a[], char key[]);
