/* Ditulis oleh:
Nrp: 5025201268
Nama: Hilmi Zharfan Rachmadi
*/

/* Tanggal:
        	Pembuatan: 12 Maret 2021
        	…………….
/* Problem:
   Diadakan sebuah survey terhadap 10 seniman pop. Pemilih diperbolehkan memberi satu suara untuk artis pilihannya.
   Pilihan artis ditentukan dalam bentuk angka 1 sampai 10. Input berupa nama-nama kandidat didapatkan dari file
   votes.txt. Nama-nama kandidat diikuti oleh suara. Tulis sebuah program untuk membaca dan mengevaluasi hasil survei.
   Hasil dicetak dalam urutan abjad nama artis, dan perolehan suara terbanyak diterima. Output hasil dicetak ke file
   results.txt

/* Analysis:
    Pertama-tama, untuk mendapatkan input nama-nama kandidat dari sebuah file, dapat digunakan file pointer. Nama-nama
    yang dibaca dalam file akan diassign ke dalam struct. Selanjutnya, dapat dilakukan penghitungan suara. Seperti nama
    kandidat, data jumlah suara akan dibaca dari file juga. Jika angka suara di luar 1-10, maka suara dinyatakan rusak atau
    tidak valid. Data yang valid akan dihitung, dan juga diassign ke array of struct sesuai kandidat yang dipilih. Dari sini
    akan terlihat perolehan suara dari tiap kandidat. Kemudian, data-data kandidat bisa disortir atau diurutkan. Yang pertam
    berdasarkan jumlah suara, dan yang kedua berdasarkan huruf nama (leksikografi). Setelah itu, hasil survey dapat dicetak
    ke dalam output file. Jumlah total suara, suara yang valid dan tidak valid akan ditampilkan, diikuti dengan perolehan
    suara tiap kandidat.


    DATA REQUIREMENTS
    Problem Inputs and Outputs
    search_params_t params;    /* batasan parameter pencarian
    char inv_filename[STR_SIZ] /* nama file inventarisasi *

    Problem Outputs
    Semua produk yang memenuhi pencarian

/* DESIGN :
   Initial Algorithm
   1. Deklarasikan Variabel
   2. Buka file input untuk membaca data di dalamnya
   3. Buka file output untuk menulis data di dalanya
   4. Dapatkan nama tiap kandidat
   5. Hitung jumlah suara dan peroleh suara tiap kandidat
   6. Urutkan kandidat berdasarkan jumlah suara
   7. Urutkan kandidat berdasarkan leksikografi atau abjad nama
   8. Tampilkan hasil dalam file
   9. Tutup kedua file input dan output

/* IMPLEMENTATION : */

#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
int main() {

	// Deklarasikan Variabel
	CandData artist[MAXNAMELENGTH+1];
	VoteCount count;

	// Buka file input untuk membaca data di dalamnya
	FILE *in = fopen("votes.txt", "r");

	// Buka file output untuk menulis data di dalanya
	FILE *out = fopen("results.txt", "w");

	// Dapatkan nama tiap kandidat
	initialize(artist, MAXCANDIDATES, in);

	// Hitung jumlah suara dan peroleh suara tiap kandidat
	processVotes(artist, MAXCANDIDATES, in, out, &count);

	// Urutkan kandidat berdasarkan jumlah suara
	sortByVote(artist, 1, MAXCANDIDATES);

	// Urutkan kandidat berdasarkan leksikografi atau abjad nama
	sortByName(artist, 1, MAXCANDIDATES);

	// Tampilkan hasil dalam file
	printResults(artist, MAXCANDIDATES, count, out);

	// Tutup kedua file input dan output
	fclose(in);
	fclose(out);

	return 0;
}

/* INPUT (votes.txt)
    Rintaro Shindo
    Daichi Kamijo
    Touma Kamiyama
    Kenshin Nagamine
    Kento Fukamiya
    Hayato Fukamiya
    Ren Akamichi
    Ryo Ogami
    Tetsuo Daishinji
    Reika Shindai

    3 1 2 5 4 3 5 3 5 3 2 8 1 6 7 7 3 5
    6 9 3 4 7 1 2 4 5 5 1 4 10 9 10 9 11
    12 9 10 3 4 2 8 18 0

   OUTPUT (results.txt)
    Invalid vote: 11
    Invalid vote: 12
    Invalid vote: 18

    Number of voters: 43
    Number of valid votes: 40
    Number of spoilt votes: 3

    Candidate Score

    Daichi Kamijo          4
    Hayato Fukamiya        2
    Kenshin Nagamine       5
    Kento Fukamiya         6
    Reika Shindai          3
    Ren Akamichi           3
    Rintaro Shindo         4
    Ryo Ogami              2
    Tetsuo Daishinji       4
    Touma Kamiyama         7

    The winner(s)
    Touma Kamiyama

    TESTING :
    Dapat terlihat bahwa program telah dapat membuka file teks input
    dan mengambil nama-nama kandidat darinya. Hasil perhitungan vote
    oleh program juga sudah sesuai dengan hasil perhitungan manual.
    Program juga dapat membedakan vote yang valid dan invalid. Untuk
    hasil perolehan suara, program telah dapat mengurutkan nama-nama
    kandidat berdasarkan alfabet atau leksikografinya dan menampilkan
    perolehan suara tiap kandidatnya. Terakhir, program telah dapat
    menentukan pemenang survei berdasarkan jumlah perolehan suara
    terbanyak. Maka dapat dinyatakan bahwa program telah sesuai
    yang diminta. */


