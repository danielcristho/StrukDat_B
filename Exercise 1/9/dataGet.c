#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi

/*
 * Mendapatkan nama dan jarak lompatan atlet dari file input
 * Pre: file mengakses file teks dari catatan Athlete yang telah
 * dibuka sebagai file input, dan array of struct ath[] terdefinisikan
 * Post : Array of struct ath[] akan berisi data dari file input
 */
const char* PERSON_FORMAT_IN = "%[^,], %d, %d\n";

int dataGet(FILE *file,   /* File pointer menuju file input */
            Athlete ath[] /* Array of struct berisi data atlet*/)
{
    int i=0;
    while(!feof(file))
    {
        fscanf(file, PERSON_FORMAT_IN, ath[i].name, &ath[i].jump.m, &ath[i].jump.cm);
        ath[i].jump.total = (ath[i].jump.m * 100) + ath[i].jump.cm;
        i++;
    }
    int amount = i;
    return amount;
}
