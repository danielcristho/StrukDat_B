#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Fungsi untuk menghitung apakah bazar rugi atau untung
 */
void condition(struct bazar stand[], /* Array of struct berisi data-data terkait stand */
               FILE *out,           /* Pointer to file menuju file output */
               int i                /* Jumlah elemen dalam array */)
{
    int j, sum_income=0, sum_expenses=0,total;
    for(j=0;j<i;j++)
    {
        sum_income+=stand[j].income;
        sum_expenses+=stand[j].expenses;
    }
    total = sum_income - sum_expenses;
    if(total<0) fprintf(out,"The loss is %d\n",total);
    else if (total>0) fprintf(out,"The profit is %d\n",total);
    else fprintf(out,"There is no profit nor loss\n");
}
