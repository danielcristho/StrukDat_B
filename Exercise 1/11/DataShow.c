#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Fungsi untuk menampilkan data ID siswa tiap kelasnya
 */
void DataShow (int list[], student std[])
{
    int i;
	for(i = 0; i < 6; i++)
    {
		if(i == 0) printf("Students list for A Class : \n");
		else if(i == 1) printf("Students list for B Class : \n");
		else if(i == 2) printf("Students list for C Class : \n");
		else if(i == 3) printf("Students list for D Class : \n");
		else if(i == 4) printf("Students list for E Class : \n");
		else if(i == 5) printf("Students list for F Class : \n");
		int j;
		if(list[i] == 0) printf("None\n");
		else{
            printf("-----------------------------\n");
			for(j = 0; j < list[i]; j++) printf("%d\n", std[i].id[j]);
            printf("\n");
		}
	}
}
