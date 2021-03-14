/* Ditulis oleh:
Nrp: 5025201268
Nama: Hilmi Zharfan Rachmadi
*/

/* Tanggal:
        	Pembuatan: 13 Maret 2021
        	…………….
/* Problem:
    Tulis sebuah program dengan fungsi yang menghitung selisih hari antara 2 tanggal. Jika tanggal kedua
    sebelum tanggal pertama, kembalikan nilai negatif

/* Analysis:
    Untuk mendapatkan input dari user melalui konsol, digunakan scanf. Input berupa tanggal bulan dan tahun
    dalam bentuk bilangan. Kita ketahui bahwa dalam tanggal terdapat 3 bagian tersebut. Selanjutnya jumlah hari
    diperhatikan. Jumlah hari dalam tiap tahun adalah 365, kecuali 366 untuk tahun kabisat. Jumlah
    hari tiap bulannya adalah antara 30-31, kecuali 28 untuk Februari. Untuk menghitung jumlah hari antara dua tanggal
    (d1 dan d2), pertama kita menghitung dulu jumlah hari antara 00/00/0000 (anggaplah permulaan penanggalan masehi)
    menuju tanggal pertama (d1). Setelah itu hasilnya kita tambahkan dengan jumlah tahun kabisat, mengingat, tiap
    tahun kabisat jumlah hari dalam setahun bertambah satu. Kemudian, kita lakukan hal yang sama dengan tanggal kedua
    (d2), kita hitung jumlah hari antara 00/00/0000 menuju d2 dengan menghitung jumlah tahun kabisat di antaranya juga.
    Terakhir, kita kurangi keduanya, kita kurangi jumlah hari dari 00/00/0000 menuju d2 dengan jumlah hari dari 00/00/0000
    menuju d1.

    DATA REQUIREMENTS
    Problem Inputs
    Date dt1, dt2;  /*Struct berisi tanggal, bulan, dan tahun */

/* DESIGN :
   Initial Algorithm
   1. Deklarasikan Variabel Struct
   2. Dapatkan input tanggal pertama
   3. Dapatkan input tanggal kedua
   4. Hitung dan tampilkan selisih antara kedua tanggal
    4.1 Hitung jumlah hari antara 00/00/0000 menuju tanggal pertama dengan memerhatikan tahun kabisat
    4.2 Hitung jumlah hari antara 00/00/0000 menuju tanggal kedua dengan memerhatikan tahun kabisat
    4.3 Hitung selisih keduanya

/* IMPLEMENTATION : */

#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
int main()
{
    //Deklarasikan Variabel Struct
    Date dt1, dt2;

    //Dapatkan input tanggal pertama
    printf("Enter date, month, year separated by comma : \n");
    scanf("%d %d %d", &dt1.d, &dt1.m, &dt1.y);

    //Dapatkan input tanggal kedua
    printf("Enter another date, month, year separated by comma : \n");
    scanf("%d %d %d", &dt2.d, &dt2.m, &dt2.y);

    //Hitung dan tampilkan selisih antara kedua tanggal
    printf("Difference between two dates is %d\n",getDifference(dt1, dt2));

    return 0;
}
/*
    Test case 1:
    Enter date, month, year separated by comma :
    23 04 2003
    Enter another date, month, year separated by comma :
    11 09 2025
    Difference between two dates is 8177

    Test case 2:
    Enter date, month, year separated by comma :
    21 12 2012
    Enter another date, month, year separated by comma :
    20 04 2004
    Difference between two dates is -3167

    TESTING :
    https://www.timeanddate.com/date/duration.html
    https://planetcalc.com/273/
    Pengecekan ketepatan hasil dilakukan dengan memasukkan tanggal yang sama
    pada tiga website di atas. Terbukti hasil yang didapatkan sama. Dalam test
    case kedua terlihat pula bahwa program mampu menampilkan hasil negatif jika
    tanggal kedua terjadi sebelum tanggal pertama.
    */
