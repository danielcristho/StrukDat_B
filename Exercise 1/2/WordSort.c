#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Mengurutkan data nama-nama berdasarkan leksikografi atau urutan alfabet
 * Pre: Array of struct c[], variabel integer lo dan hi terdefinisikan
 * Post : Elemen-elemen berupa nama dalam array of struct c[] akan urut sesuai
 * leksikografi
 */
void WordSort (contact c[], /* Array of struct berisi data nama-nama */
                int lo,          /* Batas bawah dalam sorting */
                int hi           /* Batas atas dalam sorting */)
{
	//Mengurutkan c dari lo hingga hi berdasarkan huruf nama
	int j, k;
	contact insertItem;

	for(j=lo+1; j<=hi; j++) {
		//Memproses c[lo+1] hingga c[hi]
		//Memasukkan c[j] ke urutan atau posisi seharusnya
		insertItem = c[j];
		k = j - 1;
		while(k>0 && strcmp(insertItem.name, c[k].name)<0) {
			c[k+1] = c[k];
			--k;
		}
		c[k+1] = insertItem;
	}
}
