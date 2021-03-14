/* Ditulis oleh:
Nrp   : 5025201121
Nama  : Gloriyano C. Daniel Pepuho
*/

/* Tanggal:
            pembuatan: 13 Maret 2021 
            modifikasi1: 14 Maret 2021 */

/*Problem
   Panjang, ditentukan dalam meter dan sentimeter, diwakili oleh dua bilangan bulat. Misalnya, panjang 3m 75cm diwakili oleh 3 75.
   Menggunakan struktur untuk mewakili panjang, tulis fungsi untuk membandingkan, menambah dan mengurangi dua panjang.
*/
/*Analisis
    Pertama, di butuhkan struct untuk menyimpan panjang dalam satuan m & cm.
    Struct tersebut akan memiliki dua variabel (panjang1 dan panjang2). Untuk membandingkan kedua panjang
    cukup menggunakan 3 kondisi (lebih besar, sama dengan, atau lebih kecil). Untuk penjumlahan, dapat dengan
    mengalikan panjang.meter dengan 100 lalu ditambah dengan panjang.centi. sum_panjang.meter hasil bagi operasi
    tersebut dengan 100, sedangkan sum_panjang.centi sama dengan hasil operasi tersebut dikurangi sum_panjang.meter*100.
    Hal yang sama berlaku untuk operasi pengurangan. Hanya saja, perlu digunakan nilai mutlak agar hasilnya tidak negatif.
*/

/* Design
    Algoritma Program:  1. Membuat struct berisi tipe data int untuk menyimpan nilai meter dan centimeter
                        2. Membandingkan kedua panjang dengan memanggil fungsi yang relevan
                        3. Menjumlahkan kedua panjang, memanggil fungsi sum
                        4. Mengurangi kedua panjang
                        5. Menampilkan perbandingan, penjumlahan, dan pengurangan yang sesuai
                        1.1 Variabel yang dibuat dengan struct tersebut adalah 2 variabel input dan 2 variabel output
                        2.1 Mengecek terlebih dahulu nilai meternya
                            2.1.1 Bila nilai meter tidak sama, maka dapat segera ditentukan panjang mana yang lebih besar//kecil
                            2.1.2 Bila nilai meter sama, maka cek nilai centinya
                        2.2 Mengecek nilai centi
                            2.2.1 Bila nilai centi berbeda, maka dapat ditentukan panjang mana yang lebih besar/kecil
                            2.2.2 Bila nilai centi sama, maka dapat dipastikan keduan panjang tersebut sama
                        3.1 Mengubah semua panjang menjadi ke satuan centi (misal 3 75 -> 375)
                        3.2 Mencari panjang meternya dengan membagi nilai return fungsi sum dengan 100
                        3.3 Nilai centinya dapat dicari dengan mengurangi nilai return dengan nilai meter*100
                        4.1 Mengubah semua panjang menjadi ke satuan centi (misal 3 75 -> 375), lalu memutlakkan nilainya
                        4.2 Mencari panjang meternya dengan membagi nilai return fungsi sum dengan 100
                        4.3 Nilai centinya dapat dicari dengan mengurangi nilai return dengan nilai meter*100, lalu dimutlak agar hasilnya +
*/
//Implementasi
/*
#include<stdio.h> /* include library */ 
/*#include <stdlib.h> 
#include <math.h> /* include math library */

// struct untuk menyimpan  panjang satuan dalam meter&centimeter //
/*struct lenght {
    int cm;
    int meter;
};

void compare(struct lenght panjang1, struct lenght panjang2); // prototipe untuk melakukan perbandingan
int sum(struct lenght panjang1, struct lenght panjang2);      // prototipe untuk melakukan penjumlahan
int substract(struct lenght panjang1, struct lenght panjang2); // prototipe untuk melakukan pengurangan
*/
 /* membuat variabel 
    struct lenght panjang1, panjang2, jumlah, kurang; //membuat sruct dengan menambahkan variabel //
    int sum_results; // //sum_result digunakan untuk menyimpan nilai return dari pemanggilan fungsi sum
    int subs_results;   //substract_result digunakan untuk menyimpan nilai return dari pemanggilan fungsi substract
*/
//Input panjang1 dan panjang2 oleh user
/*
    printf("Enter the first length (m <space> cm): ");
    scanf("%d %d",&panjang1.m, &panjang1.cm);
    printf("Enter the second length (m <space> cm): ");
    scanf("%d %d",&panjang2.m, &panjang2.cm); */
