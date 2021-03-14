/* Ditulis oleh:
Nrp: 5025201268
Nama: Hilmi Zharfan Rachmadi
*/

/* Tanggal:
        	Pembuatan: 13 Maret 2021
        	…………….
/* Problem:
    Sebuah file berisi data nama-nama dan jarak lompatan atlet dalam sebuah lomba lompat jauh. Gunakanlah sebuah
    struktur untuk menyimpan nama dan jarak lompatan atlet-atlet. Buat program yang akan membaca dan menampilkan
    kembali data-data tersebut secara urut dari lompatan terjauh.

/* Analysis:
    Pertama-tama, untuk mendapatkan input nama-nama atlet dan jarak lompatan mereka dari sebuah file, dapat digunakan file pointer.
    Data yang dibaca dalam file akan diassign ke dalam array of struct, berisi nama dan jarak lompatan. Jarak lompatan sendiri adalah
    sebuah struct, yang terdiri dari jarak meter dan sentimeter. Selanjutnya, untuk mengurutkan jarak lompatan kita dapat terlebih
    dahulu menghitung jarak total lompatan. 1 meter adalah 100 sentimeter, dengan mengetahui hal ini, kita dapat menambahkan keduanya
    sehingga jarak lompatan secara total dinyatakan dalam bentuk cm.  Kemudian, pengurutan jarak lompatan dapat dilakukan dengan perbandin
    gan antar elemen array. Elemen yang bernilai lebih besar akan mengalami pertukaran, sehingga pada akhirnya akan berada pada indeks yang
    lebih awal. Terakhir, data nama atlet dan jarak lompatan mereka akan ditampilkan secara urut dari jarak lompatan yang terjauh.


    DATA REQUIREMENTS
    Problem Inputs
    FILE *file;         /*Pointer to file untuk mendapat data dari file
    Athlete a2[100];    /*Array of struct berisi data atlet

    Relevant Formulas
    1 meter  = 100 centimeters

/* DESIGN :
   Initial Algorithm
   1. Deklarasikan array of struct
   2. Buka file input untuk membaca data di dalamnya
   3. Validasi adanya file
   4. Dapatkan data input dari file
   5. Urutkan data atlet berdasarkan jarak lompatan total
   6. Menampilkan data atlet yang sudah diurutkan

/* IMPLEMENTATION : */

#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi

int main()
{
    // Deklarasikan array of struct
    Athlete a2[100];

    // Buka file input untuk membaca data di dalamnya
    FILE *file;
    fopen_s(&file, "athlete.txt", "r+");

    // Validasi adanya file
    validator(file);
    fseek(file, 0, SEEK_SET);

    // Dapatkan data input dari file
    int n;
    n = dataGet(file, a2);

    // Urutkan data atlet berdasarkan jarak lompatan total
    sortjump(a2, 0, n-1);

    // Menampilkan data atlet yang sudah diurutkan
    dataShow(a2, n);

    return 0;

/*
    INPUT :
    Takayama Jin, 5, 26
    Mizusawa Haruka, 6, 53
    Chihiro, 5, 10
    Jun Maehara, 4, 37
    Einosuke Mido, 3, 50
    Daisuke Yamamoto, 4, 82

    OUTPUT:
             Name                   Jump Distance
    ---------------------------------------------------
    Mizusawa Haruka      | 6m 53cm | Total : 653cm
    Takayama Jin         | 5m 26cm | Total : 526cm
    Chihiro              | 5m 10cm | Total : 510cm
    Daisuke Yamamoto     | 4m 82cm | Total : 482cm
    Jun Maehara          | 4m 37cm | Total : 437cm
    Einosuke Mido        | 3m 50cm | Total : 350cm

    TESTING :
    Dapat terlihat bahwa program mampu mengambil data dari file input.
    Kemudian berdasarkan data jarak lompatan, program juga telah mampu
    mengurutkan nama atlet. Maka, program dapat dikatakan bekerja dengan
    baik*/


}
