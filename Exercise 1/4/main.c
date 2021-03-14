#include "header.h"

int main() {
    int *a;
    int b = 0;
    float median = 0;

    a = malloc(sizeof(int));

    // Meminta input dari user
    printf("Input Number:\n");
    do
    {
        /* User Menginputkan Angka */ scanf("%d, &a[b]");
        a = realloc(a, (b + 2* sizeof(int)));
        b++;

    } while (a[b-1] != 0);
   
    // Sort the arrays
    sort_function(a, b-1);

    // melakukana perhitungan setelah sort
    median = median1(a, b-1);

    printf("\n\n The output is: %f\n", median1 );
    return 0;
}