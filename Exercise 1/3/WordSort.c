#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Mengurutkan data kata-kata berdasarkan leksikografi atau urutan alfabet
 * Pre: Array of struct w[], variabel integer lo dan hi terdefinisikan
 * Post : Elemen-elemen berupa kata dalam array of struct w[] akan urut sesuai
 * leksikografi
 */
void WordSort (word w[], /* Array of struct berisi data kata-kata */
                int lo,          /* Batas bawah dalam sorting */
                int hi           /* Batas atas dalam sorting */)
{
	//Mengurutkan w dari lo hingga hi berdasarkan huruf kata
	int j, k;
	word insertItem;

	for(j=lo+1; j<=hi; j++) {
		//Memproses w[lo+1] hingga w[hi]
		//Memasukkan w[j] ke urutan atau posisi seharusnya
		insertItem = w[j];
		k = j - 1;
		while(k>0 && strcmp(insertItem.eng, w[k].eng)<0) {
			w[k+1] = w[k];
			--k;
		}
		w[k+1] = insertItem;
	}
}
