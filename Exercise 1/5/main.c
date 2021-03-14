/* Ditulis oleh:
Nrp   : 5025201121
Nama  : Gloriyano C. Daniel Pepuho
*/

/* Tanggal:
            pembuatan: 13 Maret 2021 */
/* problem:
  Tulis fungsi yang, diberi dua struktur tanggal
  d1 dan d2, mengembalikan -1 jika d1 datang sebelum d2, 0 jika d1 sama dengan d2, 
  dan 1 jika d1 muncul setelah d2.       

  Analisis:
  Pertama-tama, melakukan input d1&d2, yang dimana berisi tanggal Kemudian di deklarasikan 
  dengan variabel. Selanjutnya jika tanggal pada d1 = -1, maka di nyatakan 'tanggal kurang dari'
  jika tanggal pada d1 = 1, maka di nyatakan 'tanggal lebih dari', dan jika d1 dan d2 = 0 atau
  bernilai sama maka di nyatakan 'tanggal sama'.

  Design:
          Algoritma program;
          ```````````````````1. Membuat struct
                             2. Membuat fungsi yang relevan
                             3, Menetukan operator yang tepat dalama melakukan perbandingan tahun
                             4. Menampilkan hasil dari perbandingan masing2 tahun
  Implementasi:
          // include  library, kemudian memasukan variabel
          #include<stdio.h>
          struct date {
          int dd, mm, yy;  

          // protoipe fungsi  
          int date_cmp(struct date d1, struct date d2);
          void date_print(struct date d);  
          // menginptkan tangal 
          struct date d1 = {13, 03, 2021};
          struct date d2 = {27, 11, 2022};  

          # include "header.h"
          int main() {
 
          date_print(d1);
          int cmp = date_cmp(d1, d2);
          if(cmp == 0)
          printf(" tanggal sama ");
          else if (cmp > 0)
          printf(" tangal lebih dari ");
             else
              printf(" tanggal kurang dari ");
              date_print(d2);
         return 0;
         }
          /* compare the date 
          int date_cmp(struct date d1, struct date d2) {
          if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yy ==d2.yy)
          return 0;
          else if (d1.yy > d2.yy || d1.yy == d2.yy && d1.mm > d2.mm || 
           d1.yy == d2.yy && d1.mm == d2.mm && d1.dd > d2.dd)
          return 1;
          else return -1;
          }
          /* print the dates 
          void date_print(struct date d) {
          printf("%d/%d/%d", d.dd, d.mm, d.yy);
          }                       
*/                           

# include "header.h"
int main() {
 
 date_print(d1);
 int cmp = date_cmp(d1, d2);
 if(cmp == 0)
   printf(" tanggal sama ");
 else if (cmp > 0)
   printf(" tangal lebih dari ");
 else
   printf(" tanggal kurang dari ");
 date_print(d2);
 return 0;
}
/* compare the date */
int date_cmp(struct date d1, struct date d2) {
 if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yy ==d2.yy)
    return 0;
 else if (d1.yy > d2.yy || d1.yy == d2.yy && d1.mm > d2.mm || 
           d1.yy == d2.yy && d1.mm == d2.mm && d1.dd > d2.dd)
    return 1;
 else return -1;
}
/* print the dates */
 void date_print(struct date d) {
    printf("%d/%d/%d", d.dd, d.mm, d.yy);
 } 