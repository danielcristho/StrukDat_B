#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
const char* PERSON_FORMAT_IN  = "%[^,], %[^\n]\n";
/*
 * Mendapatkan nama dan nomor telepon file input
 * Pre: file mengakses file teks dari catatan contact yang telah
 * dibuka sebagai file input, dan array of struct c[] terdefinisikan
 * Post : Array of struct c[] akan berisi data dari file input
 */
int GetData (FILE* file, /* File pointer menuju file input */
             contact c[]   /* Array of struct berisi data kata*/ )
    {
        int i=0;
        while(!feof(file))
        {
            fscanf(file, PERSON_FORMAT_IN, c[i].name, c[i].num);
            i++;
        }
        return i;
    }
