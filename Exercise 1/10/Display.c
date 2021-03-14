#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Fungsi untuk menampilkan stand dari yang paling untung pada file output
 */
void display(struct bazar stand[], /* Array of struct berisi data-data terkait stand */
             FILE *out,           /* Pointer to file menuju file output */
             int i                /* Jumlah elemen dalam array */)
{
    int j;
    fprintf(out,"List of stands from the most profitable:\n-----------------------------\n");
    for(j=0;j<i;j++){
        fprintf(out,"%-15s : %d \n", stand[j].name, stand[j].net);
    }
}

