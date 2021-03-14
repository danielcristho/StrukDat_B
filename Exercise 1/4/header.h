/* Ditulis oleh:
    nrp     : 5025201121
    nama    : Gloriyano C Daniel Pepuho

    Tanggal:
     Pembuatan: 14 Maret 2021

    Problem:
    Median dari himpunan n bilangan (tidak perlu dipisahkan) didapatkan dengan
    Menyusun bilangan dalam susunan dan mengambil bilangan yang berada pada posisi tengah.
    Apabila n bernilai ganjil, akan ada bilangan tengah yang unik. Sedangkan apabila n 
    bernilai genap, maka jumlah 2 bilangan yang berada ditengah kemudian dibagi dengan 2
    adalah median. Tulis sebuah program untuk membaca himpunan n positif bilangan bulat
    (asumsikan n <100) dan prin mediannya; n tidak diberikan tetapi 0 mengindikasikan akhir
    data.

    Analisis:
    terlebih dahulu membuat sebuah fungsi untuk melakukan pengurutan terhadap bilangan yang ada
    dan dan kemudian melakukan pemisahan antara bilangan ganjil dan genap.


    Desain:
    1. Membuat fungsi sorting dan median, dengan menambahkan variabel
    2. Meminta user menginputkan angka secara acak
    3. melakukan pengurutan pada bilangan dari yang terkecil sampai terbesar
    4. Melakukan pemisahan antara bilangan ganjil dan genap
    5. Menjalankan fungsi dari median 
    6. Menampilkan output.
    
    Implementasi:

    # include<stdio.h>

    void sort_function(int array[], int n);
    float median1(int array[], int n);

    int main() {
    int *a;
    int b = 0;
    float median = 0;

    a = malloc(sizeof(int));

    // Meminta input dari user
    printf("Input Number:\n");
    do
    { 
        User Menginputkan Angka  scanf("%d, &a[b]");
        a = realloc(a, (b + 2* sizeof(int)));
        b++;

    } while (a[b-1] != 0);
   
    // Sort the arrays
    sort_function(a, b-1);

    // melakukana perhitungan setelah sort
    median = median1(a, b-1);

    printf("\n\n The output is: %f\n", median1 );
    

    void Array_sort(int array[] , int n)
{
    // declare some local variables
    int i=0 , j=0 , temp=0;

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }

    printf("\nThe array after sorting is..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("\n%d",array[i]);
    }

    float Find_median(int array[] , int n)
{
    float median=0;

    // if number of elements are even
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    // if number of elements are odd
    else
        median = array[n/2];

    return median;
}

}
return 0;
}
*/

# include<stdio.h>

void sort_function(int array[], int n);
float median1(int array[], int n);

