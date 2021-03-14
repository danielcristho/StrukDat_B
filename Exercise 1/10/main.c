/* Ditulis oleh:
Nrp: 5025201268
Nama: Hilmi Zharfan Rachmadi
*/

/* Tanggal:
        	Pembuatan: 14 Maret 2021
        	…………….
/* Problem:
    Dalam sebuah bazar sekolah terdapat beberapa stand. Data-data nama, pemasukan dan pengeluaran stand tersebut disimpan
    dalam sebuah file. Buat fungsi untuk menghitung pendapatan bersih masing-masing stand dari yang untung tertinggi sampai
    terendah. Tampilkan juga jumlah stand, jumlah untung/rugi bazar, dan stand dengan keuntungan terbesar. Output ditampilkan
    melalui file seperti input.

/* Analysis:
    Pertama-tama, untuk mendapatkan data input berupa nama, pemasukan, pengeluaran stand, dapat digunakan file pointer. Data
    data yang dibaca dalam file, beserta pendapatan bersih akan diassign ke dalam struct. Selanjutnya, dapat digunakan fungsi
    untuk menghitung pendapatan bersih tiap stand, mengurutkan data profit tertinggi hingga terendah, menampilkan nama dan profit
    stand yang sudah urut, menampilkan banyaknya stand, menghitung untung/rugi bazar, dan menampilkan stand dengan profit terbesar.


    DATA REQUIREMENTS
    Problem input
    struct bazar stall[100]  // menyimpan data stand-stand bazar
    temp     // Sebagai variabel struct sementara untuk fungsi sorting
    FILE *in  // Pointer to file menuju file input

    Variabel Program
    int i,j; // Variabel pembantu dalam perulangan

    Problem Output
    FILE *out // Pointer to file menuju file output

    Relevant Formulas
    Pendapatan bersih = Pemasukan - Pengeluaran
    stand[j].net = stand[j].income - stand[j].expenses
    total = sum_income - sum_expenses

/* DESIGN :
   Initial Algorithm
   1. Deklarasikan Variabel Struct
   2. Buka file input untuk membaca data di dalamnya
   3. Buka file output untuk menulis data di dalanya
   4. Dapatkan nama, pemasukan dan pengeluaran stand lalu masukkan ke dalam struct
   5. Hitung pendapatan bersih masing-masing stand
   6. Urutkan stand berdasarkan profit
   7. Tampilkan stand beserta profitnya yang sudah urut
   8. Tampilkan banyaknya stand dalam bazar
   9. Hitung dan tampilkan kondisi untung/rugi bazar
   10.Tampilkan nama dan profit stand yang memiliki keuntungan tertinggi
   12.Tutup file
/* IMPLEMENTATION : */

#include "header.h"

int main()
{
    //Variabel untuk membantu perulangan
    int i,j;

    //Deklarasikan Variabel Struct
    struct bazar stall[100], temp;

    //Buka file input untuk membaca data di dalamnya
    FILE *in = fopen("input.txt","r+");

    //Buka file output untuk menulis data di dalanya
    FILE *out = fopen("output.txt","w+");

    if(in==NULL){
        printf("ERROR! Couldn't open file\n");
        exit(-1);
    }

    //Dapatkan nama, pemasukan dan pengeluaran stand lalu masukkan ke dalam struct
    for(i=0,fscanf(in,"%s",stall[i].name);strcmp(stall[i].name,"xxxxxx")!=0;i++){
        fscanf(in,"%d%d",&stall[i].income, &stall[i].expenses);
        fscanf(in,"%s",stall[i+1].name);
    }

    // Hitung pendapatan bersih masing-masing stand
    net_income(stall,i);

    // Urutkan stand berdasarkan profit
    Sort(stall, temp,i);

    // Tampilkan stand beserta profitnya yang sudah urut
    display(stall,out,i);

    //Tampilkan banyaknya stand dalam bazar
    display_i(out,i);

    // Hitung dan tampilkan kondisi untung/rugi bazar
    condition(stall,out,i);

    // Tampilkan nama dan profit stand yang memiliki keuntungan tertinggi
    most_profit(stall,out,i);

    //Tutup file
    fclose(in);
    fclose(out);

    return 0;
}

/*
    INPUT :
    Snacks 7000 2500
    Games 3200 7000
    Sports 3700 1570
    Sweets 4300 2000
    Shirts 5200 1200
    Bakery 5800 2300
    Beverages 2000 3000
    Desserts 7800 4500
    xxxxxx

    OUTPUT :
    List of stands from the most profitable:
    -----------------------------
    Snacks          : 4500
    Shirts          : 4000
    Bakery          : 3500
    Desserts        : 3300
    Sweets          : 2300
    Sports          : 2130
    Beverages       : -1000
    Games           : -3800
    The number of stands: 8
    The profit is 14930
    The most profitable stand is: Snacks with 4500 profit


    TESTING :
    Dapat terlihat bahwa program telah mampu menghitung keuntungan tiap stand, jumlah stand
    keuntungan terbanyak dan menentukan mana stand yang paling untung. Program juga telah
    dapat menampilkan stand secara urut dari yang memiliki profit terbanyak
    */

