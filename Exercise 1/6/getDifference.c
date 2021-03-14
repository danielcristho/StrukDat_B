#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Menghitung jumlah hari antara 2 tanggal
 * Pre: Variabel bertipe struct dt1 dan dt2 terdefinisikan
 * Post: Fungsi mengembalikan jumlah hari antara 2 tanggal
 */
int getDifference(Date dt1, Date dt2 /* Struct berisi tanggal, bulan dan tahun dari input */)
{
    const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // Hitung jumlah hari sebelum tanggal pertama (d1)
    long int n1 = dt1.y * 365 + dt1.d;
    for (int i = 0; i < dt1.m - 1; i++)
        n1 += monthDays[i];
    // Tambah satu hari untuk setiap tahun kabisat
    n1 += countLeapYears(dt1);

    // Hitung jumlah hari sebelum tanggal pertama (d2)
    long int n2 = dt2.y * 365 + dt2.d;
    for (int i = 0; i < dt2.m - 1; i++)
        n2 += monthDays[i];
    // Tambah satu hari untuk setiap tahun kabisat
    n2 += countLeapYears(dt2);

    // Kembalikan selisih dari keduanya
    return (n2 - n1);
}
