#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Menghitung jumlah suara yang valid, rusak, dan perolehan suara tiap kandidat
 * Pre: in mengakses file teks dari catatan CandData yang telah dibuka sebagai
 * file input, out mengakses file teks yang akan dijadikan file output. Array of struct
 * cand[], variabel max dan variabel struct yang ditunjuk oleh temp terdefinisikan
 * Post: Variabel struct yang ditunjuk oleh temp akan diisi jumlah vote yang valid
 * yang rusak. Perolehan suara tiap kandidat terassign ke array of struct cand[].
 */
void
processVotes(CandData cand[], /* struct berisi data kandidat */
             int max,         /* jumlah maksimal kandidat */
             FILE *in,        /* pointer ke text file yang berisi data kandidat */
             FILE *out,       /* pointer menuju file teks output */
             VoteCount *temp  /* pointer menuju struct yang berisi data perolehan suara*/)
{
	int v;
	(*temp).valid  = 0;
	fscanf(in, "%d", &v);
	while(v != 0) {
		if(v < 1 || v > max) {
			fprintf(out, "Invalid vote: %d\n", v);
			++((*temp).spoilt);
		}
		else {
			++cand[v].numVotes;
			++((*temp).valid);
		}
		fscanf(in, "%d", &v);
	}
}

