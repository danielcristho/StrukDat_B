#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi

/*
 * Menampilkan nama dan jarak lompatan atlet
 * Pre: Array of struct ath[] dan variable integer n terdefinisikan
 */
const char* PERSON_FORMAT_OUT = "%-20s | %dm %dcm | Total : %dcm\n";

void dataShow(Athlete ath[], /* Array of struct berisi data atlet*/
              int n          /* Jumlah elemen dalam array ath[] */)
{
     printf("     %-20s   %-20s\n", "Name", "Jump Distance");
     printf("---------------------------------------------------\n");
    for (int a=0; a<n; a++)
    {
        printf(PERSON_FORMAT_OUT, ath[a].name, ath[a].jump.m, ath[a].jump.cm, ath[a].jump.total);
    }
}
