#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi

/*
 * Mengurutkan data atlet berdasarkan total jarak lompatan
 * Pre: Array of struct ath[], variabel integer lo dan hi terdefinisikan
 * Post : Elemen-elemen dalam array of struct ath[] akan urut sesuai jarak lompatan atlet
 */

void sortjump(Athlete ath[],/* Array of struct berisi data atlet*/
              int lo,       /* Batas bawah dalam sorting */
              int hi        /* Batas atas dalam sorting */)
{
	//Mengurutkan ath dari lo hingga hi, secara descending, berdasarkan jarak lompatan
	int j, k;
	Athlete insertItem;

	for(j=lo+1; j<=hi; j++) {
		//Memproses ath[lo+1] hingga ath[hi]
		//Memasukkan ath[j] ke urutan atau posisi seharusnya
		insertItem = ath[j];
		k = j - 1;
		while(k>=lo && insertItem.jump.total>ath[k].jump.total) {
			ath[k+1] = ath[k];
			--k;
		}
		ath[k+1] = insertItem;
	}
}
