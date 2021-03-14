// Library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Konstanta
#define MAXlen 50 //Panjang maksimal string kata

// Struct
typedef struct {
    char name[MAXlen];
    char num[MAXlen];
} contact; // Struct berisi data-data nama dan nomor telepon

// Prototipe
int GetData (FILE* file, contact c[]);
void WordSort (contact c[], int lo, int hi);
int BinSearch(int n, contact c[], char key[]);
