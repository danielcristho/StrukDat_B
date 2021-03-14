#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Menentukan jumlah suara yang terbanyak
 * Pre: Variabel struct cand[], dan integer lo serta hi terdefinisikan
 * Post : Mengembalikan indeks suara terbanyak dari cand[lo] sampai cand[hi]
 */
int
getMost(CandData cand[], /* struct berisi data kandidat */
            int lo,          /* batas bawah indeks array */
            int hi           /* batas atas indeks array */)
{
	int j, big = lo;
	for(j=lo+1; j<=hi; j++)
		if(cand[j].numVotes > cand[big].numVotes)
			big = j;

	return big;
}
