// Library
#include <stdio.h>
#include <string.h>

// Konstanta
#define MAXCANDIDATES	10 // Jumlah maksimal kandidat
#define MAXNAMELENGTH	31 // Panjang maksimal nama kandidat

// Struct
typedef struct {
	char name[MAXNAMELENGTH+1]; // Nama kandidat
	int numVotes; // Perolehan suara kandidat
} CandData;  // Struct berisi data yang terkait kandidat

typedef struct {
	int valid; // Jumlah suara yang valid
	int spoilt; // Jumlah suara yang invalid atau rusak
} VoteCount; // Struct berisi data yang terkait perolehan suara

// Prototipe fungsi
void initialize(CandData [], int, FILE*);
void processVotes(CandData [], int, FILE*, FILE*, VoteCount*);
int getMost(CandData [], int, int);
void printResults(CandData [], int, VoteCount, FILE*);
void sortByVote(CandData [], int, int);
void sortByName(CandData [], int, int);
