#include "graph.h"

Graph newGraph(int n) {
	Graph p;
	
	if(n > MaxVertices) {
		printf("\nToo big. Only %d vertices allowed.\n", MaxVertices);
		exit(1);
	}
	p = (Graph) malloc(sizeof(struct graph));
	p->numV = n;
	
	return p;
} // end newGraph
