/* Ditulis oleh:
Nrp: 5025201268
Nama: Hilmi Zharfan Rachmadi
*/

/* Tanggal:
        	Pembuatan: 14 Maret 2021
        	…………….
/* Problem:
    Tulis sebuah program untuk membaca nama dan nomor telepon dari sebuah file input, lalu memasukkannya ke dalam structure array.
    Ketika pengguna memasukkan nama, maka tampilkan nomor teleponnya

/* Analysis:
    Pertama-tama, untuk mendapatkan input nama-nama dan nomor telepon dari sebuah file, dapat digunakan file pointer.
    Data yang dibaca dan didapatkan dari file akan dimasukkan ke dalam array of struct. Selanjutnya,
    pengguna akan diminta untuk memasukkan nama pilihan. Untuk pencarian kata, dilakukan menggunakan binary search.
    Maka dari itu, array harus diurutkan terlebih dahulu berdasarkan leksikografi nama-nama. Setelah menerima input
    berupa nama dari user, nomor telepon dari orang yang diminta ditampilkan.


    DATA REQUIREMENTS
    Problem Inputs
    FILE *file;         /*Pointer to file untuk mendapat data input nama dan nomor dari file
    contact call[100];  /*Array of struct berisi data nama dan nomor telepon
    int i;              /*Jumlah data nama dan nomor dalam file input
    char key[MAXlen];   /* Nama yang dicari


/* DESIGN :
   Initial Algorithm
   1. Deklarasikan array of struct
   2. Buka file input untuk membaca data di dalamnya
   3. Validasi adanya file
   4. Dapatkan data input dari file
   6. Urutkan data nama-nama berdasarkan leksikografi
   7. Dapatkan input pilihan nama
   8. Cari nama pilihan dalam array of struct

/* IMPLEMENTATION : */

#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi

int main()
{
    // Deklarasikan array of struct
     contact call[100];

    // Buka file input untuk membaca data di dalamnya
    FILE *file;
    fopen_s(&file, "contact.txt", "r+");

    // Validasi adanya file
    if (file == NULL) return 1;
    fseek(file, 0, SEEK_SET);

    // Dapatkan data input dari file
    int i = GetData (file, call);

    char key[MAXlen];

    // Urutkan data nama-nama berdasarkan leksikografi
    printf("CONTACT FINDER\n---------------------\n");
    WordSort(call, 0, i-1);

    // Dapatkan input pilihan nama
    printf("Enter a name > ");
    scanf("%[^\n]s", key);

    // Cari nama pilihan dalam array of struct
    BinSearch(i, call, key);


    return 0;
}

/*  INPUT FILE :
    Inui Takumi, +81-805-5562-000
    Yuji Kiba, +81-905-5563-245
    Masato Kusaka, +81-705-5589-672
    Kitazaki, +81-805-5590-103
    Syuji Mihara, +81-805-5523-099
    Leo, +81-905-5563-363

    HASIL RUN :

    CONTACT FINDER
    ---------------------
    Enter a name > Masato Kusaka
    +81-705-5589-672

    CONTACT FINDER
    ---------------------
    Enter a name > Hiden Aruto
    name not found

    TESTING :
    Terlihat bahwa program telah mampu membaca data input berupa nama dan nomor
    telepon dari file txt. Kemudian, ketika pengguna memasukkan nama, program
    bisa menampilkan nomor telepon pihak yang bersangkutan. Ketika nama yang
    dimasukkan tidak ada dalam kontak, maka program juga bisa menampilkan
    pesan yang sesuai. Dari sini dapat dikatakan bahwa program telah berjalan
    dengan benar.*/
