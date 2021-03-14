#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Fungsi untuk membaca data ID dan informasi pendaftaran dalam file input
 */
void DataGet (FILE* file, int reg, int list[], student std[])
{
	while(reg)
    {
		int i, idnum;
		for(i = 0; i < 6; i++){
			fscanf(file, "%d", &idnum);
			if(idnum) std[i].id[list[i]++] = reg;
		}
		fscanf(file, "%d", &reg);
	}
}
