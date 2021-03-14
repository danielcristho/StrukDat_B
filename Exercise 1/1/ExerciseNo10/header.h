// Library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct
struct bazar{
    char name[100];
    int income;
    int expenses;
    int net;
}; // Berisi data data terkait stand yakni nama, pendapatan, pengeluaran dan pendapatan bersih

// Prototipe
void Sort(struct bazar stand[], struct bazar coba, int i);
void net_income(struct bazar stand[], int i);
void display(struct bazar stand[], FILE *out, int i);
void display_i(FILE *out, int i);
void condition(struct bazar stand[], FILE *out, int i);
void most_profit(struct bazar stand[], FILE *out, int i);
