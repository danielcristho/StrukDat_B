#include "graph.h"

void buildGraph(FILE * in, Graph g) {
	int j, k, numEdges, weight;
	char nodeId[MaxWordSize+1],
		 adjId[MaxWordSize+1];
	
	for(j = 1; j <= g->numV; j++) {
		g->vertex[j] = newGVertex("");		// create a vertex node
		fscanf(in, "%s", g->vertex[j].id);	// read the name into id
	}
	
	for(j = 1; j <= g->numV; j++) {
		fscanf(in, "%s%d", nodeId, &numEdges);	// parent id and numEdges
		for(k = 1; k <= numEdges; k++) {
			fscanf(in, "%s%d", adjId, &weight);	// get child id and weight
			addEdge(nodeId, adjId, weight, g);
		}
	}
}	// end buildGraph
