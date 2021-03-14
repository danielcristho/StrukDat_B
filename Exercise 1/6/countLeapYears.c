#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Menghitung jumlah tahun kabisat sebelum tahun yang dimasukkan
 * Pre: Variabel bertipe struct d terdefinisikan
 * Post: Fungsi mengembalikan jumlah tahun kabisat sebelum tahun dari input
 */
int countLeapYears(Date d /* Struct berisi tanggal, bulan dan tahun */)
{
    int years = d.y;

    // Cek apakah tahun dari input termasuk tahun kabisat
    if (d.m <= 2)
        years--;

    // Sebuah tahun termasuk kabisat, jika kelipatan 4, kelipatan 400
    // Tapi bukan kelipatan 100
    return years / 4
           - years / 100
           + years / 400;
}
