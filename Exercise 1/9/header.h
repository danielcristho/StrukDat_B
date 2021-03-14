// Library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct
typedef struct {
    int m;
    int cm;
    int total;
} Distance; // Struct berisi data terkait jarak

typedef struct {
    char name[30];
    Distance jump;
} Athlete; // Struct berisi data terkait atlet

// Prototipe
int dataGet(FILE *file, Athlete ath[]);
void dataShow(Athlete ath[], int n);
void sortjump(Athlete ath[], int lo, int hi);
int validator(FILE *file);
