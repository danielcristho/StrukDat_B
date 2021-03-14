#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Mengurutkan data nama kandidat berdasarkan leksikografi atau urutan alfabet
 * Pre: Array of struct cand[], variabel integer lo dan hi terdefinisikan
 * Post : Elemen-elemen berupa nama dalam array of struct cand[] akan urut sesuai
 * leksikografi
 */
void sortByName(CandData cand[], int lo, int hi) {
	//Mengurutkan cand dari lo hingga hi berdasarkan huruf nama
	int j, k;
	CandData insertItem;

	for(j=lo+1; j<=hi; j++) {
		//Memproses cand[lo+1] hingga cand[hi]
		//Memasukkan cand[j] ke urutan atau posisi seharusnya
		insertItem = cand[j];
		k = j - 1;
		while(k>0 && strcmp(insertItem.name, cand[k].name)<0) {
			cand[k+1] = cand[k];
			--k;
		}
		cand[k+1] = insertItem;
	}
}

