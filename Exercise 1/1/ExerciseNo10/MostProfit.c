#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Fungsi untuk menentukan stand mana yang mendapat keuntungan tertinggi
 */
void most_profit(struct bazar stand[], /* Array of struct berisi data-data terkait stand */
                 FILE *out,           /* Pointer to file menuju file output */
                 int i                /* Jumlah elemen dalam array */)
{
    int x,y=1,z;                        //x sebagai indeks stand selain stand pertama (stand yang memiliki profit tertinggi)
                                        //y sebagai counter stand yang memiliki profit yang setara dengan stand pertama
                                        //z sebagai perulangan for loop kedua
    for(x=1;x<i;x++)
    {
        if(stand[0].net==stand[x].net) y++;
    }

    for(z=0;z<y;z++)
    {
        fprintf(out,"The most profitable stand is: %s with %d profit\n", stand[z].name, stand[z].net);
    }
}

