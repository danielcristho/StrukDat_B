#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
const char* PERSON_FORMAT_IN  = "%[^,], %[^\n]\n";
/*
 * Mendapatkan kata-kata bahasa Inggris dan Spanyol dari file input
 * Pre: file mengakses file teks dari catatan word yang telah
 * dibuka sebagai file input, dan array of struct w[] terdefinisikan
 * Post : Array of struct w[] akan berisi data dari file input
 */
int GetData (FILE* file, /* File pointer menuju file input */
             word w2[]   /* Array of struct berisi data kata*/ )
    {
        int i=0;
        while(!feof(file))
        {
            fscanf(file, PERSON_FORMAT_IN, w2[i].eng, w2[i].spn);
            i++;
        }
        return i;
    }
