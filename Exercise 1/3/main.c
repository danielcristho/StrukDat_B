/* Ditulis oleh:
Nrp: 5025201268
Nama: Hilmi Zharfan Rachmadi
*/

/* Tanggal:
        	Pembuatan: 14 Maret 2021
        	…………….
/* Problem:
    Tulis sebuah program untuk membaca kata dalam Bahasa Inggris dan padanannya dalam bahasa Spanyol, lalu memasukkannya
    ke dalam structure array. Minta pengguna untuk memasukkan beberapa kata-kata dalam bahasa Inggris. Untuk tiap katanya
    tampilkan padanan kata dalam bahasa Spanyol. Modifikasi program supaya dapat pula bekerja sebaliknya (Dari Bahasa Spanyol
    ke Inggris).

/* Analysis:
    Pertama-tama, untuk mendapatkan input kata-kata bahasa Inggris danm padanan kata bahasa Spanyolnya dari sebuah file,
    dapat digunakan file pointer. Data yang dibaca dan didapatkan dari file akan dimasukkan ke dalam array of struct. Selanjutnya,
    pengguna akan diminta untuk memasukkan pilihan mode (Inggris -> Spanyol atau Spanyol -> Inggris) dan memasukkan kata pilihan
    mereka. Untuk pencarian kata, dilakukan menggunakan binary search. Maka dari itu, array harus diurutkan terlebih dahulu
    berdasarkan leksikografi kata-kata. Agar pengguna bisa memasukkan beberapa kata digunakan do while loop, yang akan berhenti ketika
    pengguna memasukkan sentinel value 3.


    DATA REQUIREMENTS
    Problem Inputs
    FILE *file;         /*Pointer to file untuk mendapat data input kata-kata dari file
    word w2[100];       /*Array of struct berisi data kata-kata dalam bahasa Inggris dan Spanyol
    int mod;            /*Mode pilihan pengguna
    int i;              /*Jumlah data kata-kata dalam file input
    char key[MAXlen];   /* Kata yang dicari


/* DESIGN :
   Initial Algorithm
   1. Deklarasikan array of struct
   2. Buka file input untuk membaca data di dalamnya
   3. Validasi adanya file
   4. Dapatkan data input dari file
   5. Dapatkan piluhan mode dari pengguna
   6. Urutkan data kata-kata berdasarkan leksikografi
   7. Dapatkan input pilihan kata
   6. Cari kata pilihan dalam array of struct

/* IMPLEMENTATION : */

#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi

int main()
{
    // Deklarasikan array of struct
    word w2[100];

    // Buka file input untuk membaca data di dalamnya
    FILE *file;
    fopen_s(&file, "words.txt", "r+");

    // Validasi adanya file
    if (file == NULL) return 1;
    fseek(file, 0, SEEK_SET);

    // Dapatkan data input dari file
    int i = GetData (file, w2);

    char key[MAXlen];

    printf("ENGLISH-SPANISH MINI DICTIONARY\n");
    printf("-------------------------------------\n");
    printf("(1) English -> Spanish\n(2) Spanish -> English\n(3) Quit\n");
    printf("Choose Mode : ");

    // Dapatkan piluhan mode dari pengguna
    int mod;
    scanf("%d", &mod);

    do
    {
        if (mod == 1)
        {
            // Urutkan data kata-kata berdasarkan leksikografi
            WordSort(w2, 0, i-1);

            // Dapatkan input pilihan kata
            printf("Enter an english word > ");
            scanf("%s", key);

            // Cari kata pilihan dalam array of struct
            BinSearch(i, w2, key);
        }
        else if (mod == 2)
        {
            // Urutkan data kata-kata berdasarkan leksikografi
            WordSortEsp(w2, 0, i-1);

            // Dapatkan input pilihan kata
            printf("Enter a spanish word > ");
            scanf("%s", key);

            // Cari kata pilihan dalam array of struct
            BinSearchEsp(i, w2, key);
        }
        else if (mod ==3)
            break;
        printf("\nENGLISH-SPANISH MINI DICTIONARY\n");
        printf("-------------------------------------\n");
        printf("(1) English -> Spanish\n(2) Spanish -> English\n(3) Quit\n");
        printf("Choose Mode : ");
        scanf("%d", &mod);
    } while (mod!=3);


    return 0;
}

/* FILE INPUT:
    Cat, Gato
    Sitting, Sentado
    Relax, Relajarse
    Masked, Enmascarado
    Rider, Jinete
    Saber, Sable
    Sword, Espada
    Tear, Arrancar
    Hole, Hueco
    World, Mundo
    Devil, Diablo

    HASIL RUN :
    ENGLISH-SPANISH MINI DICTIONARY
    -------------------------------------
    (1) English -> Spanish
    (2) Spanish -> English
    (3) Quit
    Choose Mode : 1
    Enter an english word > Hole
    Hueco

    ENGLISH-SPANISH MINI DICTIONARY
    -------------------------------------
    (1) English -> Spanish
    (2) Spanish -> English
    (3) Quit
    Choose Mode : 2
    Enter a spanish word > Mundo
    World

    ENGLISH-SPANISH MINI DICTIONARY
    -------------------------------------
    (1) English -> Spanish
    (2) Spanish -> English
    (3) Quit
    Choose Mode : 3

    TESTING :
    Dapat terlihat bahwa program telah mampu menerima input mode. Ketika dipilih mode 1
    program dapat menerima kata dalam bahasa inggris lalu menampilkan padanan katanya dalam bahasa
    spanyol. Ketika dipilih mode 2 program dapat menerima kata dalam bahasa spanyol lalu menampilkan
    padanan katanya dalam bahasa spanyol. Ketika dipilih no 3, program berhenti. Dari sini dapat
    dikatakan bahwa program telah berjalan dengan benar.
*/