/*  melakukan pemanggilan fungsi-fungsi, kemudian melakukan operasi penjumlahan, pengurangan, dan perbandinagan;
     //Pemanggilan fungsi-fungsi
    compare(panjang1,panjang2);
    sum_results =  sum(panjang1,panjang2);
    subs_results = substract(panjang1,panjang2);

    //Perhitungan penjumlahan dan pengurangan
    tambah.meter = sum_results/100;                             
    kurang.meter= abs(subs_result/100);                   
    kurang.centi = abs(subs_result) - (kurang.meter*100);  
    menampilkan hasil
    printf("The sum: %dm %dcm\nThe Substraction: %dm %dcm", tambah.meter, tambah.centi, kurang.meter, kurang.centi);    
    melakukan fungsi compare
    void compare(struct lenght panjang1, struct lenght panjang2){   //Parameter yang digunakan adalah struct panjang1 dan panjang2    

    if(panjang1.m>panjang2.m){                                  //Bila panjang1 yang meter > panjang2 yang meter,
        printf("Length 1 is greater than Length 2\n");          //otomatis panjang1 lebih panjang


    }else if(panjang1.m==panjang2.m){                 
        if(panjang1.cm>panjang2.cm) {                   
            printf("Length 1 is greater than Length 2\n");  
    }else if(panjang1.cm==panjang2.cm){                 
        printf("Length 1 is equal with Length 2\n");
    } else printf("Length 1 is smaller than Length 2\n");   
    }
    else printf("Length 1 is smaller than Length 2\n");
}

    int substract(struct lenght panjang1, struct lenght panjang2){
    int meter1 = panjang1.meter * 100, meter2 = panjang2.meter * 100;   // mengalikan nilai pada meter dengan 100      
    int total1 = meter1 + panjang1.centi, total2 = meter2 + panjang2.centi;   
    int kurang = total1-total2;                                         // mengurangi total1&total2
    abs(kurang);                                                           
    return kurang;                                                          
}
*
    int sum(struct lenght panjang1, struct lenght panjang2){
    int meter1 = panjang1.meter * 100, meter2 = panjang2.meter * 100; // mengalikan nilai pada hasil meter dengan 100        
    int total1 = meter1 + panjang1.centi, total2 = meter2 + panjang2.centi;   
    int jumlah = total1+total2; // menjumlahkan total1&total2(dalam satuan cm)                         
    return jumlah;   
    )                                                       
*/

# include "header.h"

int main() {
    struct lenght panjang1, panjang2, jumlah, kurang; //membuat sruct dengan menambahkan variabel //
    int sum_results; // //sum_result digunakan untuk menyimpan nilai return dari pemanggilan fungsi sum
    int subs_results;   //substract_result digunakan untuk menyimpan nilai return dari pemanggilan fungsi substract

     //Input panjang1 dan panjang2 oleh user
    printf("Enter the first length (m <space> cm): ");
    scanf("%d %d",&panjang1.m, &panjang1.cm);
    printf("Enter the second length (m <space> cm): ");
    scanf("%d %d",&panjang2.m, &panjang2.cm);

    //Pemanggilan fungsi-fungsi
    compare(panjang1,panjang2);
    sum_results =  sum(panjang1,panjang2);
    subs_results = substract(panjang1,panjang2);

    //Perhitungan penjumlahan dan pengurangan
    tambah.meter = sum_results/100;                             
    kurang.meter= abs(subs_result/100);                   
    kurang.centi = abs(subs_result) - (kurang.meter*100);  

    //Menampilkan hasil operasi penjumlahan dan pengurangan
    printf("The sum is: %dm %dcm\nThe Substraction is: %dm %dcm", tambah.meter, tambah.centi, kurang.meter, kurang.centi);
    return 0;
}
    
