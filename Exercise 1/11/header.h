// Membuat library untuk dipakai di fungsi lain

// Libray
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LL long long
#define ULL unsigned long long
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286

// Struct
typedef struct
{
	int id[150];
}student; // Berisi ID dari tiap siswa

void DataGet (FILE* file, int reg, int list[], student std[]);
void DataShow (int list[], student std[]);

