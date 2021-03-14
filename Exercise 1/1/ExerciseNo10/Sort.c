#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Fungsi untuk mengurutkan stand berdasarkan pendapatan bersih
 */
void Sort(struct bazar stand[], /* Struct bazar awal */
          struct bazar temp,   /* Struct bazar cadangan */
          int i                /* Indeks pembantu looping */)
    {
        for (int a = 1; a < i; a++)
        {
            for (int b = 0; b < i - a; b++)
                {
                    if (stand[b].net<stand[b+1].net)
                    {
                        temp = stand[b];
                        stand[b] = stand[b+1];
                        stand[b+1] = temp;
                    }
                }
        }
    }

