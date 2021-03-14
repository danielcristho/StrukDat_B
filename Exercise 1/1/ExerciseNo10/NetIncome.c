#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Fungsi untuk menghitung pendapatan bersih (profit) tiap stand
 */

void net_income(struct bazar stand[], /* Array of struct berisi data-data terkait stand */
                int i                /* Jumlah elemen dalam array */)
{
    for(int j=0;j<i;j++)
    {
        stand[j].net = stand[j].income - stand[j].expenses;
    }
}

