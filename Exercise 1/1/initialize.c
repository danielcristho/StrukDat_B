#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Mendapatkan nama kandidat dari file input
 * Pre: in mengakses file teks dari catatan CandData yang telah
 * dibuka sebagai file input, dan max terdefinisikan
 */
void
initialize(CandData cand[], /* struct berisi data kandidat */
                int max,    /* jumlah maksimal kandidat */
                FILE *in    /* pointer ke text file yang berisi data kandidat */)
{
	char lastName[MAXNAMELENGTH];
	int j;

	for(j=1; j<=max; j++)
    {
		fscanf(in, "%s%s", cand[j].name, lastName);
		strcat(cand[j].name, " ");
		strcat(cand[j].name, lastName);
		cand[j].numVotes = 0;
	}
}
