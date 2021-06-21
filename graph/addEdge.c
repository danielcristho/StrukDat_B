#include "graph.h" 

void addEdge(char x[], char y[], int weight, Graph g) {
	// add an edge x -> y with a given weight
	int j, k;
	GEdgePtr ep, prev, curr;
	
	// find x in the list of nodes; its location is j;
	for(j = 1; j <= g->numV; j++)
		if(strcmp(x, g->vertex[j].id) == 0)
			break;
			
	// find y in the list of nodes; its location is k;
	for(k = 1; k <= g->numV; k++)
		if(strcmp(y, g->vertex[k].id) == 0)
			break;
			
	if(j > g->numV || k > g->numV) {
		printf("No such edge: %s->%s\n", x, y);
		exit(1);
	}
	
	ep = newGEdge(k, weight);	// cre ate edge vertex
	
	// add it to the list of edges, possible empty, from x;
	// it is added so that the list is in order by vertex id
	prev = curr = g->vertex[j].firstEdge;
	while(curr != NULL && strcmp(y, g->vertex[curr->child].id) > 0) {
		prev = curr;
		curr = curr->nextEdge;
	}
	
	if(prev == curr) {
		ep->nextEdge = g->vertex[j].firstEdge;
		g->vertex[j].firstEdge = ep;
	}
	else {
		ep->nextEdge = curr;
		prev->nextEdge = ep;
	}
}	// end addEdge
