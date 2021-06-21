#include "graph.h"

main() {
	int numVertices;
	Graph g;
	FILE * in;
	
	in = fopen("graph.in", "r");
	fscanf(in, "%d", &numVertices);
	g = newGraph(numVertices);
	buildGraph(in, g);
	printGraph(g);
	fclose(in);
}	// end main
