#include<stdio.h> /* include library */ 
#include <stdlib.h> 
#include <math.h> /* include math library */

// struct untuk menyimpan  panjang satuan dalam meter&centimeter //
struct lenght {
    int cm;
    int meter;
};

void compare(struct lenght panjang1, struct lenght panjang2); // prototipe untuk melakukan perbandingan
int sum(struct lenght panjang1, struct lenght panjang2);      // prototipe untuk melakukan penjumlahan
int substract(struct lenght panjang1, struct lenght panjang2); // prototipe untuk melakukan pengurangan
