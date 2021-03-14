#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi

/*
 * Mengvalidasi adanya file input
 */
int validator(FILE *file /* File pointer menuju file input */)
{
    if (file == NULL)
    {
        printf("Invalid file\n");
        return 1;
    }
    return 0;
}
