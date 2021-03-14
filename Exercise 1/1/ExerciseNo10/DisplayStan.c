#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Fungsi untuk menampilkan banyaknya stand ke file output.txt
 */
void display_i(FILE *out, int i){
    fprintf(out,"The number of stands: %d\n", i);

}

