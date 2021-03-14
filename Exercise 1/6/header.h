#include <stdio.h>

// Struct
typedef struct{
    int d, m, y;
} Date; // Struct berisi tanggal bulan dan tahun

// Prototipe
int getDifference(Date , Date );
int countLeapYears(Date d);
