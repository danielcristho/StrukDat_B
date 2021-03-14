#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Mencetak hasil survei, berupa nama kandidat dan perolehan suaranya,
 * ke dalam text file
 */
void
printResults(CandData cand[], /* struct berisi data kandidat */
                  int max,         /* jumlah maksimal kandidat */
                  VoteCount c,     /* variabel struct berisi perolehan suara */
                  FILE *out        /* pointer menuju file teks output */)
{
	int j, win, winningVote;

	fprintf(out, "\nNumber of voters: %d\n", c.valid+c.spoilt);
	fprintf(out, "Number of valid votes: %d\n", c.valid);
	fprintf(out, "Number of spoilt votes: %d\n", c.spoilt);
	fprintf(out, "\nCandidate Score\t\n\n", c.valid);

	for(j=1; j<=max; j++)
		fprintf(out, "%-20s %3d\n", cand[j].name, cand[j].numVotes);

	fprintf(out, "\nThe winner(s)\n");
	win = getMost(cand, 1, max);
	winningVote = cand[win].numVotes;

	for(j=1; j<=max; j++)
		if(cand[j].numVotes == winningVote) {
			fprintf(out, "%s\n", cand[j].name);
			fprintf(stdout, "%s\n", cand[j].name);
	}
}

