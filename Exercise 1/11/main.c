/* Ditulis oleh:
Nrp: 5025201268
Nama: Hilmi Zharfan Rachmadi
*/

/* Tanggal:
		Pembuatan: 14 Maret 2021
*/

/* Problem:
    Sebuah file berisi informasi registrasi untuk 6 kursus : A,B,C,D,E,F. Tiap baris dalam file terdiri dari 7 digit ID pendaftaran
    siswa diikuti oleh enam nilai 0 atau 1. 1 berarti siswa terdaftar dalam kelas, dan 0 berarti tidak. Diasumsikan tidak ada lebih
    dari 100 siswa. File input data diakhiri oleh angka 0. Tulis program untuk membaca data dan prosedur daftar kelas untuk setiap kursus.

/* Analysis:
    Pertama-tama, untuk mendapatkan input ID siswa dan registrasi kelasnya dari sebuah file, dapat digunakan file pointer.
    Data yang dibaca dan didapatkan dari file akan dimasukkan ke dalam array of struct. Selanjutnya, akan ditampilkan
    daftar ID siswa yang terdaftar dalam kelas-kelas.

    DATA REQUIREMENTS
    Problem Inputs
    FILE *file;              /*Pointer to file untuk mendapat data input data siswa dari file
    struct student std[6];   /*Array of struct berisi data siswa dan pendaftaran kelasnya
    int reg;                 /*Input ID peserta
    int idnum;               /*Penanda siswa terdaftar dalam suatu kelas atau tidak

    Program Variable
    int list[6];             /*Menunjukkan penambahan ID pada tiap kelas
    int i;                   /*Variabel pembantu looping

/* DESIGN :
   Initial Algorithm
   1. Buka file input untuk membaca data di dalamnya
   2. Dapatkan ID dan informasi registrasi lalu masukkan ke dalam struct
   3. Tampilkan daftar ID yang terdaftar pada tiap kelas
   4. Tutup file */


// IMPLEMENTATION :

#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi

int main()
{
    // Buka file input untuk membaca data di dalamnya
	FILE *file;
	if((file = fopen("class.txt","r")) == NULL)
    {
		printf("Error! opening file");
		exit(1);
	}

    // Dapatkan ID dan informasi registrasi lalu masukkan ke dalam struct
	student std[6];
	int reg;
	fscanf(file, "%d", &reg);
	int list[6];
	memset(list, 0, sizeof(list));

	DataGet (file, reg, list, std);

	// Tampilkan daftar ID yang terdaftar pada tiap kelas
	DataShow (list, std);

	// Tutup file
	fclose(file);
	return 0;
}

/*
    FILE INPUT :
    2578746 1 1 1 0 0 1
    6420824 0 1 0 0 1 1
    4031027 1 1 1 1 0 0
    4090049 0 1 0 1 0 1
    9349837 1 0 1 0 1 0
    1860529 0 1 1 1 0 0
    2226057 1 0 0 1 1 1
    4853259 0 1 0 1 0 1
    2578720 1 1 1 0 1 1
    4196287 1 1 1 1 1 0
    0

    HASIL RUN:
    Students list for A Class :
    -----------------------------
    2578746
    4031027
    9349837
    2226057
    2578720
    4196287

    Students list for B Class :
    -----------------------------
    2578746
    6420824
    4031027
    4090049
    1860529
    4853259
    2578720
    4196287

    Students list for C Class :
    -----------------------------
    2578746
    4031027
    9349837
    1860529
    2578720
    4196287

    Students list for D Class :
    -----------------------------
    4031027
    4090049
    1860529
    2226057
    4853259
    4196287

    Students list for E Class :
    -----------------------------
    6420824
    9349837
    2226057
    2578720
    4196287

    Students list for F Class :
    -----------------------------
    2578746
    6420824
    4090049
    2226057
    4853259
    2578720

    TESTING :
    Dapat terlihat bahwa program telah mampu mengambil data dari file input berisi ID dan kelas yang
    didaftar oleh tiap siswa. Program juga dapat menampilkan ID siswa yang mana saja yang terdaftar
    dalam sebuah kelas. Dengan demikian, program dapat dikatakan sudah berjalan dengan benar. */
