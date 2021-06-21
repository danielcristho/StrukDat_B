#include "graph.h"

void printGraph(Graph g) {
	int j;
	GEdgePtr p;

	for(j = 1; j <= g->numV; j++) {
		printf("%s:", g->vertex[j].id);
		p = g->vertex[j].firstEdge;
		while(p != NULL) {
			printf(" %s %d", g->vertex[p->child].id, p->weight);
			p = p->nextEdge;
		}
		printf("\n");
	}
}	// end printGraph
